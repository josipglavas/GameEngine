#include "Enginepch.h"
#include "Application.h"
#include "Engine/Events/ApplicationEvent.h"
#include "Engine/Log.h"

namespace Engine {

	Application::Application() {

	}

	Application::~Application() {

	}


	void Application::Run() {
		WindowResizeEvent e(1280, 720);
		ENGINE_TRACE(e);

		while (true);
	}


}