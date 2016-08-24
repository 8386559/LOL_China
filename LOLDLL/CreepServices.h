#ifndef __LOL_CHINA_LOLDLL_GAME_OBJECTSERVICES_CREEPSERVICES_H__
#define __LOL_CHINA_LOLDLL_GAME_OBJECTSERVICES_CREEPSERVICES_H__

#include "GameVariable.h"

class CCreepServices
{
public:
	CCreepServices();
	~CCreepServices();

	static CCreepServices& GetInstance();

	// �Ƿ����ˢ��BUFF��
	BOOL IsRefreshBlueBuff() CONST;

	// �Ƿ����ˢ��BUFF��
	BOOL IsRefreshRedBuff() CONST;

	// �Ƿ�ˢС����
	BOOL IsRefreshDragonBuff() CONST;
	
	enum em_Creep_Buff_Type
	{
		em_Creep_Buff_Type_Blue,
		em_Creep_Buff_Type_Red,
		em_Creep_Buff_Type_Dragon
	};
	// ��������ˢ��BUFF��ʱ��
	BOOL SetRefreshBuffTick(_In_ em_Creep_Buff_Type emType);

private:
	ULONGLONG ulBlueBuffTick;
	ULONGLONG ulRedBuffTick;
	ULONGLONG ulDragonTick;
private:
	DSIABLE_COPY_AND_ASSIGN(CCreepServices);
};



#endif