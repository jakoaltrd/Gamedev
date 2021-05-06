#pragma once
#ifdef GDV_PLATFORM_WINDOWS
	#ifdef GDV_BUILD_DLL
		#define GAMEDEV_API __declspec(dllexport)
	#else
		#define GAMEDEV_API __declspec(dllimport)
	#endif
#else
#error Gamedev only support windows!
#endif
