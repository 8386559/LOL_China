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
	virtual DWORD GetHp() CONST;
	virtual DWORD GetMaxHp() CONST;
	virtual DWORD GetPercentHp() CONST;

	// MP
	virtual DWORD GetMp() CONST;
	virtual DWORD GetMaxMp() CONST;
	virtual DWORD GetPercentMp() CONST;

	// ����
	Point GetPoint() CONST;

	// ��ȡ����
	float GetDis(_In_ CONST Point& TarPoint) CONST;
	float GetDis() CONST;
	float SetDis(_In_ CONST Point& TarPoint);

	// ��ǰ����Ӫ
	em_Camp GetCurrentCamp() CONST;

	// ��ȡ����
	em_Human_Type GetHumanType() CONST;

	// �Ƿ���ʾ(���ʾ��������)
	virtual BOOL IsShowInFog() CONST;

	// ��ͨ����!
	BOOL Attack() CONST;

	// ����< ���������
	bool operator < (CONST CHumanBaseObject& itm) CONST;

	// �Ƿ����
	BOOL IsDead() CONST;

	// ��ȡ�����ͷŲ���
	DWORD GetSkillParameter() CONST;

	// Ŀ��
	DWORD GetTargetId() CONST;

private:
	float fDis;
};



#endif