#ifndef __LOL_CHINA_LOLDLL_GAME_FIGHT_FIGHTSERVICES_H__
#define __LOL_CHINA_LOLDLL_GAME_FIGHT_FIGHTSERVICES_H__

#include "GameVariable.h"

class CFightServices
{
public:
	CFightServices();
	~CFightServices();

	static CFightServices& GetInstance();

	// �ȴ���Ϸ��ʼ(����)!
	VOID WaitToShowSolider() CONST;

	// �ж���·ˮ�����Ƿ�û��
	BOOL ExistMiddleCrystalTurret() CONST;

	// �ж��Ƿ��ڼ���
	BOOL IsAtBase() CONST;

	// �Ƿ���Ҫ�ؼ���
	BOOL IsHaveToBackToBase() CONST;

	// �Ƿ������Ĺ���
	BOOL IsDodgeTurret() CONST;

	// �Ƿ���Ҫ������
	BOOL IsAttackTurret() CONST;

	// �Ƿ���Ҫ���С���Ĺ���
	BOOL IsDogeSolider() CONST;

	// �Ƿ�Ҫ����С��
	BOOL IsClearSolider() CONST;

	// �Ƿ���Ӣ�۵Ĺ���
	BOOL IsDodgeHero() CONST;

	// �Ƿ񹥻�Ӣ��
	BOOL IsAttackHero() CONST;
private:
	DSIABLE_COPY_AND_ASSIGN(CFightServices);
};


#endif