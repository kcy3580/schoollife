#pragma once
#include "FoodIn.h"
#include "Beverage.h"


// CFood dialog

class CFood : public CDialogEx
{
	DECLARE_DYNAMIC(CFood)

public:
	CFood(CWnd* pParent = NULL);   // standard constructor

	CFoodIn m_FoodInDlg;
	CBeverage m_BeverageDlg;

	virtual ~CFood();

// Dialog Data
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_DIALOG_FOOD };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support

	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnClickedButtonBeverage();
	afx_msg void OnClickedButtonFood();
};
