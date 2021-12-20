#ifndef _DLLLIB_H_
#define _DLLLIB_H_

#ifdef dll_EXPORTS
#define dll_API __declspec(dllexport)
#else
#define dll_API __declspec(dllimport)
#endif

extern "C"
{
	dll_API int dll_Init();

	dll_API int dll_Run(unsigned char *ucPara1, int dPara2);

	dll_API int dll_DeInit();
}


#endif	//_DLLLIB_H_