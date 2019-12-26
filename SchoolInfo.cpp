// SchoolInfo.cpp : implementation file
//

#include "stdafx.h"
#include "SchoolLIfeProject.h"
#include "SchoolInfo.h"
#include "afxdialogex.h"


// CSchoolInfo dialog

IMPLEMENT_DYNAMIC(CSchoolInfo, CDialogEx)

CSchoolInfo::CSchoolInfo(CWnd* pParent /*=NULL*/)
	: CDialogEx(IDD_DIALOG_SCHOOLINFO, pParent)
{

}

CSchoolInfo::~CSchoolInfo()
{
}

void CSchoolInfo::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
}


BEGIN_MESSAGE_MAP(CSchoolInfo, CDialogEx)
	ON_BN_CLICKED(IDC_BUTTON_BAEYANG, &CSchoolInfo::OnClickedButtonBaeyang)
	ON_BN_CLICKED(IDC_BUTTON_CHOIL, &CSchoolInfo::OnClickedButtonChoil)
	ON_BN_CLICKED(IDC_BUTTON_HEUNG, &CSchoolInfo::OnClickedButtonHeung)
	ON_BN_CLICKED(IDC_BUTTON_HOCHUN, &CSchoolInfo::OnClickedButtonHochun)
	ON_BN_CLICKED(IDC_BUTTON_JIDUCK, &CSchoolInfo::OnClickedButtonJiduck)
	ON_BN_CLICKED(IDC_BUTTON_K, &CSchoolInfo::OnClickedButtonK)
	ON_BN_CLICKED(IDC_BUTTON_LIBRARY, &CSchoolInfo::OnClickedButtonLibrary)
	ON_BN_CLICKED(IDC_BUTTON_NURI, &CSchoolInfo::OnClickedButtonNuri)
	ON_BN_CLICKED(IDC_BUTTON_SEOIL, &CSchoolInfo::OnClickedButtonSeoil)
	ON_BN_CLICKED(IDC_BUTTON_SEJONG, &CSchoolInfo::OnClickedButtonSejong)
	ON_BN_CLICKED(IDC_BUTTON_J, &CSchoolInfo::OnClickedButtonJ)
END_MESSAGE_MAP()


// CSchoolInfo message handlers


void CSchoolInfo::OnClickedButtonBaeyang()
{
	// TODO: 여기에 컨트롤 알림 처리기 코드를 추가합니다.
	m_BayangDlg.DoModal();
}


void CSchoolInfo::OnClickedButtonChoil()
{
	// TODO: 여기에 컨트롤 알림 처리기 코드를 추가합니다.
	m_ChoilDlg.DoModal();
}


void CSchoolInfo::OnClickedButtonHeung()
{
	// TODO: 여기에 컨트롤 알림 처리기 코드를 추가합니다.
	m_HeungDlg.DoModal();
}


void CSchoolInfo::OnClickedButtonHochun()
{
	// TODO: 여기에 컨트롤 알림 처리기 코드를 추가합니다.
	m_HochunDlg.DoModal();
}


void CSchoolInfo::OnClickedButtonJiduck()
{
	// TODO: 여기에 컨트롤 알림 처리기 코드를 추가합니다.
	m_JiduckDlg.DoModal();
}


void CSchoolInfo::OnClickedButtonK()
{
	// TODO: 여기에 컨트롤 알림 처리기 코드를 추가합니다.
	m_KDlg.DoModal();
}


void CSchoolInfo::OnClickedButtonLibrary()
{
	// TODO: 여기에 컨트롤 알림 처리기 코드를 추가합니다.
	m_LibraryDlg.DoModal();
}


void CSchoolInfo::OnClickedButtonNuri()
{
	// TODO: 여기에 컨트롤 알림 처리기 코드를 추가합니다.
	m_NuriDlg.DoModal();
}


void CSchoolInfo::OnClickedButtonSeoil()
{
	// TODO: 여기에 컨트롤 알림 처리기 코드를 추가합니다.
	m_Seoil2Dlg.DoModal();
}


void CSchoolInfo::OnClickedButtonSejong()
{
	// TODO: 여기에 컨트롤 알림 처리기 코드를 추가합니다.
	m_SejongDlg.DoModal();
}


void CSchoolInfo::OnClickedButtonJ()
{
	// TODO: 여기에 컨트롤 알림 처리기 코드를 추가합니다.
	m_JDlg.DoModal();
}
