#include "pch.h"
#include "dllmain.h"

__declspec(dllexport) void DisplayHelloFromMyDLL()
{
    printf("Hello DLL.\n");
}