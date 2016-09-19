#include "stdafx.h"
#include "SkillServices.h"
#include <MyTools/CLLog.h>
#include "Person.h"
#include "GameRes.h"
#include "GameCALL.h"
#include "ObjectExtend.h"
#include "Skill.h"
#include "HumanBaseObject.h"

#define _SELF L"SkillServices.cpp"
CSkillServices::CSkillServices()
{
}

CSkillServices::~CSkillServices()
{
}

CSkillServices& CSkillServices::GetInstance()
{
	static CSkillServices SkillServices;
	return SkillServices;
}

BOOL CSkillServices::IsSkillCooldown(_In_ em_Skill_Index emSkillIndex) CONST
{
	CSkill Skill;
	return CObjectExtend::GetInstance().ExistSkillByIndex(emSkillIndex, &Skill) ? Skill.IsCouldUse() : FALSE;
}

BOOL CSkillServices::UseSkill(_In_ em_Skill_Index emSkillIndex, _In_ CONST CHumanBaseObject& Tar) CONST
{
	CONST ResSkillInfo* pResSkillInfo = GetSkillResInfo(emSkillIndex);
	if (pResSkillInfo == nullptr)
		return FALSE;

	CSkill Skill;
	if (!CObjectExtend::GetInstance().ExistSkillByIndex(emSkillIndex, &Skill))
		return FALSE;

	// ������ȴӦ�����ϲ���ж���. ��һ��Ͳ��ظ��ж���!

	if (pResSkillInfo->emSkillType == em_Skill_Type::em_Skill_Type_Directional || pResSkillInfo->emSkillType == em_Skill_Type::em_Skill_Type_UnDirectional)
	{
		// �������ܷ�Χ֮����, ���߹�ȥ!
		if (Tar.GetDis() > pResSkillInfo->fSkillDis)
			return LOLMove(Tar.GetPoint(), 100);
	}

	return Skill.UseSkill(Tar, pResSkillInfo->emSkillType);
}

BOOL CSkillServices::LevelUpSkill() CONST
{
	em_Skill_Index emSkillIndex = CGameRes::GetInstance().GetSPByHeroLevel(CPerson::GetInstance().GetHeroPro(), CPerson::GetInstance().GetLevel());
	return CGameVariable::GetInstance().PushMainThreadActionPtr([&emSkillIndex] {
		CGameCALL::GetInstance().UpgradeSkill(emSkillIndex);
	});
}

BOOL CSkillServices::CheckLevelupSkill() CONST
{
	return CPerson::GetInstance().GetSp() > 0 ? LevelUpSkill() : TRUE;
}

CONST ResSkill* CSkillServices::GetCurrentHeroSkillConfig() CONST
{
	static ResSkill* pResSkill = nullptr;
	if (pResSkill == nullptr)
	{
		pResSkill = const_cast<ResSkill*>(CGameRes::GetInstance().GetResSkillByHero(CPerson::GetInstance().GetHeroPro()));
	}
	return pResSkill;
}

BOOL CSkillServices::UseItemSkill(_In_ cwstring& wsItemSkillName, _In_ em_Skill_Type emSkillType) CONST
{
	CSkill Skill;
	return CObjectExtend::GetInstance().ExistSkillByName(wsItemSkillName, &Skill) ? Skill.UseSkill(CPerson::GetInstance(), emSkillType) : FALSE;
}

BOOL CSkillServices::UseBuffSkill(_In_ cwstring& wsSkillName) CONST
{
	CSkill Skill;
	return CObjectExtend::GetInstance().ExistSkillByName(wsSkillName, &Skill) ? Skill.UseSkill(CPerson::GetInstance(), em_Skill_Type::em_Skill_Type_Buff_Self) : FALSE;
}

BOOL CSkillServices::UseUnDirectionalItemSkill(_In_ cwstring& wsSkillName) CONST
{
	CSkill Skill;
	return CObjectExtend::GetInstance().ExistSkillByName(wsSkillName, &Skill) ? Skill.UseSkill(CPerson::GetInstance(), em_Skill_Type::em_Skill_Type_Self_UnDirectional) : FALSE;
}

CONST ResSkillInfo* CSkillServices::GetSkillResInfo(_In_ em_Skill_Index emSkillIndex) CONST
{
	auto pResSkill = GetCurrentHeroSkillConfig();
	if (pResSkill == nullptr)
	{
		LogMsgBox(LOG_LEVEL_EXCEPTION, L"�����ڵ�ǰӢ�۵ļ�������:%X", CPerson::GetInstance().GetHeroPro());
		return static_cast<CONST ResSkillInfo*>(nullptr);
	}

	switch (emSkillIndex)
	{
	case em_Skill_Index_Q:
		return &pResSkill->ResSkillInfoQ;
	case em_Skill_Index_W:
		return &pResSkill->ResSkillInfoW;
	case em_Skill_Index_E:
		return &pResSkill->ResSkillInfoE;
	case em_Skill_Index_R:
		return &pResSkill->ResSkillInfoR;
	default:
		break;
	}
	return static_cast<CONST ResSkillInfo*>(nullptr);
}
