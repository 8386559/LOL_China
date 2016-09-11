#include "stdafx.h"
#include "GameCALL.h"
#include <MyTools/CLLog.h>
#define _SELF L"GameCALL.cpp"

CGameCALL& CGameCALL::GetInstance()
{
	static CGameCALL GameCALL;
	return GameCALL;
}

BOOL CGameCALL::PlayerMove(_In_ CONST Point& TarPoint) CONST
{
	__try
	{
		static float fArray[32] = { 0 };
		fArray[0] = TarPoint.X;
		fArray[1] = TarPoint.Z;
		fArray[2] = TarPoint.Y;
		fArray[3] = TarPoint.X;
		fArray[4] = TarPoint.Z;
		fArray[5] = TarPoint.Y;
		__asm
		{
			PUSHAD;
			PUSH 1;
			PUSH 0;
			PUSH 0;
			PUSH 0;
			LEA EAX, fArray;
			PUSH EAX;
			PUSH 2;
			MOV ECX, �����ַ;
			MOV ECX, DWORD PTR DS : [ECX];
			MOV EAX, ��·CALL;
			CALL EAX;
			POPAD;
		}
	}
	__except (1)
	{
		Log(LOG_LEVEL_EXCEPTION, L"PlayerMove�쳣!");
	}
	return TRUE;
}

BOOL CGameCALL::StopAction() CONST
{
	__try
	{
		_asm
		{
			PUSHAD;
			PUSH 1;
			PUSH 0;
			PUSH 0;
			PUSH 0;
			MOV ECX, �����ַ;
			MOV ECX, DWORD PTR DS : [ECX];
			LEA EAX, DWORD PTR DS : [ECX + ����ƫ��X];
			PUSH EAX;
			PUSH 0xA;
			MOV EAX, ��ͨ����CALL;
			CALL EAX;
			POPAD;
		}
		return TRUE;
	}
	__except (1)
	{
		Log(LOG_LEVEL_EXCEPTION, L"StopAction�쳣!");
	}
	return FALSE;
}

BOOL CGameCALL::PurchaseItemByShore(_In_ DWORD dwItemId) CONST
{
	__try
	{
		DWORD dwRetCode = 0;
		_asm
		{
			PUSHAD;
			MOV EAX, �����ַ;
			MOV EAX, DWORD PTR DS : [EAX];
			LEA ECX, DWORD PTR DS : [EAX + װ������ƫ��1];
			PUSH dwItemId;
			MOV EAX, ������ƷCALL;
			CALL EAX;
			MOV dwRetCode, EAX;
			POPAD;
		}
		return (dwRetCode & 0xFF) == 1;
	}
	__except(1)
	{
		Log(LOG_LEVEL_EXCEPTION, L"PurchaseItemByShore�쳣!");
	}
	return FALSE;
}

BOOL CGameCALL::LockView() CONST
{
	return CCharacter::WriteBYTE(ReadDWORD(�ӽǻ�ַ) + �ӽ�ƫ��, 0x1);
}

BOOL CGameCALL::UpgradeSkill(_In_ em_Skill_Index emSkillIndex) CONST
{
	__try
	{

		_asm
		{
			PUSHAD;
			PUSH emSkillIndex;
			MOV ECX, �����ַ;
			MOV ECX, DWORD PTR DS : [ECX];
			MOV EAX, ѧϰ����CALL;
			CALL EAX;
			POPAD;
		}
		return TRUE;
	}
	__except (1)
	{
		Log(LOG_LEVEL_EXCEPTION, L"UpgradeSkill�쳣!");
	}
	return FALSE;
}

BOOL CGameCALL::HeroAttack(_In_ DWORD dwTarNodeBase, _In_ CONST Point& AttackPoint) CONST
{
	__try
	{
		static float fTargetPointArray[3] = { 0 };
		fTargetPointArray[0] = AttackPoint.X;
		fTargetPointArray[1] = AttackPoint.Z;
		fTargetPointArray[2] = AttackPoint.Y;

		_asm
		{
			PUSHAD;
			PUSH 1;
			PUSH 0;
			PUSH 0;
			PUSH dwTarNodeBase;

			LEA EAX, fTargetPointArray;
			PUSH EAX;
			PUSH 0x3;

			MOV ECX, �����ַ;
			MOV ECX, DWORD PTR DS : [ECX];

			MOV EAX, ��ͨ����CALL;
			CALL EAX;
			POPAD;
		}
		return TRUE;
	}
	__except (1)
	{
		Log(LOG_LEVEL_EXCEPTION, L"HeroAttack�쳣!");
	}
	return FALSE;
}

BOOL CGameCALL::UseSkill(_In_ CONST std::tuple<Point, Point, em_Skill_Index, DWORD, DWORD>& tup) CONST
{
	__try
	{
		static float fCurrentPointArray[3] = { 0 };
		static float fTargetPointArray[3] = { 0 };
		static DWORD dwTarId = 0;
		static DWORD dwSkillIndex = 0;
		static DWORD dwSkillBase = 0;
		static DWORD dwRetCode = 0;

		fCurrentPointArray[0] = std::get<0>(tup).X;
		fCurrentPointArray[1] = std::get<0>(tup).Z;
		fCurrentPointArray[2] = std::get<0>(tup).Y;

		fTargetPointArray[0] = std::get<1>(tup).X;
		fTargetPointArray[1] = std::get<1>(tup).Z;
		fTargetPointArray[2] = std::get<1>(tup).Y;

		dwSkillIndex = static_cast<DWORD>(std::get<2>(tup));
		dwTarId = std::get<3>(tup);
		dwSkillBase = std::get<3>(tup);

		__asm
		{
			PUSHAD;
			MOV EAX, �����ַ;
			MOV EAX, DWORD PTR DS : [EAX];
			LEA ECX, DWORD PTR DS : [EAX + ���ܱ���ƫ��1];
			PUSH dwTarId;
			LEA EAX, fCurrentPointArray;
			PUSH EAX;
			LEA EAX, fTargetPointArray;
			PUSH EAX;
			PUSH dwSkillIndex;
			PUSH dwSkillBase;
			MOV EAX, ʹ�ü���CALL;
			CALL EAX;
			MOV dwRetCode, EAX;
			POPAD;
		}
		return (dwRetCode & 0xFF) == 1;
	}
	__except (1)
	{
		Log(LOG_LEVEL_EXCEPTION, L"UseSkill�쳣!");
	}
	return TRUE;
}

float CGameCALL::GetClientTick() CONST
{
	return ReadFloat(ReadDWORD(��Ϸ����ʱ���ַ) + 0x2C);
}
