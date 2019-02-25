#pragma once

class WeaponList
{
public:
	int pad;
	char pad_0004[12]; //0x0004
}; //Size: 0x0010

class EntitySoldierClass
{
public:
	char pad_0000[32]; //0x0000
	wchar_t* szClassName; //0x0020
	char pad_0024[320]; //0x0024
	class GameModel* pGameModel; //0x0164
	char pad_0168[1504]; //0x0168
	WeaponList weapons; //0x0748
	char pad_0758[56]; //0x0758
	int32_t numOfWeapons; //0x0790
}; //Size: 0x088C