#ifndef __LOL_CHINA_LOLDLL_GAME_OBJECTSERVICES_SKILLSERVICES_H__
#define __LOL_CHINA_LOLDLL_GAME_OBJECTSERVICES_SKILLSERVICES_H__

#include "ObjectTraverse.h"

class CSkillServices
{
public:
	CSkillServices();
	~CSkillServices();

	static CSkillServices& GetInstance();

	// �����Ƿ���ȴ
	BOOL IsSkillCooldown(_In_ em_Skill_Index emSkillIndex) CONST;

	// ʹ�ü���
	BOOL UseSkill(_In_ em_Skill_Index emSkillIndex) CONST;

	// ���ܼӵ�
	BOOL LevelUpSkill() CONST;

	// ��鼼�ܼӵ�
	BOOL CheckLevelupSkill() CONST;

	// ��ȡ��ǰӢ�۵ļ��ܽ���
	CONST ResSkill* GetCurrentHeroSkillConfig() CONST;

	// ʹ����Ʒ����
	BOOL UseItemSkill(_In_ cwstring& wsItemSkillName) CONST;

	// ʹ��BUFF����(����, ��Ѫ, �س�)
	BOOL UseBuffSkill(_In_ cwstring& wsSkillName) CONST;

	// ʹ�÷�ָ���Ե���Ʒ����
	BOOL UseUnDirectionalItemSkill(_In_ cwstring& wsSkillName) CONST;
private:
	DSIABLE_COPY_AND_ASSIGN(CSkillServices);
};



#endif