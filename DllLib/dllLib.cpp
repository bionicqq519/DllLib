#include <stdio.h>
#include "dllLib.h"

extern "C"
{
    int dll_Init()
    {
        int ret = 0;
        printf("dll_Init\n");
        return ret;
    }

    int dll_Run(unsigned char* ucPara1, int dPara2)
    {
        int ret = 0;
        printf("dll_Run Para1 = %s\n", ucPara1);
        printf("dll_Run Para2 = %d\n", dPara2);
        return ret;
    }

    int dll_DeInit()
    {
        int ret = 0;
        printf("dll_Run\n");
        return ret;
    }
}