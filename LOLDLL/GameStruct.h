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

#define �����ַ										0x17A7C30
#define ������ַ										0x27CBA5C
#define BUFF��ַ										0x17A6B00
#define ���ܱ���ƫ��1									0x2588
#define ���ܱ���ƫ��2									0x518
#define ����OBJƫ��										0xEC
#define ��Ϸ����ʱ���ַ								0x343942C
#define ��������ƫ��									0x210
#define װ������ƫ��1									0x1318
#define ������ƷCALL									0x00C0BA10
#define ��·CALL										0x037190C7
#define ʹ�ü���CALL									0x00CE71A0
#define ��ͨ����CALL									0x037190C7
#define ѧϰ����CALL									0x858F50
#define �ӽǻ�ַ										0x17A7E54
#define �ӽ�ƫ��										0x20

#define HPƫ��										0x2F4
#define MPƫ��										0x214
#define ����ƫ��X									0x4C
#define Ӣ�۵ȼ��麯��ƫ��							0x334
#define ���＼�ܵ��麯��ƫ��						0xBC
#define ���＼�ܵ�ƫ��								0x40
#define ��Ǯƫ��									0x12E4
#define ����ƫ��1									0x2CEC
#define ����ƫ��2									0x70
#define ����ƫ��3									0x31C

// �����̶������
#define ����ƫ��Y									����ƫ��X + 0x4
#define ����ƫ��Z									����ƫ��Y + 0x4
#define MAXHPƫ��									HPƫ�� + 0x10
#define MAXMPƫ��									MPƫ�� + 0x10
#define Ӣ������ƫ��									0x9A0
#define ���ܺ���ƫ��1									0x34
#define ���ܺ���ƫ��2									0x56C
#define װ������ƫ��2									0x198
#define װ��IDƫ��										0x70
#define �ж��Ƿ�ɼ�ƫ��								0x100
/************************************************************************/
/* GameMacro                                                            */
/************************************************************************/

#define BLUE_BUFF_REFRESHTIME						6 * 60 * 1000
#define BLUE_BUFF_ID								0x1C
#define RED_BUFF_REFRESHTIME						6 * 60 * 1000
#define DRAGON_BUFF_REFRESHTIME						6 * 60 * 1000
#define MIDDLE_HERO_PRO								em_Hero_Pro_Ryze
#define MAX_ATTACK_DIS								10.0f

#define SKILLNAME_RECALL1							L"recall"
#define SKILLNAME_RECALL2							L"OdinRecall"
#define DRAGONNAME									L"SRU_Dragon6.1.1"
#define BLUE_BUFF_NAME1								L"SRU_Blue7.1.1"
#define BLUE_BUFF_NAME2								L"SRU_Blue1.1.1"
#define RED_BUFF_NAME1								L"SRU_Red4.1.1"
#define RED_BUFF_NAME2								L"SRU_Red4.1.1"

#define BLUE_CAMP_SPRING_NAME						L"Turret_OrderTurretShrine_A"
#define RED_CAMP_SPRING_NAME						L"Turret_ChaosTurretShrine_A"

#define SKILLNAME_SUMMONERHASTE						L"summonerhaste"
#define SKILLTIME_SUMMONERHASTE						3 * 60 * 1000
#define SKILLNAME_SUMMONERHEAL						L"summonerheal"
#define SKILLTIME_SUMMONERHEAL						4 * 60 * 1000
#define SKILLNAME_ITEMVOIDGATE						L"ItemVoidGate"
#define SKILLTIME_ITEMVOIDGATE						1 * 60 * 1000


