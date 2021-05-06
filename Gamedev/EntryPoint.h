#pragma once
#include"stdio.h"
#include "Application.h"
#ifdef GDV_PLATFORM_WINDOWS
extern Gamedev::Application* Gamedev::CreateApplication();
int main(int argc, char** argv)
{
	printf("hello!\n");
	auto app = Gamedev::CreateApplication();
	app->run();
	delete app;
}
#endif