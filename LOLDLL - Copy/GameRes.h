#ifndef __LOL_CHINA_LOLDLL_GAME_RES_GAMERES_H__
#define __LOL_CHINA_LOLDLL_GAME_RES_GAMERES_H__

#include "GameVariable.h"

class CGameRes
{
public:
	CGameRes() = default;
	~CGameRes() = default;

	static CGameRes& GetInstance() throw();
private:
	struct ResEqument
	{
		DWORD dwEqumentId;
		DWORD dwPrice;
	};
	struct HeroResEqument
	{
		em_Hero_Pro emHeroPro;
		vector<ResEqument> HeroEuqmentVec;
	};
	struct ResSkillInfo
	{
		em_Skill_Type	emSkillTypeQ;
		float			fSkillDis;
	};
	struct ResSkill
	{
		em_Hero_Pro		emHeroPro;
		wstring			HeroName;
		ResSkillInfo    ResSkillInfoQ;
		ResSkillInfo    ResSkillInfoW;
		ResSkillInfo    ResSkillInfoE;
		ResSkillInfo    ResSkillInfoR;
	};
	struct tagHeroSp
	{
		em_Hero_Pro		emHeroPro;
		vector<em_Skill_Index> SkillSpVec;
	};
public:
	// MonsterBuff
	// ��BUFF
	CONST Point& GetBlueBuffPointByCamp(_In_ em_Camp emCamp) CONST throw();

	// ��BUFF
	CONST Point& GetRedBuffPointByCamp(_In_ em_Camp emCamp) CONST throw();

	// С��
	CONST Point& GetDroganPoint() CONST throw();

	// ����
	CONST Point& GetBaronPoint() CONST throw();

	// BaseName
	// ��ȡ��������
	CONST cwstring& GetBaseNameByCamp(_In_ em_Camp emCamp) CONST throw();

	// Equment
	BOOL GetNextEqumentId(_In_ em_Hero_Pro emHeroPro, _In_ DWORD dwMoney, _Out_opt_ DWORD& dwEuqmentId) CONST throw();

	// Skill
	// ��ȡӢ�۵ļ����÷�����
	ResSkill& GetResSkillByHero(_In_ em_Hero_Pro emHeroPro)  CONST throw();

	// ��ȡӢ�۵ļ��ܵ�ü��ĸ���
	em_Skill_Index* GetSPByHeroLevel(_In_ em_Hero_Pro emHeroPro, _In_ DWORD dwLevel) CONST throw();

	// Next Move Point
	// ��ȡ��һ���ƶ��������(return nullptr ��ʾ��·����!)
	CONST Point* GetNextMovePoint(_In_ em_Camp emCamp, _In_ em_Path_Type emPathType, _In_ CONST Point& CurPoint) CONST throw();

	// ��ȡ��һ���ƶ��������(return nullptr ��ʾ��·����!)
	CONST Point* GetPreviouMovePoint(_In_ em_Camp emCamp, _In_ em_Path_Type emPathType, _In_ CONST Point& CurPoint) CONST throw();


private:
	// ��ȡ��ǰ��Ӫ��������·����������·��
	CONST vector<Point>& GetPathPointVecByCampAndPathType(_In_ em_Camp emCamp, _In_ em_Path_Type emPathType) CONST throw();

	// ��ȡӢ�۵�����װ���б�
	CONST vector<ResEqument>& GetResEuqmentVecByHero(_In_ em_Hero_Pro emHeroPro) CONST throw();

	// ��ȡӢ�۵ļ��ܽ����б�
	CONST vector<ResSkill>& GetResSkillVec() CONST throw();

	// ��ȡ����Ӣ�۵ļ��ܼӵ��ȫ
	CONST vector<tagHeroSp>& GetHeroSpVec() CONST throw();
private:
	DSIABLE_COPY_AND_ASSIGN(CGameRes);
};



#endif