#define HERO_BUFF_ASHE_Q							0xE
#define HERO_BUFF_MASTERYI_W						0x0
#define HERO_BUFF_MISSFORTUNE_W						0x19
#define HERO_BUFF_GAREN_Q							0x0
#define HERO_BUFF_GAREN_W							0x0
#define HERO_BUFF_MALZAHAR_R						0x0
#define HERO_BUFF_NUNU_R							0x0
#define HERO_BUFF_SJUANI_W							0x0
#define HERO_BUFF_TRISTANA_Q						0x0
#define HERO_BUFF_TRUNDLE_Q							0x0
#define HERO_BUFF_RUMBLE_Q							0x0
#define HERO_BUFF_RUMBLE_W							0x0
#define HERO_BUFF_URGOT_W							0x0
#define HERO_BUFF_TEEMO_W							0x0
#define HERO_BUFF_FIORA_E							0x0
#define HERO_BUFF_MORDEKAISER_Q						0x0
#define HERO_BUFF_NAUTILUS_W						0x0
#define HERO_BUFF_SIVIR_W							0x0
#define HERO_BUFF_SIVIR_E							0x0
#define HERO_BUFF_KOGMAW_W							0x0
#define HERO_BUFF_ANNIE_E							0x0
#define HERO_BUFF_ANNIE_R							0x0
#define HERO_BUFF_AMUMU_W							0x0
#define HERO_BUFF_BLITZCRANK_W						0x0
#define HERO_BUFF_BLITZCRANK_E						0x0
#define HERO_BUFF_DARIUS_W							0x0
#define HERO_BUFF_DRMUNDO_W							0x0
#define HERO_BUFF_DRMUNDO_E							0x0
#define HERO_BUFF_FIDDLESTICKS_W					0x0
#define HERO_BUFF_FIZZ_W							0x0
#define HERO_BUFF_GRAGAS_W							0x0
#define HERO_BUFF_ILLAOI_W							0x0
#define HERO_BUFF_IRELIA_W							0x0
#define HERO_BUFF_JARVANIV_W						0x0
#define HERO_BUFF_JAX_W								0x0
#define HERO_BUFF_JHIN_R							0x0
#define HERO_BUFF_KARMA_E							0x0
#define HERO_BUFF_KARMA_R							0x0
#define HERO_BUFF_KATARINA_R						0x0
#define HERO_BUFF_LEONA_Q							0x0
#define HERO_BUFF_MALPHITE_W						0x0
#define HERO_BUFF_MONKEYKING_Q						0x0
#define HERO_BUFF_MONKEYKING_W						0x0
#define HERO_BUFF_MORGANA_E							0x0
#define HERO_BUFF_NASUS_Q							0x0
#define HERO_BUFF_OLAF_W							0x0
#define HERO_BUFF_OLAF_R							0x0
#define HERO_BUFF_SION_W							0x0
#define HERO_BUFF_POPPY_W							0x0
#define HERO_BUFF_RAMMUS_W							0x0
#define HERO_BUFF_RENEKTON_W						0x0
#define HERO_BUFF_SONA								0x0
#define HERO_BUFF_XINZHAO_Q							0x0
#define HERO_BUFF_XINZHAO_W							0x0
///////Equment///////////////////////////////////////////////////////////////////
#define EQUMENT_PRICE_��ҩ							50
#define EQUMENT_ID_��ҩ								0x0
#define EQUMENT_ID_��ˮ��							0x403
#define EQUMENT_ID_Ů��֮��							0xBFE
#define EQUMENT_ID_��Ѫ�����						0x41D
#define EQUMENT_ID_����֮��							0x40E
#define EQUMENT_ID_��Ѫ��							0xC00
#define EQUMENT_ID_���								0xC1D
#define EQUMENT_ID_ҫ��								0xBF1
#define EQUMENT_ID_��ʴ								0xBE4
#define EQUMENT_ID_����֮��							0xC06
#define EQUMENT_ID_�����Ƶµ�ս��					0xC3D
#define EQUMENT_ID_��������							0x3FA
#define EQUMENT_ID_����֮��							0xDB4
#define EQUMENT_ID_����֮��							0x413
#define EQUMENT_ID_����ħ��							0x402
#define EQUMENT_ID_ʮ����							0x40D
#define EQUMENT_ID_�����Ŀ�֮��					0xC34
#define EQUMENT_ID_�޾�֮��							0xBD7
#define EQUMENT_ID_����֮��							0xEE4
#define EQUMENT_ID_�ȶ��������䵶					0xC48
#define EQUMENT_ID_�ư�����֮��						0xC51
#define EQUMENT_ID_��ɫ�и���						0xBFF
#define EQUMENT_ID_������֮ȭ						0xBE4
#define EQUMENT_ID_��˪֮��							0xBCE
#define EQUMENT_ID_��������						0xBDB
#define EQUMENT_ID_���˵�ɱ��						0xBDA
#define EQUMENT_ID_�����������������					0xBDC
#define EQUMENT_ID_ħ��								0xBBC
#define EQUMENT_ID_����								0xC0E
#define EQUMENT_ID_¬���ȵ�쫷�						0xC0D
#define EQUMENT_ID_��Ӱ֮��							0xBE6
#define EQUMENT_ID_���ô��							0x422
#define EQUMENT_ID_�����ߵ�����֮ñ					0xC11
#define EQUMENT_ID_��̫����							0xC29
#define EQUMENT_ID_¬�ǵĻ���						0xCD5
#define EQUMENT_ID_�Ļ����							0xC40
#define EQUMENT_ID_���������ĥ						0xC4F
#define EQUMENT_ID_��������							0x3F3
#define EQUMENT_ID_�����ı�������					0xC2C
#define EQUMENT_ID_����֮��							0xC1C
#define EQUMENT_ID_����ʹ֮��						0xBBB
#define EQUMENT_ID_��ʧ���½�						0xEDA
#define EQUMENT_ID_��ħ����							0xC24
#define EQUMENT_ID_Ī�����ص�						0xC5D
#define EQUMENT_ID_��������							0x421
#define EQUMENT_ID_��ԨȨ��							0xBB9
#define EQUMENT_ID_�����߻�ʯ						0xBC2
#define EQUMENT_ID_ʱ��֮��							0xBD3
#define EQUMENT_ID_���֮��							0xC3F
#define EQUMENT_ID_�ٶ�֮ѥ							0x3E9
#define EQUMENT_ID_��սʿ�ּ�						0xBBE
#define EQUMENT_ID_����֮ѥ							0xBC1
#define EQUMENT_ID_����֮ѥ							0xC56
#define EQUMENT_ID_��ʦ֮ѥ							0xBCC
#define EQUMENT_ID_ˮ��֮ѥ							0xC27
#define EQUMENT_ID_�������							0xBE7
#define EQUMENT_ID_��������							0xBD0
#define EQUMENT_ID_����������						0xC0A
#define EQUMENT_ID_��˪֮��							0xC26
#define EQUMENT_ID_��������							0xBD1
#define EQUMENT_ID_��ˮ��							0x400
#define EQUMENT_ID_���Ӽ�							0x407
#define EQUMENT_ID_���ߵİ��						0xE9E
#define EQUMENT_ID_����֮��							0xC47
#define EQUMENT_ID_�߱ȵ�����						0xEA7
#define EQUMENT_ID_���׶���							0xBFC
#define EQUMENT_ID_ȼ�ձ�ʯ							0xBFB
#define EQUMENT_ID_���廤��							0xED9
#define EQUMENT_ID_��ͽ����							0xC0B
#define EQUMENT_ID_�Ļ궷��							0xC8B
#define EQUMENT_ID_�������							0xBF9
#define EQUMENT_ID_���Ż���							0xC21
#define EQUMENT_ID_��������֮ϻ						0xC76
#define EQUMENT_ID_Ů����ɴ							0xC1E
#define EQUMENT_ID_���ݶ���							0x805
#define EQUMENT_ID_������							0xDB8

