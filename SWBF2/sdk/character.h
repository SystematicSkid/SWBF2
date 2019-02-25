#pragma once
class Character
{
public:
	char pad_0000[304]; //0x0000
	int8_t isHuman; //0x0130
	char pad_0131[15]; //0x0131
	class EntitySoldierClass* pClass; //0x0140
	class CommandPost* pCommandPost; //0x0144
	class EntitySoldier* pSoldier; //0x0148
}; //Size: 0x01CC