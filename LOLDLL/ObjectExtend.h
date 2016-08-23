#ifndef __LOL_CHINA_LOLDLL_GAME_OBJECTSERVICES_OBJECTFUNCTION_H__
#define __LOL_CHINA_LOLDLL_GAME_OBJECTSERVICES_OBJECTFUNCTION_H__

#include "ObjectTraverse.h"

class CObjectExtend : public CObjectTraverse
{
public:
	CObjectExtend();
	~CObjectExtend();

	static CObjectExtend& GetInstance();

	// ֻ�ܱ��̳���ʵ����!
	virtual VOID AbstractClass();
public:
	// ��������װ��
	BOOL ExistEqumentByCondition(_Out_ CEqument* pEqument ,_In_ std::function<BOOL(CONST CEqument&)> Finder) CONST;

	// ����ID�ж��Ƿ����װ��
	BOOL ExistEqumentById(_In_ DWORD dwEqumentId, _Out_ CEqument* pEqument) CONST;

	// ��������Buff
	BOOL ExistHeroBuffByCondition(_Out_ CHeroBuff* pHeroBuff, _In_ std::function<BOOL(CONST CHeroBuff&)> Finder) CONST;

	// ����BUFFID�ж��Ƿ����buff
	BOOL ExistBuffById(_In_ DWORD dwBuffId, _Out_ CHeroBuff* pHeroBuff) CONST;
private:
	DSIABLE_COPY_AND_ASSIGN(CObjectExtend);
};



#endif