#pragma once

class EntitySoldier
{
public:
	char pad_0004[4]; //0x0004
	class EntitySoldierClass* pSoldierClass; //0x0008
	char pad_000C[12]; //0x000C
	Vector worldPosition; //0x0018
	char pad_0024[1380]; //0x0024

	virtual void Function0();
	virtual void Function1();
	virtual void Function2();
	virtual void Function3();
	virtual void Function4();
	virtual void Function5();
	virtual void Function6();
	virtual void Function7();
	virtual void Function8();
	virtual void Function9();
	virtual void Function10();
	virtual EntitySoldierClass* GetEntityClass();
}; //Size: 0x0588