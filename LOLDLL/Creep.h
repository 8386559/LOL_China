#ifndef __LOL_CHINA_LOLDLL_GAME_OBJECT_OTHER_CREEP_H__
#define __LOL_CHINA_LOLDLL_GAME_OBJECT_OTHER_CREEP_H__

#include "BaseObject.h"

class CReep : public CBaseObject
{
public:
	CReep();
	CReep(_In_ DWORD dwNodeBase_);
	~CReep();

	// Ұ������
	virtual cwstring& GetName() CONST;

	// Ұ��ID
	DWORD GetId() CONST;

	// �Ƿ�ˢ����!
	BOOL IsRefresh() CONST;

};



#endif