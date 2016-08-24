#ifndef __LOL_CHINA_LOLDLL_GAME_OBJECT_OTHER_SKILL_H__
#define __LOL_CHINA_LOLDLL_GAME_OBJECT_OTHER_SKILL_H__

#include "BaseObject.h"

class CHumanBaseObject;
class CSkill : public CBaseObject
{
public:
	CSkill();
	CSkill(_In_ UINT uIndex_, _In_ DWORD dwNodeBase_);
	~CSkill() = default;

	// ��ȡIndex
	em_Skill_Index GetSkillIndex() CONST;

	// ���ܵȼ�
	DWORD GetLevel() CONST;

	// ��������
	virtual cwstring& GetName() CONST;

	// ��ǰ��������MP
	DWORD GetExpendMp() CONST;

	// ����CD,�Ƿ���ȴ���
	BOOL IsCooldown() CONST;

	// �Ƿ����ʹ����
	BOOL IsCouldUse() CONST;

	// ʹ�ü���
	BOOL UseSkill(_In_ CONST CHumanBaseObject& HumanBaseObject_, _In_ em_Skill_Type emSkillType) CONST;

	// ��Ʒ���ܲ���
	DWORD GetItemSkillParameter() CONST;
private:
	UINT uIndex;
};





#endif