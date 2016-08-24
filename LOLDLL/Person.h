#ifndef __LOL_CHINA_LOLDLL_GAME_OBJECT_HUMANTYPE_PERSON_H__
#define __LOL_CHINA_LOLDLL_GAME_OBJECT_HUMANTYPE_PERSON_H__

#include "Hero.h"

class CPerson : public CHero
{
public:
	CPerson(_In_ DWORD dwNodeBase_);
	~CPerson();

	static CPerson& GetInstance();

	BOOL SetPersonBase(_In_ DWORD dwNodeBase_);

	// ����ȼ�
	DWORD GetLevel() CONST;

	// ��ȡ��ǰӢ�۵ĵж���Ӫ
	em_Camp GetEnemyCamp() CONST;

	// Ӣ��Object
	DWORD GetObject() CONST;

	// ��ȡ���ܵ�
	DWORD GetSp() CONST;

	// ���
	DWORD GetMoney() CONST;

	// ��ȡ��ͨ��������
	float GetNormalAttackDis() CONST;

	// ��ȡ��ǰӢ������
	em_Hero_Pro GetHeroPro() CONST;

	// ��ȡ���Ӣ��������·��
	em_Path_Type& GetHeroPath() CONST;

	// ��·
	BOOL Move(_In_ CONST Point& TarPoint) CONST;

	// �ߵ��յ�
	BOOL MoveToPoint(_In_ CONST Point& TarPoint, _In_ float fDis) CONST;

	// ֹͣ��·!
	BOOL StopAction() CONST;

	// �����ӽ�
	BOOL LockView() CONST;
private:
	DSIABLE_COPY_AND_ASSIGN(CPerson);
};



#endif
