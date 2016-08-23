#ifndef __LOL_CHINA_LOLDLL_GAME_OBJECT_HUMANTYPE_HUMANBASEOBJECT_H__
#define __LOL_CHINA_LOLDLL_GAME_OBJECT_HUMANTYPE_HUMANBASEOBJECT_H__

#include "BaseObject.h"

class CHumanBaseObject : public CBaseObject
{
public:
	CHumanBaseObject();
	CHumanBaseObject(_In_ DWORD dwNodeBase_);
	~CHumanBaseObject();

	// ID
	DWORD GetId() CONST;

	// HP
	DWORD GetHp() CONST;
	DWORD GetMaxHp() CONST;
	DWORD GetPercentHp() CONST;

	// MP
	DWORD GetMp() CONST;
	DWORD GetMaxMp() CONST;
	DWORD GetPercentMp() CONST;

	// ����
	Point GetPoint() CONST;

	// ��ȡ����
	float GetDis(CONST Point& TarPoint) CONST;
	float GetDis() CONST;

	// ��ǰ����Ӫ
	em_Camp GetCurrentCamp() CONST;

	// Ŀ��ID
	DWORD GetTargetId() CONST;

	// �Ƿ���ʾ(���ʾ��������)
	virtual BOOL IsShowInFog() CONST;

	// ��ͨ����!
	BOOL Attack() CONST;

	// ����< ���������
	bool operator < (CONST CHumanBaseObject& itm) CONST;

	// �Ƿ����
	BOOL IsDead() CONST;
private:
	float fDis;
};



#endif