#include "stdafx.h"
#include "ScanBase.h"
#include <MyTools/CLLog.h>
#include <MyTools/CLSearchBase.h>

#define _SELF L"ScanBase.cpp"
#define LOL_CHINA_CLIENT	L"League of Legends.exe"
CScanBase::CScanBase()
{
}

CScanBase::~CScanBase()
{
}

CScanBase& CScanBase::GetInstance()
{
	static CScanBase ScanBase;
	return ScanBase;
}

BOOL CScanBase::Begin() CONST
{
	DWORD dwBase, dwAddr, dwCALL = 0;
	DWORD dwClient = (DWORD)::GetModuleHandleW(LOL_CHINA_CLIENT);
	//�����ַ
	auto dwStartTick = ::GetTickCount64();
	dwBase = CLSearchBase::FindBase("0F84????????807F14000F84", 0x0076FAF0 - 0x0076FB39, 1, 0, LOL_CHINA_CLIENT);
	CLLog::Print(__FUNCTIONW__, _SELF, 0, LOG_LEVEL_NORMAL, L"#define	�����ַ	0x%X", dwBase);
	// ������ַ
	dwBase = CLSearchBase::FindBase("A1????????2B05????????C1F802D1E8", 0x009D0436 - 0x009D043B, 2, 0, LOL_CHINA_CLIENT);
	CLLog::Print(__FUNCTIONW__, _SELF, 0, LOG_LEVEL_NORMAL, L"#define	������ַ	0x%X", dwBase);
	// BUFF��ַ
	dwBase = CLSearchBase::FindBase("6A00E8????????8B0D????????85??7405", 0x009B2AD4 - 0x009B2ADB, 2, 0, LOL_CHINA_CLIENT);
	CLLog::Print(__FUNCTIONW__, _SELF, 0, LOG_LEVEL_NORMAL, L"#define	BUFF��ַ	0x%X", dwBase);
	// ���ܱ���ƫ��1
	dwBase = CLSearchBase::FindBase("83??3F77??05??????????8B??89", 0x00BCD40A - 0x00BCD40F, 1, 0, LOL_CHINA_CLIENT);
	CLLog::Print(__FUNCTIONW__, _SELF, 0, LOG_LEVEL_NORMAL, L"#define	���ܱ���ƫ��1	0x%X", dwBase);
	// ���ܱ���ƫ��2
	dwBase = CLSearchBase::FindBase("83C4??85??78??83??40", 0x00F33D31 - 0x00F33D60, 3, 0, LOL_CHINA_CLIENT);
	CLLog::Print(__FUNCTIONW__, _SELF, 0, LOG_LEVEL_NORMAL, L"#define	���ܱ���ƫ��2	0x%X", dwBase);
	// ����OBJƫ��
	dwBase = CLSearchBase::FindBase("83??????00000075??8B??8B??FF50", 0x00DB5CA6 - 0x00DB5CA6, 0x2, 0, LOL_CHINA_CLIENT);
	CLLog::Print(__FUNCTIONW__, _SELF, 0, LOG_LEVEL_NORMAL, L"#define	����OBJƫ��	0x%X", dwBase);
	// ��Ϸ����ʱ���ַ
	dwBase = CLSearchBase::FindBase("8B??????????0F57C90F2FC1", 0x00D07998 - 0x00D07998, 2, 0, LOL_CHINA_CLIENT);
	CLLog::Print(__FUNCTIONW__, _SELF, 0, LOG_LEVEL_NORMAL, L"#define	��Ϸ����ʱ���ַ	0x%X", dwBase);
	// ��������ƫ��
	dwBase = CLSearchBase::FindBase("8B018B4004FFD0D99E????0000??C3", 0x0097588D - 0x00975894, 2, 0, LOL_CHINA_CLIENT);
	CLLog::Print(__FUNCTIONW__, _SELF, 0, LOG_LEVEL_NORMAL, L"#define	��������ƫ��	0x%X", dwBase);
	// װ������ƫ��1
	dwBase = CLSearchBase::FindBase("FF????81??????000084C0", 0x0C36608 - 0x00C3660B, 0x2, 0, LOL_CHINA_CLIENT);
	CLLog::Print(__FUNCTIONW__, _SELF, 0, LOG_LEVEL_NORMAL, L"#define	װ������ƫ��1	0x%X", dwBase);
	// �ӽǻ�ַ
	dwBase = CLSearchBase::FindBase("8A??2084C00F84????????A1", 0x005D3280 - 0x005D326E, 2, 0, LOL_CHINA_CLIENT);
	CLLog::Print(__FUNCTIONW__, _SELF, 0, LOG_LEVEL_NORMAL, L"#define	�ӽǻ�ַ	0x%X", dwBase);
	// �ӽ�ƫ��
	dwBase = CLSearchBase::FindBase("8A??2084C00F84????????A1", 0x005D3280 - 0x005D3280, 2, 0, LOL_CHINA_CLIENT, 0xFF);
	CLLog::Print(__FUNCTIONW__, _SELF, 0, LOG_LEVEL_NORMAL, L"#define	�ӽ�ƫ��	0x%X", dwBase);
	// HPƫ��
	dwBase = CLSearchBase::FindBase("7405B001C2040032C0C204008BFF", 0x00E55024 - 0x00E55033, 4, 0, LOL_CHINA_CLIENT);
	CLLog::Print(__FUNCTIONW__, _SELF, 0, LOG_LEVEL_NORMAL, L"#define	HPƫ��	0x%X", dwBase);
	// MPƫ��
	dwBase = CLSearchBase::FindBase("0F??F88B??C1??04", 0x00F474C4 - 0x00F47510, 5, 0, LOL_CHINA_CLIENT);
	CLLog::Print(__FUNCTIONW__, _SELF, 0, LOG_LEVEL_NORMAL, L"#define	MPƫ��	0x%X", dwBase);
	// ����ƫ��X
	dwBase = CLSearchBase::FindBase("E8????????E9????????F30F1043", 0x00DEBFFD - 0x00DEC007, 4, 0, LOL_CHINA_CLIENT, 0xFF);
	CLLog::Print(__FUNCTIONW__, _SELF, 0, LOG_LEVEL_NORMAL, L"#define	����ƫ��X	0x%X", dwBase);
	// Ӣ�۵ȼ��麯��ƫ��
	dwBase = CLSearchBase::FindBase("FFD084C074188B??8B??FF90", 0x008EEAF8 - 0x008EEB0C, 2, 0, LOL_CHINA_CLIENT);
	CLLog::Print(__FUNCTIONW__, _SELF, 0, LOG_LEVEL_NORMAL, L"#define	Ӣ�۵ȼ��麯��ƫ��	0x%X", dwBase);
	// ���＼�ܵ��麯��ƫ��
	dwBase = CLSearchBase::FindBase("8B80????????FFD08B????85", 0x009277FF - 0x009277FF, 2, 0, LOL_CHINA_CLIENT);
	CLLog::Print(__FUNCTIONW__, _SELF, 0, LOG_LEVEL_NORMAL, L"#define	���＼�ܵ��麯��ƫ��	0x%X", dwBase);
	// ���＼�ܵ�ƫ��
	dwBase = CLSearchBase::FindBase("8B80????????FFD08B????85", 0x009277FF - 0x00927807, 2, 0, LOL_CHINA_CLIENT, 0xFF);
	CLLog::Print(__FUNCTIONW__, _SELF, 0, LOG_LEVEL_NORMAL, L"#define	���＼�ܵ�ƫ��	0x%X", dwBase);
	// ��Ǯƫ��
	dwBase = CLSearchBase::FindBase("F30F2CC13B46??74", 0x00B136B2 - 0x00B13660, 4, 0, LOL_CHINA_CLIENT);
	CLLog::Print(__FUNCTIONW__, _SELF, 0, LOG_LEVEL_NORMAL, L"#define	��Ǯƫ��	0x%X", dwBase);
	// ����ƫ��1
	dwBase = CLSearchBase::FindBase("A80175??8B0D", 0x00B7D838 - 0x00B7D7D8, 2, 0, LOL_CHINA_CLIENT);
	CLLog::Print(__FUNCTIONW__, _SELF, 0, LOG_LEVEL_NORMAL, L"#define	����ƫ��1	0x%X", dwBase);
	// ����ƫ��2
	dwBase = CLSearchBase::FindBase("A80175??8B0D", 0x00B7D838 - 0x00B7D7DF, 2, 0, LOL_CHINA_CLIENT, 0xFF);
	CLLog::Print(__FUNCTIONW__, _SELF, 0, LOG_LEVEL_NORMAL, L"#define	����ƫ��2	0x%X", dwBase);
	// ����ƫ��3
	dwBase = CLSearchBase::FindBase("A80175??8B0D", 0x00B7D838 - 0x00B7D877, 2, 0, LOL_CHINA_CLIENT);
	CLLog::Print(__FUNCTIONW__, _SELF, 0, LOG_LEVEL_NORMAL, L"#define	����ƫ��3	0x%X", dwBase);

	// ������ƷCALL
	dwCALL = CLSearchBase::FindCALL("8D88????0000E8????????88442410", 0x0076FB3F - 0x0076FB45, dwClient, 1, 0, LOL_CHINA_CLIENT);
	CLLog::Print(__FUNCTIONW__, _SELF, 0, LOG_LEVEL_NORMAL, L"#define	������ƷCALL	0x%X", dwCALL);
	// ��·CALL
	dwCALL = CLSearchBase::FindCALL("74??33C0384510", 0x00C0967C - 0x00C09673, dwClient, 1, 0, LOL_CHINA_CLIENT);
	CLLog::Print(__FUNCTIONW__, _SELF, 0, LOG_LEVEL_NORMAL, L"#define	��·CALL	0x%X", dwCALL);
	// ��ͨ����CALL
	dwCALL = CLSearchBase::FindCALL("6A016A006A006A008D41??50", 0x00C58A1F - 0x00C58A2D, dwClient, 1, 0, LOL_CHINA_CLIENT);
	CLLog::Print(__FUNCTIONW__, _SELF, 0, LOG_LEVEL_NORMAL, L"#define	��ͨ����CALL	0x%X", dwCALL);
	// ѧϰ����CALL
	dwCALL = CLSearchBase::FindCALL("83??3F77??8B??E8????????EB", 0x006E9FA9 - 0x006E9FBB, dwClient, 1, 0, LOL_CHINA_CLIENT);
	CLLog::Print(__FUNCTIONW__, _SELF, 0, LOG_LEVEL_NORMAL, L"#define	ѧϰ����CALL	0x%X", dwCALL);
	// ʹ�ü���CALL
	dwAddr = CLSearchBase::FindAddr("8B450883B8????0000000F84????????8B", 0x00CE71D2 - 0x00CE71A0, 0, LOL_CHINA_CLIENT);
	CLLog::Print(__FUNCTIONW__, _SELF, 0, LOG_LEVEL_NORMAL, L"#define	ʹ�ü���CALL	0x%X", dwAddr);
	Log(LOG_LEVEL_NORMAL, L"����%dms", (DWORD)(::GetTickCount64() - dwStartTick));
	return TRUE;
}
