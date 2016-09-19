#ifndef __LOL_CHINA_LOLDLL_GAME_RES_GAMERES_H__
#define __LOL_CHINA_LOLDLL_GAME_RES_GAMERES_H__

#include "GameVariable.h"

class CEqument;
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

	enum em_ResEqument_Type
	{
		em_ResEqument_Type_Master_Defence,
		em_ResEqument_Type_Master_Attack,
		em_ResEqument_Type_ADC_AttackSpeed,
		em_ResEqument_Type_ADC_AttackDis,
		em_ResEqument_Type_ADC_AttackPower,
		em_ResEqument_Type_Defence_Attack,
		em_ResEqument_Type_Defence_Defence
	};
	struct HeroResEqument
	{
		em_ResEqument_Type emResEqumentType;
		vector<ResEqument> EqumentVec;
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
	DWORD GetCurrentLastEqumentId(_In_ em_Hero_Pro emHeroPro, _In_ vector<CEqument>& vlst) CONST;

	// Skill
	// ��ȡӢ�۵ļ����÷�����
	auto GetResSkillByHero(_In_ em_Hero_Pro emHeroPro)  CONST throw() -> CONST ResSkill*;
	auto GetResSkillByHero(_In_ cwstring& wsHeroName) CONST throw()->CONST ResSkill*;

	// ��ȡӢ�۵ļ��ܵ�ü��ĸ���
	em_Skill_Index GetSPByHeroLevel(_In_ em_Hero_Pro emHeroPro, _In_ DWORD dwLevel) CONST throw();

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
	auto GetResEuqmentVecByType(_In_ em_ResEqument_Type emResEqumentType) CONST throw() ->CONST vector<ResEqument>*;

	// ��ȡӢ�ۼ����÷�����List
	CONST vector<ResSkill>& GetResSkillList() CONST throw();

	// ��ȡӢ�۵�װ������
	auto GetResEqumentTypeByHero(_In_ em_Hero_Pro emHeroPro) CONST throw() ->em_ResEqument_Type;
private:
	DSIABLE_COPY_AND_ASSIGN(CGameRes);
};



#endif