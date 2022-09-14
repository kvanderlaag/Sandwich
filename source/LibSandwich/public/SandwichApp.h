#pragma once

#include <ComponentManager.h>
#include <TransformComponent.h>

struct SDL_Window;

namespace sandwich
{
	class Renderer;

	class Application
	{

	public:
		Application();
		~Application();

		// returns an integer error code, or 0 for success
		int Initialize(int argumentCount, char** arguments);

		// return true if shutdown is clean, false if any errors occur
		bool Shutdown();

		// return nonzero error code if anything untoward happens.
		int Run();

		inline bool IsInitialized() const 
		{
			return m_initialized;
		}
	private:
		SDL_Window* m_window = nullptr;
		Renderer* m_renderer = nullptr;

		bool m_initialized = false;		

		ComponentManager<TransformComponent> m_transformManager;
	};
}