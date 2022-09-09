#pragma once

#ifdef JR_PLATFORM_WINDOWS

	#ifdef JR_BUILD_DLL
		#define JOURNAL_API __declspec(dllexport)
	#else 
		#define JOURNAL_API __declspec(dllimport)
	#endif

#else

	#error Not supported platform

#endif
