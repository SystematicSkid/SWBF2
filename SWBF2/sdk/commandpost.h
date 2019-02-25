#pragma once
class CommandPost
{
public:
	char pad_0000[40]; //0x0000
	wchar_t* szName; //0x0028
}; //Size: 0x00AC