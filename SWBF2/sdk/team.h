#pragma once
class Team
{
public:
	char pad_0000[12]; //0x0000
	wchar_t* szName; //0x000C
	char pad_0010[40]; //0x0010
	int32_t numCharacters; //0x0038
	char pad_003C[4]; //0x003C
	class Character** pCharacters; //0x0040
	char pad_0044[4]; //0x0044
	int32_t numClasses; //0x0048
	char pad_004C[4]; //0x004C
	class EntitySoldierClass** pClasses; //0x0050
	char pad_0054[16]; //0x0054
	int32_t factionId; //0x0064
	char pad_0068[44]; //0x0068
	float aggressiveness; //0x0094

	Character* GetCharacter(int idx)
	{
		return pCharacters[idx];
	}

	EntitySoldierClass* GetClass(int idx)
	{
		return pClasses[idx];
	}
}; //Size: 0x00CC