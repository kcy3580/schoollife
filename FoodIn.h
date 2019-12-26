#pragma once
#include "Tongnamu.h"
#include "Namumi.h"
#include "BobFull.h"
#include "Cher.h"

// CFoodIn dialog

class CFoodIn : public CDialogEx
{
	DECLARE_DYNAMIC(CFoodIn)

public:
	CFoodIn(CWnd* pParent = NULL);   // standard constructor

	CTongnamu m_TongnamuDlg;
	CNamumi m_NamumiDlg;
	CBobFull m_BobFullDlg;
	CCher m_CherDlg;

	virtual ~CFoodIn();

// Dialog Data
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_DIALOG_FOOD_FOODIN };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support

	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnClickedButtonNamumi();
	afx_msg void OnClickedButtonBobfull();
	afx_msg void OnClickedButtonTongnamu();
	afx_msg void OnClickedButtonCher();
};
