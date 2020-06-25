#pragma once

#ifdef GN_PLATFORM_WINDOWS
	#ifdef GN_BUILD_DLL
		#define GENIX_API __declspec(dllexport)
	#else
		#define	GENIX_API __declspec(dllimport)
	#endif // GN_BUILD_DLL
#else
	#error GENIX only support Windows!
#endif