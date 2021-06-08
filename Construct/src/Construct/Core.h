#pragma once

#ifdef CST_PLATFORM_WINDOWS
	#ifdef CST_BUILD_DLL
		#define CST_API __declspec(dllexport)
	#else
		#define CST_API __declspec(dllimport)
	#endif
#else
	#error Constuct only supports windows.
#endif
