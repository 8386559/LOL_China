// GameDlg.cpp : implementation file
//

#include "stdafx.h"
#include "LOLDLL.h"
#include "GameDlg.h"
#include "afxdialogex.h"


// CGameDlg dialog

IMPLEMENT_DYNAMIC(CGameDlg, CDialogEx)

CGameDlg::CGameDlg(CWnd* pParent /*=NULL*/)
	: CDialogEx(CGameDlg::IDD, pParent)
{

}

CGameDlg::~CGameDlg()
{
}

void CGameDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
}


BEGIN_MESSAGE_MAP(CGameDlg, CDialogEx)
	ON_BN_CLICKED(IDC_BUTTON1, &CGameDlg::OnBnClickedButton1)
END_MESSAGE_MAP()

BOOL CGameDlg::OnInitDialog()
{
	CListCtrl * m_List = ((CListCtrl *)GetDlgItem(IDC_LIST1));
	if (m_List != nullptr)
		m_List->SetExtendedStyle(m_List->GetExtendedStyle() | LVS_EX_FULLROWSELECT);

	CComboBox * CCB = (CComboBox *)GetDlgItem(IDC_CCB_CMD);
	if (CCB != nullptr)
	{
		CCB->InsertString(0, L"��������");
		CCB->InsertString(1, L"�����̵�");
		CCB->InsertString(2, L"��������");
		CCB->InsertString(3, L"��������");
		CCB->InsertString(4, L"����BUFF");
		CCB->InsertString(5, L"UI����");
	}
	

	return TRUE;
}


// CGameDlg message handlers


void CGameDlg::OnBnClickedButton1()
{
	
}
