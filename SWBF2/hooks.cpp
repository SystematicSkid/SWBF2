#include "swbf2.h"
#include "PolyHook.hpp"

//hook definitions
PLH::X86Detour* GetScriptParemeterHook;

// store originals
fnGetScriptParameter oGetScriptParameter;

struct s0 {
	char pad8[8];
	int32_t f8;
	int32_t f12;
};


int __cdecl hkGetScriptParemeter(struct s0* a1)
{
	int val = a1->f8 - a1->f12 >> 3;
	printf("GetScriptParameter: %i\n", val);
	return oGetScriptParameter((int)a1);
}

bool Hooks::Init()
{
	GetScriptParemeterHook = new PLH::X86Detour();
	GetScriptParemeterHook->SetupHook((BYTE*)interfaces.get_script_paremeters, (BYTE*)&hkGetScriptParemeter);
	if (!GetScriptParemeterHook->Hook())
		return false;
	oGetScriptParameter = GetScriptParemeterHook->GetOriginal<fnGetScriptParameter>();
	return true;
}

Hooks hooks;