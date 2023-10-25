#pragma once
#define WIN32_LEAN_AND_MEAN
#include <windows.h>
#include <cstdlib>

extern int main(int argc, char *argv[]);

bool __stdcall DllMain(HMODULE hModule, DWORD ul_reason_for_call, LPVOID lpReserved)
{
    if (ul_reason_for_call == DLL_PROCESS_ATTACH)
        return main(__argc, __argv);
    return 1;
}
