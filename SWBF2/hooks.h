#pragma once

// definitions
using fnGetScriptParameter = int(__cdecl*)(int);

class Hooks
{
public:
	bool Init();
};

extern Hooks hooks;