#ifndef __LOL_CHINA_LOLDLL_GAME_FIGHT_FIELDFIGHT_H__
#define __LOL_CHINA_LOLDLL_GAME_FIGHT_FIELDFIGHT_H__

#include "GameVariable.h"

class CHero;
class CSolider;
class CTurret;
class CFieldFight
{
public:
	CFieldFight();
	~CFieldFight();

	static CFieldFight& GetInstance();

	// ����ʱ��!
	VOID StartShowTime() CONST;

	// ��Ϸ��ʼ��
	VOID PartyInitialization() CONST;

	// ��·ˮ����û�˵�ʱ��Ļ�·����
	BOOL SetHeroPath() CONST;

	// �������
	BOOL Relive() CONST;

	// ˢBUFF
	BOOL KillBuffMonster(_In_ CONST Point& TarPoint, _In_ std::function<BOOL()> Worker) CONST;

	// ˢ��
	BOOL KillDragon() CONST;

	// �س�
	BOOL BackToBase() CONST;

	// һֱ��ǰ��
	BOOL MoveToEnemySpring() CONST;

	// �ߵ��Լ�����ķ�������
	BOOL MoveToLatelyTurret() CONST;

	// ��Ȫˮ��Ϣ���Ҹ���װ��
	BOOL RestInSpring() CONST;

	// ����
	BOOL BackOff() CONST;

	// �س��߼�����(�Ƿ���Ҫ�س�)
	BOOL DoBackToBase() CONST;

	// �з������Ĵ���
	BOOL DoTurret() CONST;

	// ������Ķ���
	BOOL DodgeTurret() CONST;

	// ������
	BOOL AttackTurret() CONST;

	// �з�С���Ĵ���
	BOOL DoSolider() CONST;

	// ���С��
	BOOL DodgeSolider() CONST;

	// ����С��
	BOOL AttackSolider() CONST;

	// �з���Ӣ�۵Ĵ���
	BOOL DoHero() CONST;

	// ���Ӣ�۹���
	BOOL DoDgeHero() CONST;

	// ����Ӣ��
	BOOL AttackHero() CONST;
private:
	DSIABLE_COPY_AND_ASSIGN(CFieldFight);
};


#endif