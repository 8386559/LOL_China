#ifndef __LOL_CHINA_LOLDLL_GAME_OBJECT_OTHER_SKILL_H__
#define __LOL_CHINA_LOLDLL_GAME_OBJECT_OTHER_SKILL_H__

#include "BaseObject.h"

class CHumanBaseObject;
class CSkill : public CBaseObject
{
public:
	CSkill();
	CSkill(_In_ DWORD dwNodeBase_);
	~CSkill() = default;

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
	BOOL UseSkill(CONST CHumanBaseObject& HumanBaseObject_) CONST;
};





#endif