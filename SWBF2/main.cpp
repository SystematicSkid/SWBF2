#include "swbf2.h"

typedef int(__thiscall ***sub_5910E0())(DWORD, DWORD);
sub_5910E0 fnTest;

void Init()
{
	// Debug only
	AllocConsole();
	freopen("CONIN$", "r", stdin);
	freopen("CONOUT$", "w", stdout);
	freopen("CONOUT$", "w", stderr);

	if (!interfaces.Init())
		MessageBoxA(NULL, "Interfaces: Failed to initialize.", NULL, NULL);

	if (!hooks.Init())
		MessageBoxA(NULL, "Hooks: Failed to initialize.", NULL, NULL);
}

DWORD __stdcall DllMain(HMODULE dll, DWORD callreason, void* reserved)
{
	if (callreason == DLL_PROCESS_ATTACH)
	{
		CreateThread(NULL, NULL, (LPTHREAD_START_ROUTINE)Init, NULL, NULL, NULL);
		return 1;
	}

	return 0;
}