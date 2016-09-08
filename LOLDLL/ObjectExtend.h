#ifndef __LOL_CHINA_LOLDLL_GAME_OBJECTSERVICES_OBJECTFUNCTION_H__
#define __LOL_CHINA_LOLDLL_GAME_OBJECTSERVICES_OBJECTFUNCTION_H__

#include "ObjectTraverse.h"

class CHero;
class CObjectExtend : public CObjectTraverse
{
public:
	CObjectExtend();
	~CObjectExtend();

	static CObjectExtend& GetInstance();

	// ֻ�ܱ��̳���ʵ����!
	virtual VOID AbstractClass();
public:
	// ��������װ��
	BOOL ExistEqumentByCondition(_Out_ CEqument* pEqument ,_In_ std::function<BOOL(CONST CEqument&)> Finder) CONST;

	// ����ID�ж��Ƿ����װ��
	BOOL ExistEqumentById(_In_ DWORD dwEqumentId, _Out_ CEqument* pEqument) CONST;

	// ��������Buff
	BOOL ExistHeroBuffByCondition(_Out_ CHeroBuff* pHeroBuff, _In_ std::function<BOOL(CONST CHeroBuff&)> Finder) CONST;

	// ����BUFFID�ж��Ƿ����buff
	BOOL ExistBuffById(_In_ DWORD dwBuffId, _Out_ CHeroBuff* pHeroBuff) CONST;

	// ��������Ұ��
	BOOL ExistCreepByCondition(_Out_ CReep* pReep, _In_ std::function<BOOL(CONST CReep&)> Finer) CONST;

	// ����ID����Ұ��
	BOOL ExistCreepById(_In_ DWORD dwCreepId, _Out_ CReep* pReep) CONST;
	BOOL ExistCreepByName(_In_ cwstring& wsCreepName, _Out_ CReep* pReep) CONST;

	// ����
	BOOL ExistSkillByCondition(_Out_ CSkill* pSkill, _In_ std::function<BOOL(CONST CSkill&)> Finder) CONST;
	BOOL ExistSkillByIndex(_In_ em_Skill_Index emSkillIndex, _Out_ CSkill* pSkill) CONST;
	BOOL ExistSkillByName(_In_ cwstring& wsSkillName, _Out_ CSkill* pSkill) CONST;

	// 
	BOOL ExistTurretByName(_In_ cwstring& wsTurretName, _In_ em_Camp emCamp, _Out_ CTurret* pTurret) CONST;
	BOOL GetLatelyTurretByCamp(_In_ em_Camp emCamp, _In_ float fDis, _Out_ CTurret* pTurret) CONST;

	//
	BOOL ExistSoliderByCondition(_In_ em_Camp emCamp, _Out_ CSolider* pSolider, _In_ std::function<BOOL(CONST CSolider&)> Finder) CONST;
	BOOL ExistSoliderByName(_In_ cwstring& wsSoliderName, _In_ em_Camp emCamp, _Out_ CSolider* pSolider) CONST;

	// ��ȡ�����С��
	BOOL GetLatelySoliderByCamp(_In_ em_Camp emCamp, _In_ float fDis, _Out_ CSolider* pSolider) CONST;

	// ��ȡ�����з�С��������
	UINT GetEnemySoliderCountByDis(_In_ float fDis) CONST;

	// ��ȡ��������С��������
	UINT GetAllySoliderCountByDis(_In_ CONST Point& FixPt, _In_ float fDis) CONST;

	// ��ȡ�з���Ѫ��С��
	BOOL GetAnemiaSoliderByDis(_In_ float fDis, _Out_ CSolider* pSolider) CONST;

	// ��ȡ�з�С�������Լ�������
	UINT GetEnemyAttackSoliderCountByDis(_In_ float fDis) CONST;

	UINT GetEnemyHeroCountByDis(_In_ float fDis) CONST;
	BOOL GetLatelyHeroByCamp(_In_ em_Camp emCamp, _In_ float fDis, _Out_ CHero* pHero) CONST;

	// ��ȡ�з�Ӣ�۹����Լ�������
	UINT GetEnemyAttackHeroCountByDis(_In_ float fDis) CONST;
private:
	DSIABLE_COPY_AND_ASSIGN(CObjectExtend);
};



#endif