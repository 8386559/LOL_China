#ifndef __LOL_CHINA_LOLDLL_GAME_CALL_GAMECALL_H__
#define __LOL_CHINA_LOLDLL_GAME_CALL_GAMECALL_H__

#include "GameVariable.h"

class CGameCALL
{
public:
	CGameCALL() = default;
	~CGameCALL() = default;

	static CGameCALL& GetInstance();

	// ��·
	BOOL PlayerMove(_In_ CONST Point& TarPoint) CONST;

	// ��ͣӢ�۶���
	BOOL StopAction() CONST;

	// ��ȡ��Ϸ����ʱ��/s
	DWORD GetGameRunTime() CONST;

	// �̵깺��
	BOOL PurchaseItemByShore(_In_ DWORD dwItemId) CONST;

	// �����ӽ�
	BOOL LockView() CONST;

	// ��������
	BOOL UpgradeSkill(_In_ em_Skill_Index emSkillIndex) CONST;

	// Ӣ����ͨ����
	BOOL HeroAttack(_In_ CONST Point& AttackPoint) CONST;

	// ֹͣ��ͨ����
	BOOL StopHeroAttack() CONST;

	// ʹ�ü���(��ǰ��������,����ʩ��������,��������,Ŀ��ID,����Parameter)
	BOOL UseSkill(_In_ CONST std::tuple<Point,Point,em_Skill_Index,DWORD,DWORD>& tup) CONST;

	// ��ȡ��������
	BOOL GetObjectNamePtrByAddr(_In_ DWORD dwObjectAddr, _Out_ wstring& ObjectName) CONST;

	// ʹ����Ʒ
	BOOL UsingItem(_In_ DWORD dwItemParameter) CONST;
private:
	DSIABLE_COPY_AND_ASSIGN(CGameCALL);
};


#endif