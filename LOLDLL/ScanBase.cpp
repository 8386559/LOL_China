#include "stdafx.h"
#include "ScanBase.h"
#include <MyTools/CLLog.h>

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
	DWORD dwStartTick = ::GetTickCount();
	dwBase = CLSearchBase::FindBase("807E1000740E", 0x59 - 0x43, 1, 0, LOL_CHINA_CLIENT);
	CLLog::Print(__FUNCTIONW__, _SELF, 0, LOG_LEVEL_NORMAL, L"#define	�����ַ	0x%X", dwBase);
	//�ʼ�CALL
	dwBase = CLSearchBase::FindCALL("83??60836C2414010F85", 0x0FC - 0x162, dwClient, 1, 0, LOL_CHINA_CLIENT);
	CLLog::Print(__FUNCTIONW__, _SELF, 0, LOG_LEVEL_NORMAL, L"#define	�ʼ�CALL	0x%X", dwBase);
	//����˲�ƹ��ҵ�ַ
	dwAddr = CLSearchBase::FindAddr("7d0983c0018985????????6a00", 0x005AA81C - 0x005AA82C, 0, LOL_CHINA_CLIENT);
	CLLog::Print(__FUNCTIONW__, _SELF, 0, LOG_LEVEL_NORMAL, L"#define	����˲�ƹ��ҵ�ַ	0x%X", dwAddr);
}
