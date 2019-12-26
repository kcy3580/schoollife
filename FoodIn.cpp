// FoodIn.cpp : implementation file
//

#include "stdafx.h"
#include "SchoolLIfeProject.h"
#include "FoodIn.h"
#include "afxdialogex.h"


// CFoodIn dialog

IMPLEMENT_DYNAMIC(CFoodIn, CDialogEx)

CFoodIn::CFoodIn(CWnd* pParent /*=NULL*/)
	: CDialogEx(IDD_DIALOG_FOOD_FOODIN, pParent)
{

}

CFoodIn::~CFoodIn()
{
}

void CFoodIn::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
}


BEGIN_MESSAGE_MAP(CFoodIn, CDialogEx)
	ON_BN_CLICKED(IDC_BUTTON_NAMUMI, &CFoodIn::OnClickedButtonNamumi)
	ON_BN_CLICKED(IDC_BUTTON_BOBFULL, &CFoodIn::OnClickedButtonBobfull)
	ON_BN_CLICKED(IDC_BUTTON_TONGNAMU, &CFoodIn::OnClickedButtonTongnamu)
	ON_BN_CLICKED(IDC_BUTTON_CHER, &CFoodIn::OnClickedButtonCher)
END_MESSAGE_MAP()


// CFoodIn message handlers


void CFoodIn::OnClickedButtonNamumi()
{
	// TODO: 여기에 컨트롤 알림 처리기 코드를 추가합니다.
	m_NamumiDlg.DoModal();
	
}


void CFoodIn::OnClickedButtonBobfull()
{
	// TODO: 여기에 컨트롤 알림 처리기 코드를 추가합니다.
	m_BobFullDlg.DoModal();
}


void CFoodIn::OnClickedButtonTongnamu()
{
	// TODO: 여기에 컨트롤 알림 처리기 코드를 추가합니다.
	m_TongnamuDlg.DoModal();
}


void CFoodIn::OnClickedButtonCher()
{
	// TODO: 여기에 컨트롤 알림 처리기 코드를 추가합니다.
	m_CherDlg.DoModal();
}
