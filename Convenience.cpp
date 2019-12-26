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
	// TODO: ���⿡ ��Ʈ�� �˸� ó���� �ڵ带 �߰��մϴ�.
	m_MutoDlg.DoModal();
}


void CConvenience::OnClickedButtonSeoil()
{
	// TODO: ���⿡ ��Ʈ�� �˸� ó���� �ڵ带 �߰��մϴ�.
	m_SeoilDlg.DoModal();
}


void CConvenience::OnClickedButtonSungwon()
{
	// TODO: ���⿡ ��Ʈ�� �˸� ó���� �ڵ带 �߰��մϴ�.
	m_SungwonDlg.DoModal();
}


void CConvenience::OnClickedButtonYoungjin()
{
	// TODO: ���⿡ ��Ʈ�� �˸� ó���� �ڵ带 �߰��մϴ�.
	m_YoungjinDlg.DoModal();
}
