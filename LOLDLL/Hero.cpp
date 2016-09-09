#include "stdafx.h"
#include "Hero.h"
#include <MyTools/CLLog.h>
#define _SELF L"Hero.cpp"

CHero::CHero(_In_ DWORD dwNodeBase_) : CHumanBaseObject(dwNodeBase_)
{

}
CHero::CHero() : CHumanBaseObject(NULL)
{
}

CHero::~CHero()
{
}

cwstring& CHero::GetName() CONST
{
	if (wsName.empty())
		CCharacter::ReadUTF8Text(GetNodeBase() + Ӣ������ƫ��, wsName);
	return wsName;
}

DWORD CHero::GetLevel() CONST
{
	__try
	{
		DWORD dwLevel = 0;
		DWORD dwECX = GetNodeBase();
		__asm
		{
			PUSHAD;
			MOV ECX, dwECX;
			MOV EDX, DWORD PTR DS : [ECX];
			MOV EDX, DWORD PTR DS : [EDX + Ӣ�۵ȼ��麯��ƫ��];
			CALL EDX;
			MOV dwLevel, EAX
			POPAD;
		}
		return dwLevel;
	}
	__except(1)
	{
		Log(LOG_LEVEL_EXCEPTION, L"GetLevel�쳣!");
	}
	return 0;
}