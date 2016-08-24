#ifndef __LOL_CHINA_LOLDLL_GAME_OBJECTSERVICES_EQUMENTSERVICES_H__
#define __LOL_CHINA_LOLDLL_GAME_OBJECTSERVICES_EQUMENTSERVICES_H__

#include "ObjectExtend.h"

class CEqumentServices
{
public:
	CEqumentServices();
	~CEqumentServices();

	static CEqumentServices& GetInstance();

	// ����һ��װ��
	BOOL BuyEqument();

	// ��ʼ������, ��ҩ!
	BOOL BuyMedicine() CONST;
private:
	DWORD dwLastEqumentId;
private:
	DSIABLE_COPY_AND_ASSIGN(CEqumentServices);
};



#endif