#include "swbf2.h"

/*
	We would typically use signature scanning, but this game is 14 years old now, don't
	think LucasArts is going to publish an update anytime soon.
*/
bool Interfaces::Init()
{
	base = (uintptr_t)GetModuleHandleA(0); // Get module base of SWBF2

	teams = (TeamManager*)(base + 0x1AAFCD0);
	if (!teams)
		return false;
	
	local_data = (LocalData*)(base + 0x1A30324);
	if (!local_data)
		return false;

	get_script_paremeters = (uintptr_t)(base + 0x29BBA0);
	if (!get_script_paremeters)
		return false;

	return true;
}

Interfaces interfaces;