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
		vector<DWORD> EqumentIdVec;
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

	// ��
	cwstring* GetCrystalTurretNameByCampAndType(_In_ em_Camp emCamp, _In_ em_Path_Type emPathType) CONST throw();

	// ��ȡ��ǰӢ�۵�Ĭ��·��
	em_Path_Type GetDefaultPathTypeByHero(_In_ em_Hero_Pro emHeroPro) CONST throw();

	// BaseName
	// ��ȡ��������
	CONST cwstring& GetBaseNameByCamp(_In_ em_Camp emCamp) CONST throw();

	// Equment
	auto GetNextEqumentId(_In_ em_Hero_Pro emHeroPro, _In_ DWORD dwLastEqumentId) CONST throw() -> CONST ResEqument*;

	// ��ȡװ���б�
	auto GetEqumentPriceById(_In_ DWORD dwEqumentId) CONST throw()->CONST ResEqument*;

	// Skill
	// ��ȡӢ�۵ļ����÷�����
	auto GetResSkillByHero(_In_ em_Hero_Pro emHeroPro)  CONST throw() -> CONST ResSkill*;

	// ��ȡӢ�۵ļ��ܵ�ü��ĸ���
	CONST em_Skill_Index* GetSPByHeroLevel(_In_ em_Hero_Pro emHeroPro, _In_ DWORD dwLevel) CONST throw();

	// Next Move Point
	// ��ȡ��һ���ƶ��������(return nullptr ��ʾ��·����!)
	CONST Point* GetNextMovePoint(_In_ em_Camp emCamp, _In_ em_Path_Type emPathType, _In_ CONST Point& CurPoint) CONST throw();

	// ��ȡ��һ���ƶ��������(return nullptr ��ʾ��·����!)
	CONST Point* GetPreviouMovePoint(_In_ em_Camp emCamp, _In_ em_Path_Type emPathType, _In_ CONST Point& CurPoint) CONST throw();

	// ��ȡӢ�۵Ĺ�������
	float GetHeroAttackDis(_In_ em_Hero_Pro emHeroPro) CONST throw();
private:
	// ��ȡ��ǰ��Ӫ��������·����������·��
	CONST vector<Point>& GetPathPointVecByCampAndPathType(_In_ em_Camp emCamp, _In_ em_Path_Type emPathType) CONST throw();

	// ��ȡӢ�۵�����װ���б�
	auto GetResEuqmentVecByHero(_In_ em_Hero_Pro emHeroPro) CONST throw() ->CONST vector<DWORD>*;

	// ��ȡ����Ӣ�۵ļ��ܼӵ��ȫ
	auto GetHeroSpVec() CONST throw() ->CONST vector<tagHeroSp>&;
private:
	DSIABLE_COPY_AND_ASSIGN(CGameRes);
};



#endif