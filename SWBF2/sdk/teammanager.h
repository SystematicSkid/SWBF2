#pragma once
class TeamManager // base + 0x1AAFCD0
{
public:
	Team* GetTeam(int idx)
	{
		if (idx >= 8)		// max of 8 teams?
			return nullptr;
		return *(Team**)(this + 0x4 * idx);
	}

	Team* GetTeam(std::string name)
	{
		std::wstring wide_string = std::wstring(name.begin(), name.end());
		const wchar_t* result = wide_string.c_str(); // convert std::string to wchar_t*
		for (int i = 0; i < 8; i++)
		{
			Team* team = GetTeam(i);
			if(!team)
				continue;
			if (!wcscmp(team->szName, result))
				return team;
		}
	}
};