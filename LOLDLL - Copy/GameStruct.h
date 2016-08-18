#ifndef __LOL_CHINA_LOLDLL_GAME_VARIABLE_GAMESTRUCT_H__
#define __LOL_CHINA_LOLDLL_GAME_VARIABLE_GAMESTRUCT_H__

#include <MyTools/Character.h>
#include <MyTools/CLLog.h>
#include <memory>
#include <stack>
#include <queue> 
#include <process.h>
#include <algorithm>

/************************************************************************/
/* GameBase                                                             */
/************************************************************************/




























/************************************************************************/
/* GameMacro                                                            */
/************************************************************************/






#define VARIABLE_ID_MAINTHREADID					0x0



#define MAX_TELPORT_SIZE							(34 * 512 / 4)

#define SZFILE_NAME_SHAREDINFO						L"LOL_CHINA_Share_Info"
#define MAX_GAME_COUNT								50
#define MAX_OBJECT_NAME_LEN							32




#define ReadDWORD(x)								CCharacter::ReadDWORD(x)
#define ReadBYTE(x)									CCharacter::ReadBYTE(x)
#define ReadFloat(x)								CCharacter::ReadFloat(x)
#define ReadDouble(x)								CCharacter::ReadDouble(x)

#define DSIABLE_COPY_AND_ASSIGN(TypeName)	\
	TypeName(CONST TypeName&) = delete;		\
	VOID operator=(CONST TypeName&) = delete;






/************************************************************************/
/* Struct                                                               */
/************************************************************************/

struct Point
{
	float X, Z, Y;
	Point() : X(0), Y(0), Z(0)
	{

	}
	Point(float pX, float pY, float pZ) : X(pX), Y(pY), Z(pZ)
	{

	}
	bool operator == (const Point & p) CONST
	{
		return p.X == X && p.Y == Y;
	}
	bool operator != (const Point & p) CONST
	{
		return p.X != X || p.Y != Y;
	}
	bool IsZero() CONST
	{
		return X == 0 || Y == 0 || Z == 0;
	}
	int GetX() CONST
	{
		return static_cast<int>(X);
	}
	int GetY() CONST
	{
		return static_cast<int>(Y);
	}
	int GetZ() CONST
	{
		return static_cast<int>(Z);
	}
};

enum em_GameCmd
{
	em_GameCmd_None,
	em_GameCmd_Start,
	em_GameCmd_Stop
};

enum em_Skill_Index
{
	em_Skill_Index_Q,
	em_Skill_Index_W,
	em_Skill_Index_E,
	em_Skill_Index_R
};

enum em_Camp
{
	em_Camp_Blue,
	em_Camp_Red,
	em_Camp_Neutral,
	em_Camp_UnKnow
};

enum em_Path_Type
{
	Path_Type_Top,
	Path_Type_Middle,
	Path_Type_Buttom
};

enum em_Hero_Pro
{
	em_Hero_Pro_Ryze,			// ���˷�ʦ
	em_Hero_Pro_Garen,			// ��������
	em_Hero_Pro_Ashe,			// ��������
	em_Hero_Pro_MissFortune,	// �ͽ�����
	em_Hero_Pro_Ezreal,			// ̽�ռ�
	em_Hero_Pro_MasterYi,		// �޼���ʥ
	em_Hero_Pro_Malzahar,		// �����֪
	em_Hero_Pro_Chogath,		// ��տ־�
	em_Hero_Pro_Nunu,			// ѩ����ʿ
	em_Hero_Pro_Heimerdinger,	// ������
	em_Hero_Pro_Graves,			// �����ͽ
	em_Hero_Pro_Swain,			// ��ʿͳ��
	em_Hero_Pro_Annie,			// �ڰ�֮Ů
	em_Hero_Pro_Vayne,			// ��ҹ����
	em_Hero_Pro_Maokai,			// Ť������
	em_Hero_Pro_Veigar,			// а��С��ʦ
	em_Hero_Pro_Sejuani,		// �ݶ�֮ŭ
	em_Hero_Pro_Tristana,		// ��������
	em_Hero_Pro_Galio,			// �ڱ�֮��
	em_Hero_Pro_Lucian,			// ʥǹ����
	em_Hero_Pro_Trundle,		// ��ħ֮��
	em_Hero_Pro_Syndra,			// ����Ԫ��
	em_Hero_Pro_Aatrox,			// ���ὣħ
	em_Hero_Pro_Taric,			// ��ʯ��ʿ
	em_Hero_Pro_Rumble,			// ��е����
	em_Hero_Pro_Diana,			// ��Ů��
	em_Hero_Pro_Urgot,			// ����֮��
	em_Hero_Pro_Teemo,			// Ѹ�ݳ��
	em_Hero_Pro_Caitlyn,		// Ƥ��Ů��
	em_Hero_Pro_Corki,			// Ӣ��Ͷ����
	em_Hero_Pro_Fiora,			// ��˫����
	em_Hero_Pro_Kennen,			// ��֮��
	em_Hero_Pro_Mordekaiser,	// ����ڤ��
	em_Hero_Pro_Nautilus,		// �̩̹
	em_Hero_Pro_RekSai,			// ��նݵ���
	em_Hero_Pro_Sivir,			// ս��Ů��
	em_Hero_Pro_Thresh,			// ����������
	em_Hero_Pro_TwistedFate,	// ���ƴ�ʦ
	em_Hero_Pro_KogMaw,			// ��Ԩ�޿�
	em_Hero_Pro_Ahri			// ��β����
};

