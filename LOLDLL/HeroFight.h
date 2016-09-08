#ifndef __LOL_CHINA_LOLDLL_GAME_FIGHT_HEROFIGHT_H__
#define __LOL_CHINA_LOLDLL_GAME_FIGHT_HEROFIGHT_H__

#include "GameVariable.h"

class CSolider;
class CHero;
class CSkillServices;
class CHeroFight
{
private:
	struct tagHeroPtr
	{
		em_Hero_Pro emHeroPro;
		std::function<BOOL(CONST CHero&)> Worker;
	};
public:
	CHeroFight(_In_ CSkillServices* pCSkillServices_);
	~CHeroFight();

	static CHeroFight& GetInstance();

	BOOL KillSolider(_In_ CONST CSolider& Solider, _In_ BOOL bQ, _In_ BOOL bW, _In_ BOOL bE) CONST;
	BOOL KillSolider(_In_ CONST CSolider& Solider) CONST;

	BOOL KillHero(_In_ CONST CHero& EnemyHero) CONST;
private:
	auto ExistHeroWorker(_In_ em_Hero_Pro emHeroPro) CONST ->CONST tagHeroPtr*;
private:
	// ����
	BOOL Hero_Ryze(_In_ CONST CHero& EnemyHero) CONST;
	// ��������
	BOOL Hero_Ashe(_In_ CONST CHero& EnemyHero) CONST;
	// �޼���ʥ
	BOOL Hero_MasterYi(_In_ CONST CHero& EnemyHero) CONST;
	// �ͽ�����
	BOOL Hero_MissFortune(_In_ CONST CHero& EnemyHero) CONST;
	// ��������
	BOOL Hero_Garen(_In_ CONST CHero& EnemyHero) CONST;
	// �����֪
	BOOL Hero_Malzahar(_In_ CONST CHero& EnemyHero) CONST;
	// ̽�ռ�
	BOOL Hero_Ezreal(_In_ CONST CHero& EnemyHero) CONST;
	// ��տ־�
	BOOL Hero_Chogath(_In_ CONST CHero& EnemyHero) CONST;
	// ѩ����ʿ
	BOOL Hero_Nunu(_In_ CONST CHero& EnemyHero) CONST;
	// ������
	BOOL Hero_Heimerdinger(_In_ CONST CHero& EnemyHero) CONST;
	// �����ͽ
	BOOL Hero_Graves(_In_ CONST CHero& EnemyHero) CONST;
	// ��ʿͳ��
	BOOL Hero_Swain(_In_ CONST CHero& EnemyHero) CONST;
	// ��ҹ����
	BOOL Hero_Vayne(_In_ CONST CHero& EnemyHero) CONST;
	// Ť������
	BOOL Hero_Maokai(_In_ CONST CHero& EnemyHero) CONST;
	// а��С��ʦ
	BOOL Hero_Veigar(_In_ CONST CHero& EnemyHero) CONST;
	// �ݶ�֮ŭ
	BOOL Hero_Sejuani(_In_ CONST CHero& EnemyHero) CONST;
	// ��������
	BOOL Hero_Tristana(_In_ CONST CHero& EnemyHero) CONST;
	// �ڱ�֮��
	BOOL Hero_Galio(_In_ CONST CHero& EnemyHero) CONST;
	// ʥǹ����
	BOOL Hero_Lucian(_In_ CONST CHero& EnemyHero) CONST;
	// ��ħ֮��
	BOOL Hero_Trundle(_In_ CONST CHero& EnemyHero) CONST;
	// ���ὣħ
	BOOL Hero_Aatrox(_In_ CONST CHero& EnemyHero) CONST;
	// ��ʯ��ʿ
	BOOL Hero_Taric(_In_ CONST CHero& EnemyHero) CONST;
	// ��е����
	BOOL Hero_Rumble(_In_ CONST CHero& EnemyHero) CONST;
	// ��Ů��
	BOOL Hero_Diana(_In_ CONST CHero& EnemyHero) CONST;
	// ����֮��
	BOOL Hero_Urgot(_In_ CONST CHero& EnemyHero) CONST;
	// Ѹ�ݳ��
	BOOL Hero_Teemo(_In_ CONST CHero& EnemyHero) CONST;
	// Ƥ��Ů��
	BOOL Hero_Caitlyn(_In_ CONST CHero& EnemyHero) CONST;
	// Ӣ��Ͷ����
	BOOL Hero_Corki(_In_ CONST CHero& EnemyHero) CONST;
	// ��˫����
	BOOL Hero_Fiora(_In_ CONST CHero& EnemyHero) CONST;
	// ����ڤ��
	BOOL Hero_Mordekaiser(_In_ CONST CHero& EnemyHero) CONST;
	// �̩̹
	BOOL Hero_Nautilus(_In_ CONST CHero& EnemyHero) CONST;
	// ս��Ů��
	BOOL Hero_Sivir(_In_ CONST CHero& EnemyHero) CONST;
	// ��Ԩ�޿�
	BOOL Hero_KogMaw(_In_ CONST CHero& EnemyHero) CONST;
	// �ڰ�֮Ů
	BOOL Hero_Annie(_In_ CONST CHero& EnemyHero) CONST;
	// ������
	BOOL Hero_Akali(_In_ CONST CHero& EnemyHero) CONST;
	// ţͷ����
	BOOL Hero_Alistar(_In_ CONST CHero& EnemyHero) CONST;
	// ��֮ľ����
	BOOL Hero_Amumu(_In_ CONST CHero& EnemyHero) CONST;
	// ����������
	BOOL Hero_Blitzcrank(_In_ CONST CHero& EnemyHero) CONST;
	// �������
	BOOL Hero_Brand(_In_ CONST CHero& EnemyHero) CONST;
	// ħ��֮ӵ
	BOOL Hero_Cassiopeia(_In_ CONST CHero& EnemyHero) CONST;
	// ŵ����˹֮��
	BOOL Hero_Darius(_In_ CONST CHero& EnemyHero) CONST;
	// �ɶ�
	BOOL Hero_DrMundo(_In_ CONST CHero& EnemyHero) CONST;
	// ����
	BOOL Hero_Ekko(_In_ CONST CHero& EnemyHero) CONST;
	// ĩ��ʹ��
	BOOL Hero_FiddleSticks(_In_ CONST CHero& EnemyHero) CONST;
	// ��ϫ����
	BOOL Hero_Fizz(_In_ CONST CHero& EnemyHero) CONST;
	// ��Ͱ
	BOOL Hero_Gragas(_In_ CONST CHero& EnemyHero) CONST;
	// ���޼�˾
	BOOL Hero_Illaoi(_In_ CONST CHero& EnemyHero) CONST;
	// ������־
	BOOL Hero_Itrlia(_In_ CONST CHero& EnemyHero) CONST;
	// �������ǻ���
	BOOL Hero_JarvanIV(_In_ CONST CHero& EnemyHero) CONST;
	// ������ʦ
	BOOL Hero_Jax(_In_ CONST CHero& EnemyHero) CONST;
	// Ϸ��ʦ
	BOOL Hero_Jhin(_In_ CONST CHero& EnemyHero) CONST;
	// ��������
	BOOL Hero_Jinx(_In_ CONST CHero& EnemyHero) CONST;
	// ������
	BOOL Hero_Karma(_In_ CONST CHero& EnemyHero) CONST;
	// ����֮��
	BOOL Hero_Katarina(_In_ CONST CHero& EnemyHero) CONST;
	// ���Ů��
	BOOL Hero_Leona(_In_ CONST CHero& EnemyHero) CONST;
	// ���Ů��
	BOOL Hero_Lux(_In_ CONST CHero& EnemyHero) CONST;
	// ���Ҿ���
	BOOL Hero_Malphite(_In_ CONST CHero& EnemyHero) CONST;
	// �����ʥ
	BOOL Hero_MonkeyKing(_In_ CONST CHero& EnemyHero) CONST;
	// ������ʹ
	BOOL Hero_Morgana(_In_ CONST CHero& EnemyHero) CONST;
	// ɳĮ����
	BOOL Hero_Nasus(_In_ CONST CHero& EnemyHero) CONST;
	// ��սʿ
	BOOL Hero_Olaf(_In_ CONST CHero& EnemyHero) CONST;
	// ����ս��
	BOOL Hero_Sion(_In_ CONST CHero& EnemyHero) CONST;
	// ʥ��֮��
	BOOL Hero_Poppy(_In_ CONST CHero& EnemyHero) CONST;
	// ��������
	BOOL Hero_Rammus(_In_ CONST CHero& EnemyHero) CONST;
	// ��Į����
	BOOL Hero_Renekton(_In_ CONST CHero& EnemyHero) CONST;
	// ��ɪ��Ů
	BOOL Hero_Sona(_In_ CONST CHero& EnemyHero) CONST;
	// ���֮��
	BOOL Hero_Velkoz(_In_ CONST CHero& EnemyHero) CONST;
	// �°��ܹ�
	BOOL Hero_XinZhao(_In_ CONST CHero& EnemyHero) CONST;
	// ���ƹ��
	BOOL Hero_Ziggs(_In_ CONST CHero& EnemyHero) CONST;
private:
	CSkillServices* pSkillServices;
private:
	DSIABLE_COPY_AND_ASSIGN(CHeroFight);
};



#endif