#include "stdafx.h"
#include "ObjectTraverse.h"
#include "HeroBuff.h"
#include "Skill.h"
#include "Equment.h"

CObjectTraverse::CObjectTraverse()
{
}

CObjectTraverse::~CObjectTraverse()
{
}

UINT CObjectTraverse::GetCurrentHeroBuffList(_Out_ vector<CHeroBuff>& vlst) CONST
{
	vlst.clear();
	auto dwArray = ReadDWORD(ReadDWORD(BUFF��ַ) + 0x14);
	for (auto i = 0; i < 0x40; ++i)
	{
		auto dwBuffAddr = dwArray + i * 0x34;
		if(ReadDWORD(dwBuffAddr + 0x2C) == 0xFFFFFFFF)
			continue;
		vlst.push_back(CHeroBuff(dwBuffAddr));
	}
	return 0;
}

UINT CObjectTraverse::GetCurrentHeroEqumentList(_Out_ vector<CEqument>& vlst) CONST
{
	vlst.clear();
	DWORD dwAddr = ReadDWORD((�����ַ)+װ������ƫ��1 + װ������ƫ��2);
	for (auto i = 0;i < 0x27; ++i)
	{
		DWORD dwEqumentObj = ReadDWORD(dwAddr + i * 4);
		if(dwEqumentObj == NULL || ReadDWORD(dwEqumentObj + 0x4) == NULL)
			continue;
		vlst.push_back(CEqument(dwEqumentObj));
	}
	return 0;
}

BOOL CObjectTraverse::GetSkillList(_Out_ vector<CSkill>& vlst) CONST
{
	vlst.clear();

	DWORD dwAddr = ReadDWORD(�����ַ) + ���ܱ���ƫ��1 + ���ܱ���ƫ��2;
	for (auto i = 0;i < 0x3F; ++i)
	{
		DWORD dwSkillBase = ReadDWORD(dwAddr + i * 4);
		if(dwSkillBase == NULL || ReadDWORD(dwSkillBase + ����OBJƫ��) == NULL)
			continue;
		vlst.push_back(CSkill(i, dwSkillBase));
	}

	return TRUE;
}