enum em_Skill_Type
{
	em_Skill_Type_Directional,	// ָ���Լ���
	em_Skill_Type_UnDirectional, // ��ָ���Լ���
	em_Skill_Type_Buff_Self,		// Buff����
	em_Skill_Type_Self_UnDirectional // ��ָ���Եļ���, ���������Լ�����
};

struct ACCOUNT_INFO
{
	WCHAR szUserName[64];			//�ʺ�
	WCHAR szPassWord[32];			//����
	DWORD dwServerId;				//������
	DWORD dwOrderIndex;				//��ɫ�б�
	WCHAR szPlayerName[32];			//�������
	BOOL bAlive;					//���ʶ�����ڼ��һ�δ˱�ʶ�����û������ΪTRUE��ʾĿ����̳������ˡ�
	BOOL bLogin;					//��¼���=FALSE
	WCHAR szCardNo[64];				//����
	DWORD dwCardToken;				// ��������
	em_GameCmd GameCmd;				// ��Ϸ״̬
	DWORD dwSortIndex;				// �������
	DWORD dwClasses;				// ְҵ
};

struct AccountLog
{
	BOOL bOccupy;											// �Ƿ�ռ��
	WCHAR szMsg[64];										// ��־
};

typedef struct _AccountRunStatus
{
	BOOL bDone;												// �Ƿ�ˢ���������
	BOOL bExist;											// ���ʺ��Ѿ���ռ����
	BOOL bLogining;											// �Ƿ��¼��
	BOOL bClose;											// �Ƿ�ǿ�ƹرո��ʺ�
	BOOL bLogined;											// �Ƿ��¼��
	BOOL bDelete;											// �Ƿ�Ҫɾ�����ʺ�->Account.txt
	UINT uLoginFaildCount;									// ��¼ʧ�ܴ���
	UINT uCreatePlayerFaildCount;							// ������ɫʧ�ܴ���
	UINT uUnExistGameHwndCount;								// ���Ҵ���ʧ�ܴ���
	BOOL bFrozen;											// ����
}AccountRunStatus;

typedef struct Account_Info_Game
{
	ACCOUNT_INFO ACCOUNT_INFO_;								// �ʺ���Ϣ
	AccountLog   AccountLog_;								// �ʺ���־
	DWORD dwPid;											// ����ID
	HWND hGameWnd;											// ���ھ��
	AccountRunStatus AccountStatus;							// �ʺ�״̬

	LPCWSTR GetAccName()
	{
		return GetAccountInfo()->szUserName;
	}
	DWORD& GetOrderIndex()
	{
		return GetAccountInfo()->dwOrderIndex;
	}
	UINT& GetLoginFaildCount()
	{
		return AccountStatus.uLoginFaildCount;
	}
	ACCOUNT_INFO* GetAccountInfo()
	{
		return &ACCOUNT_INFO_;
	}
};

typedef struct _Share_Global_Account
{
	BOOL bRun;												// �Ƿ���ȫ������
	DWORD dwAreaId;											// ����Id
	WCHAR wszScriptName[32];								// �ű�����
	WCHAR wszTypeName[32];									// ��¼����
	WCHAR wszMailPlayerName[10][16];						// �ʼĽ�ɫ��
	UINT  uMailNameCount;									// �ʼĽ�ɫ������
	UINT  uMailNameIndex;									// ��ȡ���ĸ��ʼ�ƫ����
	CHAR  szServerIp[32];									// ��������IP
	WCHAR wszWarehouseScript[32];							// �ֿ�Žű�
	BOOL IsClose_By_Banned;									// ��ź��Ƿ�ر�
	BOOL IsPK;												// �Ƿ�PK
	BOOL IsDailyTask;										// �Ƿ����ճ�
}Share_Global_Account;


struct Shared_Info
{
	WCHAR szConsolePath[MAX_PATH];							// ����̨·��
	WCHAR wszGamePath[MAX_PATH];							// ��Ϸ·��
	int nAccountCount;										// Size
	Account_Info_Game arrGameInfo[MAX_GAME_COUNT];			// ����
	Share_Global_Account GlobalAccount;						// ȫ������

	Account_Info_Game* ExistEmptyArrGameInfo()
	{
		auto itr = std::find_if(std::begin(arrGameInfo), std::end(arrGameInfo), [](Account_Info_Game& AccountGame){
			return !AccountGame.AccountStatus.bExist;
		});

		if (itr == std::end(arrGameInfo))
			return nullptr;
		return itr;
	}
	Account_Info_Game* GetCurrentAccountGame()
	{
		auto itr = std::find_if(std::begin(arrGameInfo), std::end(arrGameInfo), [](Account_Info_Game& AccountGame){
			return AccountGame.AccountStatus.bLogining;
		});

		if (itr == std::end(arrGameInfo))
			return nullptr;
		return itr;
	}
};












#endif