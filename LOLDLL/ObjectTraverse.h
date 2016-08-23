#ifndef __LOL_CHINA_LOLDLL_GAME_OBJECTSERVICES_OBJECTTRAVERSE_H__
#define __LOL_CHINA_LOLDLL_GAME_OBJECTSERVICES_OBJECTTRAVERSE_H__

#include "GameVariable.h"

class CHeroBuff;
class CEqument;
class CSkill;
class CReep;
class CObjectTraverse
{
public:
	CObjectTraverse();
	~CObjectTraverse();

	// ��ȡ��ǰӢ�۵�Buff
	UINT GetCurrentHeroBuffList(_Out_ vector<CHeroBuff>& vlst) CONST;

	enum em_Human_Type
	{
		em_Human_Type_Solider,
		em_Human_Type_Turret,
		em_Human_Type_Hero,
	};

	// �������Object����
	template<class T>
	UINT GetHumanTypeListByType(_In_ em_Human_Type emHumanType, _In_ em_Camp emCamp, vector<T>& vlst) CONST
	{
		return 0;
	}

	// ������ǰӢ�۵�װ��
	UINT GetCurrentHeroEqumentList(_Out_ vector<CEqument>& vlst) CONST;

	// ��ʼ�������б�
	BOOL InitSkill(_Out_ vector<CSkill>& vlst) CONST;

	// Ұ�ֱ���
	BOOL GetCreepList(_Out_ vector<CReep>& vlst) CONST;

	virtual void AbstractClass() = NULL;
private:
	DSIABLE_COPY_AND_ASSIGN(CObjectTraverse);
};



#endif