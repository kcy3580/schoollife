#pragma once
#include "Juicey.h"
#include "JuicePop.h"
#include "Momoth.h"
#include "CafeInoid.h"

// CBeverage dialog

class CBeverage : public CDialogEx
{
	DECLARE_DYNAMIC(CBeverage)

public:
	CBeverage(CWnd* pParent = NULL);   // standard constructor

	CJuicey m_JuiceyDlg;
	CJuicePop m_JuicePopDlg;
	CMomoth m_MomothDlg;
	CCafeInoid m_CafeInoidDlg;

	virtual ~CBeverage();

// Dialog Data
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_DIALOG_FOOD_BEVERAGE };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support

	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnClickedButtonCafeinoid();
	afx_msg void OnClickedButtonJuicepop();
	afx_msg void OnClickedButtonJuicey();
	afx_msg void OnClickedButtonMamoth();
};
