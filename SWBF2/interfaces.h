#pragma once

class Interfaces
{
private:
	uintptr_t base;
public:
	// Classes
	TeamManager* teams;
	LocalData* local_data;

	// Functions
	uintptr_t get_script_paremeters;

	bool Init();
};

extern Interfaces interfaces;