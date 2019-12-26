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
	// TODO: ���⿡ ��Ʈ�� �˸� ó���� �ڵ带 �߰��մϴ�.
	m_NamumiDlg.DoModal();
	
}


void CFoodIn::OnClickedButtonBobfull()
{
	// TODO: ���⿡ ��Ʈ�� �˸� ó���� �ڵ带 �߰��մϴ�.
	m_BobFullDlg.DoModal();
}


void CFoodIn::OnClickedButtonTongnamu()
{
	// TODO: ���⿡ ��Ʈ�� �˸� ó���� �ڵ带 �߰��մϴ�.
	m_TongnamuDlg.DoModal();
}


void CFoodIn::OnClickedButtonCher()
{
	// TODO: ���⿡ ��Ʈ�� �˸� ó���� �ڵ带 �߰��մϴ�.
	m_CherDlg.DoModal();
}
