#pragma once
#include "Muto.h"
#include "Sungwon.h"
#include "Youngjin.h"
#include "Seoil.h"

// CConvenience dialog

class CConvenience : public CDialogEx
{
	DECLARE_DYNAMIC(CConvenience)

public:
	CConvenience(CWnd* pParent = NULL);   // standard constructor

	CMuto m_MutoDlg;
	CSungwon m_SungwonDlg;
	CYoungjin m_YoungjinDlg;
	CSeoil m_SeoilDlg;

	virtual ~CConvenience();

// Dialog Data
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_DIALOG_CONVENIENCE };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support

	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnClickedButtonMuto();
	afx_msg void OnClickedButtonSeoil();
	afx_msg void OnClickedButtonSungwon();
	afx_msg void OnClickedButtonYoungjin();
};
