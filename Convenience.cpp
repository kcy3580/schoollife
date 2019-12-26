// Convenience.cpp : implementation file
//

#include "stdafx.h"
#include "SchoolLIfeProject.h"
#include "Convenience.h"
#include "afxdialogex.h"


// CConvenience dialog

IMPLEMENT_DYNAMIC(CConvenience, CDialogEx)

CConvenience::CConvenience(CWnd* pParent /*=NULL*/)
	: CDialogEx(IDD_DIALOG_CONVENIENCE, pParent)
{

}

CConvenience::~CConvenience()
{
}

void CConvenience::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
}


BEGIN_MESSAGE_MAP(CConvenience, CDialogEx)
	ON_BN_CLICKED(IDC_BUTTON_MUTO, &CConvenience::OnClickedButtonMuto)
	ON_BN_CLICKED(IDC_BUTTON_SEOIL, &CConvenience::OnClickedButtonSeoil)
	ON_BN_CLICKED(IDC_BUTTON_SUNGWON, &CConvenience::OnClickedButtonSungwon)
	ON_BN_CLICKED(IDC_BUTTON_YOUNGJIN, &CConvenience::OnClickedButtonYoungjin)
END_MESSAGE_MAP()


// CConvenience message handlers


void CConvenience::OnClickedButtonMuto()
{
	// TODO: 여기에 컨트롤 알림 처리기 코드를 추가합니다.
	m_MutoDlg.DoModal();
}


void CConvenience::OnClickedButtonSeoil()
{
	// TODO: 여기에 컨트롤 알림 처리기 코드를 추가합니다.
	m_SeoilDlg.DoModal();
}


void CConvenience::OnClickedButtonSungwon()
{
	// TODO: 여기에 컨트롤 알림 처리기 코드를 추가합니다.
	m_SungwonDlg.DoModal();
}


void CConvenience::OnClickedButtonYoungjin()
{
	// TODO: 여기에 컨트롤 알림 처리기 코드를 추가합니다.
	m_YoungjinDlg.DoModal();
}
