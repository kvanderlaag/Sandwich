#pragma once

#include <bx/thread.h>
#include <bgfx/platform.h>

#include <SDL.h>

namespace sandwich
{
	class Renderer
	{
		// Public structs for events and initialization
		// TODO: Move events to a separate header
	public:
		struct RendererArgs
		{
			bgfx::PlatformData platformData;
			uint32_t width;
			uint32_t height;

		};

		enum class EventType
		{
			Exit,
			Key,
			Resize
		};

		struct ExitEvent
		{
			EventType type = EventType::Exit;
		};

		struct KeyEvent
		{
			EventType type = EventType::Key;
			SDL_Scancode key;
			uint32_t action;
		};

		struct ResizeEvent
		{
			EventType type = EventType::Resize;
			int width;
			int height;
		};

	private:
		static int32_t RunApiThread(bx::Thread* self, void* userData);
		static bx::SpScUnboundedQueue s_apiThreadEvents;
		static bx::DefaultAllocator s_allocator;
		static Renderer* s_instance;

	public:
		static Renderer& Create(RendererArgs arguments);
		static void Destroy();

	public:
		void PushEvent(ExitEvent* exitEvent);
		void PushEvent(KeyEvent* keyEvent);
		void PushEvent(ResizeEvent* resizeEvent);

	private:
		Renderer(RendererArgs& args);
		~Renderer();

	private:
		bx::Thread m_apiThread;
	};
}