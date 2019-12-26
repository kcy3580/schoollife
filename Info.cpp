// Info.cpp : implementation file
//

#include "stdafx.h"
#include "SchoolLIfeProject.h"
#include "Info.h"
#include "afxdialogex.h"


// CInfo dialog

IMPLEMENT_DYNAMIC(CInfo, CDialogEx)

CInfo::CInfo(CWnd* pParent /*=NULL*/)
	: CDialogEx(IDD_DIALOG_CLASS_INFOINPUT, pParent)
	, m_strAddress(_T(""))
	, m_strBirth(_T(""))
	, m_strGrade(_T(""))
	, m_strName(_T(""))
	, m_strSchNum(_T(""))
	, m_strSubject(_T(""))
{

}

CInfo::~CInfo()
{
}

void CInfo::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
	DDX_Text(pDX, IDC_EDIT_ADDRESS, m_strAddress);
	DDX_Text(pDX, IDC_EDIT_BIRTH, m_strBirth);
	DDX_Text(pDX, IDC_EDIT_GRADE, m_strGrade);
	DDX_Text(pDX, IDC_EDIT_NAME, m_strName);
	DDX_Text(pDX, IDC_EDIT_SCHNUM, m_strSchNum);
	DDX_Text(pDX, IDC_EDIT_SUBJECT, m_strSubject);
}


BEGIN_MESSAGE_MAP(CInfo, CDialogEx)
	ON_BN_CLICKED(IDC_BUTTON_CLEAR, &CInfo::OnClickedButtonClear)
//	ON_BN_CLICKED(IDC_BUTTON_EXIT, &CInfo::OnClickedButtonExit)
END_MESSAGE_MAP()


// CInfo message handlers


void CInfo::OnClickedButtonClear()
{
	// TODO: 여기에 컨트롤 알림 처리기 코드를 추가합니다.
	UpdateData(TRUE);
	m_strName = _T("");
	m_strBirth = _T("");
	m_strSubject = _T("");
	m_strGrade = _T("");
	m_strSchNum = _T("");
	m_strAddress = _T("");
	UpdateData(FALSE);
}