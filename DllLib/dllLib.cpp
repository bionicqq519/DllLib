#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "dllLib.h"

extern "C"
{
    int dll_Init(unsigned char **dllhandle)
    {
        int ret = 0;
        *dllhandle = (unsigned char *)malloc(sizeof(unsigned char)*64);
        return ret;
    }

    int dll_Run(unsigned char* dllhandle, unsigned char* ucPara1, int dPara2)
    {
        int ret = 0;
        memcpy(dllhandle, ucPara1, dPara2);
        return ret;
    }

    int dll_DeInit(unsigned char** dllhandle)
    {
        int ret = 0;
        free(*dllhandle);
        *dllhandle = NULL;
        return ret;
    }
}