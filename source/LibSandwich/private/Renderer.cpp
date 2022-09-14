#include <cassert>

#include <Renderer.h>
#include <Vector.h>

//#include <BgfxLogo.h>

namespace sandwich
{
	Renderer* Renderer::s_instance = nullptr;
	bx::DefaultAllocator Renderer::s_allocator;
	bx::SpScUnboundedQueue Renderer::s_apiThreadEvents(&s_allocator);

	Renderer& Renderer::Create(Renderer::RendererArgs arguments)
	{
		assert(Renderer::s_instance == nullptr);
		s_instance = new Renderer(arguments);
		return *s_instance;
	}

	void Renderer::Destroy()
	{
		assert(Renderer::s_instance != nullptr);
		delete s_instance;
		s_instance = nullptr;
	}

	Renderer::Renderer(Renderer::RendererArgs& args)
		: m_apiThread()
	{
		m_apiThread.init(RunApiThread, &args);
	}

	Renderer::~Renderer()
	{
		m_apiThread.shutdown();
	}

	int32_t Renderer::RunApiThread(bx::Thread* self, void* userData)
	{
		RendererArgs* args = (RendererArgs*)userData;

		// Initialize bgfx using the native window handle and window resolution.
		bgfx::Init init;
#ifdef _WIN32
		init.type = bgfx::RendererType::Direct3D12;
#else
		init.type = bgfx::RendererType::OpenGL;
#endif
		
		init.platformData = args->platformData;
		init.resolution.width = args->width;
		init.resolution.height = args->height;
		init.resolution.reset = BGFX_RESET_VSYNC;
		if (!bgfx::init(init))
		{
			fprintf(stdout, "Error initializing bgfx\n");
			return 1;
		}
		fprintf(stdout, "bgfx initialized\n");

		// Set view 0 to the same dimensions as the window and to clear the color buffer.
		const bgfx::ViewId kClearView = 0;
		bgfx::setViewClear(kClearView, BGFX_CLEAR_COLOR);
		bgfx::setViewRect(kClearView, 0, 0, bgfx::BackbufferRatio::Equal);
		uint32_t width = args->width;
		uint32_t height = args->height;
		bool showStats = false;
		bool exit = false;
		while (!exit) {
			// Handle events from the main thread.
			while (auto ev = (EventType*)Renderer::s_apiThreadEvents.pop())
			{
				if (*ev == EventType::Key)
				{
					auto keyEvent = (KeyEvent*)ev;
					if (keyEvent->key == SDL_SCANCODE_S && keyEvent->action == SDL_KEYUP)
					{
						showStats = !showStats;
					}
					if (keyEvent->key == SDLK_q)
					{
						exit = true;
					}
				}
				else if (*ev == EventType::Resize)
				{
					auto resizeEvent = (ResizeEvent*)ev;
					bgfx::reset(resizeEvent->width, resizeEvent->height, BGFX_RESET_VSYNC);
					bgfx::setViewRect(kClearView, 0, 0, bgfx::BackbufferRatio::Equal);
					width = resizeEvent->width;
					height = resizeEvent->height;
				}
				else if (*ev == EventType::Exit)
				{
					exit = true;
				}
				delete ev;
			}
			// This dummy draw call is here to make sure that view 0 is cleared if no other draw calls are submitted to view 0.
			bgfx::touch(kClearView);
			// Use debug font to print information about this example.
			bgfx::dbgTextClear();
			//bgfx::dbgTextImage(bx::max<uint16_t>(uint16_t(width / 2 / 8), 20) - 20, bx::max<uint16_t>(uint16_t(height / 2 / 16), 6) - 6, 40, 12, s_logo, 160);
			bgfx::dbgTextPrintf(0, 0, 0x0f, "Press F1 to toggle stats.");
			bgfx::dbgTextPrintf(0, 1, 0x0f, "Color can be changed with ANSI \x1b[9;me\x1b[10;ms\x1b[11;mc\x1b[12;ma\x1b[13;mp\x1b[14;me\x1b[0m code too.");
			bgfx::dbgTextPrintf(80, 1, 0x0f, "\x1b[;0m    \x1b[;1m    \x1b[; 2m    \x1b[; 3m    \x1b[; 4m    \x1b[; 5m    \x1b[; 6m    \x1b[; 7m    \x1b[0m");
			bgfx::dbgTextPrintf(80, 2, 0x0f, "\x1b[;8m    \x1b[;9m    \x1b[;10m    \x1b[;11m    \x1b[;12m    \x1b[;13m    \x1b[;14m    \x1b[;15m    \x1b[0m");
			const bgfx::Stats* stats = bgfx::getStats();
			bgfx::dbgTextPrintf(0, 2, 0x0f, "Backbuffer %dW x %dH in pixels, debug text %dW x %dH in characters.", stats->width, stats->height, stats->textWidth, stats->textHeight);
			Math::Vector2f pos1 = { 15.2f, -3.2f };
			Math::Vector2f pos2 = { -4.11f, 16.2f };

			Math::Vector2f testLerp = Lerp(pos1, pos2, 0.5f);
			Math::Vector2f testLerp2 = {};
			testLerp2.x = pos1.x + ((pos2.x - pos1.x) * 0.5f);
			testLerp2.y = pos1.y + ((pos2.y - pos1.y) * 0.5f);
            bgfx::dbgTextPrintf(0, 3, 0x0f, "Vector test: %.2f, %.2f", testLerp.x, testLerp.y);
			bgfx::dbgTextPrintf(0, 4, 0x0f, "Vector test 2: %.2f, %.2f", testLerp2.x, testLerp2.y);
			// Enable stats or debug text.
			bgfx::setDebug(showStats ? BGFX_DEBUG_STATS : BGFX_DEBUG_TEXT);
			// Advance to next frame. Main thread will be kicked to process submitted rendering primitives.
			bgfx::frame();
		}
		bgfx::shutdown();
		return 0;
	}

	void Renderer::PushEvent(ExitEvent* exitEvent)
	{
		s_apiThreadEvents.push(exitEvent);
	}

	void Renderer::PushEvent(KeyEvent* keyEvent)
	{
		s_apiThreadEvents.push(keyEvent);
	}

	void Renderer::PushEvent(ResizeEvent* resizeEvent)
	{
		s_apiThreadEvents.push(resizeEvent);
	}
}