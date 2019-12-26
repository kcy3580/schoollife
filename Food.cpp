// Food.cpp : implementation file
//

#include "stdafx.h"
#include "SchoolLIfeProject.h"
#include "Food.h"
#include "afxdialogex.h"


// CFood dialog

IMPLEMENT_DYNAMIC(CFood, CDialogEx)

CFood::CFood(CWnd* pParent /*=NULL*/)
	: CDialogEx(IDD_DIALOG_FOOD, pParent)
{

}

CFood::~CFood()
{
}

void CFood::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
}


BEGIN_MESSAGE_MAP(CFood, CDialogEx)
	ON_BN_CLICKED(IDC_BUTTON_BEVERAGE, &CFood::OnClickedButtonBeverage)
	ON_BN_CLICKED(IDC_BUTTON_FOOD, &CFood::OnClickedButtonFood)
END_MESSAGE_MAP()


// CFood message handlers


void CFood::OnClickedButtonBeverage()
{
	// TODO: 여기에 컨트롤 알림 처리기 코드를 추가합니다.
	m_BeverageDlg.DoModal();
}


void CFood::OnClickedButtonFood()
{
	// TODO: 여기에 컨트롤 알림 처리기 코드를 추가합니다.
	m_FoodInDlg.DoModal();
}