////////Other//////////////////////////////////////////////////////////////////

#define VARIABLE_ID_MAINTHREADID					0x0
#define VARIABLE_ID_TIMERID							0x1


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

struct RoundPoint
{
	Point Central;
	float fRange;
};

enum em_Human_Type
{
	em_Human_Type_Solider,
	em_Human_Type_Turret,
	em_Human_Type_Hero,
	em_Human_Type_Unknow
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
	em_Hero_Pro_None,			// δ֪
	em_Hero_Pro_Ryze,			// ���˷�ʦ
	em_Hero_Pro_Ashe,			// ��������
	em_Hero_Pro_MasterYi,		// �޼���ʥ
	em_Hero_Pro_MissFortune,	// �ͽ�����
	em_Hero_Pro_Garen,			// ��������
	em_Hero_Pro_Malzahar,		// �����֪
	em_Hero_Pro_Ezreal,			// ̽�ռ�
	em_Hero_Pro_Chogath,		// ��տ־�
	em_Hero_Pro_Nunu,			// ѩ����ʿ
	em_Hero_Pro_Heimerdinger,	// ������
	em_Hero_Pro_Graves,			// �����ͽ
	em_Hero_Pro_Swain,			// ��ʿͳ��
	em_Hero_Pro_Vayne,			// ��ҹ����
	em_Hero_Pro_Maokai,			// Ť������
	em_Hero_Pro_Veigar,			// а��С��ʦ
	em_Hero_Pro_Sejuani,		// �ݶ�֮ŭ
	em_Hero_Pro_Tristana,		// ��������
	em_Hero_Pro_Galio,			// �ڱ�֮��
	em_Hero_Pro_Lucian,			// ʥǹ����
	em_Hero_Pro_Trundle,		// ��ħ֮��
	em_Hero_Pro_Aatrox,			// ���ὣħ
	em_Hero_Pro_Taric,			// ��ʯ��ʿ
	em_Hero_Pro_Rumble,			// ��е����
	em_Hero_Pro_Diana,			// ��Ů��
	em_Hero_Pro_Urgot,			// ����֮��
	em_Hero_Pro_Teemo,			// Ѹ�ݳ��
	em_Hero_Pro_Caitlyn,		// Ƥ��Ů��
	em_Hero_Pro_Corki,			// Ӣ��Ͷ����
	em_Hero_Pro_Fiora,			// ��˫����
	em_Hero_Pro_Mordekaiser,	// ����ڤ��
	em_Hero_Pro_Nautilus,		// �̩̹
	em_Hero_Pro_Sivir,			// ս��Ů��
	em_Hero_Pro_KogMaw,			// ��Ԩ�޿�
	em_Hero_Pro_Annie,			// �ڰ�֮Ů
	em_Hero_Pro_Akali,			// ������
	em_Hero_Pro_Alistar,		// ţͷ����
	em_Hero_Pro_Amumu,			// ��֮ľ����
	em_Hero_Pro_Blitzcrank,		// ����������
	em_Hero_Pro_Brand,			// �������
	em_Hero_Pro_Cassiopeia,		// ħ��֮ӵ
	em_Hero_Pro_Darius,			// ŵ����˹֮��
	em_Hero_Pro_DrMundo,		// �ɶ�
	em_Hero_Pro_Ekko,			// ����
	em_Hero_Pro_FiddleSticks,	// ĩ��ʹ��
	em_Hero_Pro_Fizz,			// ��ϫ����
	em_Hero_Pro_Gragas,			// ��Ͱ
	em_Hero_Pro_Illaoi,			// ���޼�˾
	em_Hero_Pro_Itrlia,			// ������־
	em_Hero_Pro_JarvanIV,		// �������ǻ���
	em_Hero_Pro_Jax,			// ������ʦ
	em_Hero_Pro_Jhin,			// Ϸ��ʦ
	em_Hero_Pro_Jinx,			// ��������
	em_Hero_Pro_Karma,			// ������
	em_Hero_Pro_Katarina,		// ����֮��
	em_Hero_Pro_Leona,			// ���Ů��
	em_Hero_Pro_Lux,			// ���Ů��
	em_Hero_Pro_Malphite,		// ���Ҿ���
	em_Hero_Pro_MonkeyKing,		// �����ʥ
	em_Hero_Pro_Morgana,		// ������ʹ
	em_Hero_Pro_Nasus,			// ɳĮ����
	em_Hero_Pro_Olaf,			// ��սʿ
	em_Hero_Pro_Sion,			// ����ս��
	em_Hero_Pro_Poppy,			// ʥ��֮��
	em_Hero_Pro_Rammus,			// ��������
	em_Hero_Pro_Renekton,		// ��Į����
	em_Hero_Pro_Sona,			// ��ɪ��Ů
	em_Hero_Pro_Velkoz,			// ���֮��
	em_Hero_Pro_XinZhao,		// �°��ܹ�
	em_Hero_Pro_Ziggs,			// ���ƹ��
};

enum em_Skill_Type
{
	em_Skill_Type_Directional,	// ָ���Լ���
	em_Skill_Type_UnDirectional, // ��ָ���Լ���
	em_Skill_Type_Buff_Self,		// Buff����
	em_Skill_Type_Self_UnDirectional // ��ָ���Եļ���, ���������Լ�����
};

struct ResSkillInfo
{
	em_Skill_Type	emSkillType;
	float			fSkillDis;
};
struct ResSkill
{
	em_Hero_Pro		emHeroPro;
	wstring			HeroName;
	ResSkillInfo    ResSkillInfoQ;
	ResSkillInfo    ResSkillInfoW;
	ResSkillInfo    ResSkillInfoE;
	ResSkillInfo    ResSkillInfoR;
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

struct Account_Info_Game
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

struct Share_Global_Account
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
};


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