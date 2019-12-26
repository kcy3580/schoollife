// TimeTable.cpp : implementation file
//

#include "stdafx.h"
#include "SchoolLIfeProject.h"
#include "TimeTable.h"
#include "afxdialogex.h"


// CTimeTable dialog

IMPLEMENT_DYNAMIC(CTimeTable, CDialogEx)

CTimeTable::CTimeTable(CWnd* pParent /*=NULL*/)
	: CDialogEx(IDD_DIALOG_CLASS_TIMETABLEINPUT, pParent)
	, m_strF1(_T(""))
	, m_strF2(_T(""))
	, m_strF4(_T(""))
	, m_strF3(_T(""))
	, m_strF5(_T(""))
	, m_strF6(_T(""))
	, m_strF7(_T(""))
	, m_strM1(_T(""))
	, m_strM2(_T(""))
	, m_strM3(_T(""))
	, m_strM4(_T(""))
	, m_strM5(_T(""))
	, m_strM6(_T(""))
	, m_strM7(_T(""))
	, m_strT1(_T(""))
	, m_strT2(_T(""))
	, m_strT3(_T(""))
	, m_strT4(_T(""))
	, m_strT5(_T(""))
	, m_strT6(_T(""))
	, m_strT7(_T(""))
	, m_strTh1(_T(""))
	, m_strTh2(_T(""))
	, m_strTh3(_T(""))
	, m_strTh4(_T(""))
	, m_strTh5(_T(""))
	, m_strTh6(_T(""))
	, m_strTh7(_T(""))
	, m_strW1(_T(""))
	, m_strW2(_T(""))
	, m_strW3(_T(""))
	, m_strW4(_T(""))
	, m_strW5(_T(""))
	, m_strW6(_T(""))
	, m_strW7(_T(""))
{

}

CTimeTable::~CTimeTable()
{
}

void CTimeTable::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
	DDX_Text(pDX, IDC_EDIT_F1, m_strF1);
	DDX_Text(pDX, IDC_EDIT_F2, m_strF2);
	DDX_Text(pDX, IDC_EDIT_F4, m_strF4);
	DDX_Text(pDX, IDC_EDIT_F3, m_strF3);
	DDX_Text(pDX, IDC_EDIT_F5, m_strF5);
	DDX_Text(pDX, IDC_EDIT_F6, m_strF6);
	DDX_Text(pDX, IDC_EDIT_F7, m_strF7);
	DDX_Text(pDX, IDC_EDIT_M1, m_strM1);
	DDX_Text(pDX, IDC_EDIT_M2, m_strM2);
	DDX_Text(pDX, IDC_EDIT_M3, m_strM3);
	DDX_Text(pDX, IDC_EDIT_M4, m_strM4);
	DDX_Text(pDX, IDC_EDIT_M5, m_strM5);
	DDX_Text(pDX, IDC_EDIT_M6, m_strM6);
	DDX_Text(pDX, IDC_EDIT_M7, m_strM7);
	DDX_Text(pDX, IDC_EDIT_T1, m_strT1);
	DDX_Text(pDX, IDC_EDIT_T2, m_strT2);
	DDX_Text(pDX, IDC_EDIT_T3, m_strT3);
	DDX_Text(pDX, IDC_EDIT_T4, m_strT4);
	DDX_Text(pDX, IDC_EDIT_T5, m_strT5);
	DDX_Text(pDX, IDC_EDIT_T6, m_strT6);
	DDX_Text(pDX, IDC_EDIT_T7, m_strT7);
	DDX_Text(pDX, IDC_EDIT_TH1, m_strTh1);
	DDX_Text(pDX, IDC_EDIT_TH2, m_strTh2);
	DDX_Text(pDX, IDC_EDIT_TH3, m_strTh3);
	DDX_Text(pDX, IDC_EDIT_TH4, m_strTh4);
	DDX_Text(pDX, IDC_EDIT_TH5, m_strTh5);
	DDX_Text(pDX, IDC_EDIT_TH6, m_strTh6);
	DDX_Text(pDX, IDC_EDIT_TH7, m_strTh7);
	DDX_Text(pDX, IDC_EDIT_W1, m_strW1);
	DDX_Text(pDX, IDC_EDIT_W2, m_strW2);
	DDX_Text(pDX, IDC_EDIT_W3, m_strW3);
	DDX_Text(pDX, IDC_EDIT_W4, m_strW4);
	DDX_Text(pDX, IDC_EDIT_W5, m_strW5);
	DDX_Text(pDX, IDC_EDIT_W6, m_strW6);
	DDX_Text(pDX, IDC_EDIT_W7, m_strW7);
}


BEGIN_MESSAGE_MAP(CTimeTable, CDialogEx)
	ON_BN_CLICKED(IDC_BUTTON_CLEAR3, &CTimeTable::OnClickedButtonClear3)
END_MESSAGE_MAP()


// CTimeTable message handlers


void CTimeTable::OnClickedButtonClear3()
{
	// TODO: 여기에 컨트롤 알림 처리기 코드를 추가합니다.
	UpdateData(TRUE);
	m_strM1 = _T("");
	m_strM2 = _T("");
	m_strM3 = _T("");
	m_strM4 = _T("");
	m_strM5 = _T("");
	m_strM6 = _T("");
	m_strM7 = _T("");
	m_strT1 = _T("");
	m_strT2 = _T("");
	m_strT3 = _T("");
	m_strT4 = _T("");
	m_strT5 = _T("");
	m_strT6 = _T("");
	m_strT7 = _T("");
	m_strW1 = _T("");
	m_strW2 = _T("");
	m_strW3 = _T("");
	m_strW4 = _T("");
	m_strW5 = _T("");
	m_strW6 = _T("");
	m_strW7 = _T("");
	m_strTh1 = _T("");
	m_strTh2 = _T("");
	m_strTh3 = _T("");
	m_strTh4 = _T("");
	m_strTh5 = _T("");
	m_strTh6 = _T("");
	m_strTh7 = _T("");
	m_strF1 = _T("");
	m_strF2 = _T("");
	m_strF3 = _T("");
	m_strF4 = _T("");
	m_strF5 = _T("");
	m_strF6 = _T("");
	m_strF7 = _T("");
	UpdateData(FALSE);
}
