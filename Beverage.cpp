// Beverage.cpp : implementation file
//

#include "stdafx.h"
#include "SchoolLIfeProject.h"
#include "Beverage.h"
#include "afxdialogex.h"


// CBeverage dialog

IMPLEMENT_DYNAMIC(CBeverage, CDialogEx)

CBeverage::CBeverage(CWnd* pParent /*=NULL*/)
	: CDialogEx(IDD_DIALOG_FOOD_BEVERAGE, pParent)
{

}

CBeverage::~CBeverage()
{
}

void CBeverage::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
}


BEGIN_MESSAGE_MAP(CBeverage, CDialogEx)
	ON_BN_CLICKED(IDC_BUTTON_CAFEINOID, &CBeverage::OnClickedButtonCafeinoid)
	ON_BN_CLICKED(IDC_BUTTON_JUICEPOP, &CBeverage::OnClickedButtonJuicepop)
	ON_BN_CLICKED(IDC_BUTTON_JUICEY, &CBeverage::OnClickedButtonJuicey)
	ON_BN_CLICKED(IDC_BUTTON_MAMOTH, &CBeverage::OnClickedButtonMamoth)
END_MESSAGE_MAP()


// CBeverage message handlers


void CBeverage::OnClickedButtonCafeinoid()
{
	// TODO: ���⿡ ��Ʈ�� �˸� ó���� �ڵ带 �߰��մϴ�.
	m_CafeInoidDlg.DoModal();
}


void CBeverage::OnClickedButtonJuicepop()
{
	// TODO: ���⿡ ��Ʈ�� �˸� ó���� �ڵ带 �߰��մϴ�.
	m_JuicePopDlg.DoModal();
}


void CBeverage::OnClickedButtonJuicey()
{
	// TODO: ���⿡ ��Ʈ�� �˸� ó���� �ڵ带 �߰��մϴ�.
	m_JuiceyDlg.DoModal();
}


void CBeverage::OnClickedButtonMamoth()
{
	// TODO: ���⿡ ��Ʈ�� �˸� ó���� �ڵ带 �߰��մϴ�.
	m_MomothDlg.DoModal();
}
