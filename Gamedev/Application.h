#pragma once
#include "Core.h"
namespace Gamedev {

	class GAMEDEV_API Application
	{
	public:
		Application();
		virtual ~Application();
		void run();
	};
	Application* CreateApplication();
}
