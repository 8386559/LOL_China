#ifndef __LOL_CHINA_LOLDLL_GAME_OBJECT_HUMANTYPE_HERO_H__
#define __LOL_CHINA_LOLDLL_GAME_OBJECT_HUMANTYPE_HERO_H__

#include "HumanBaseObject.h"

class CHero : public CHumanBaseObject
{
public:
	CHero();
	CHero(_In_ DWORD dwNodeBase_);
	~CHero();

	// Ӣ������
	virtual cwstring& GetName() CONST;

	// ����ȼ�
	DWORD GetLevel() CONST;

private:

};



#endif