#pragma once

#ifdef DLL_LIB_EXPORTS
#define DLL_LIB_API _declspec(dllexport)
#else
#define DLL_LIB_API _declspec(dllimport)
#endif

extern "C" DLL_LIB_API char* task(char* s1, char* s2);