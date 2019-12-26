#pragma once
#include "Bayang.h"
#include "Choil.h"
#include "Heung.h"
#include "Hochun.h"
#include "Jiduck.h"
#include "K.h"
#include "Library.h"
#include "Nuri.h"
#include "Sejong.h"
#include "Seoil2.h"
#include "J.h"

// CSchoolInfo dialog

class CSchoolInfo : public CDialogEx
{
	DECLARE_DYNAMIC(CSchoolInfo)

public:
	CSchoolInfo(CWnd* pParent = NULL);   // standard constructor

	CBayang m_BayangDlg;
	CChoil m_ChoilDlg;
	CHeung m_HeungDlg;
	CHochun m_HochunDlg;
	CJiduck m_JiduckDlg;
	CK m_KDlg;
	CLibrary m_LibraryDlg;
	CNuri m_NuriDlg;
	CSejong m_SejongDlg;
	CSeoil2 m_Seoil2Dlg;
	CJ m_JDlg;

	virtual ~CSchoolInfo();

// Dialog Data
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_DIALOG_SCHOOLINFO };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support

	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnClickedButtonBaeyang();
	afx_msg void OnClickedButtonChoil();
	afx_msg void OnClickedButtonHeung();
	afx_msg void OnClickedButtonHochun();
	afx_msg void OnClickedButtonJiduck();
	afx_msg void OnClickedButtonK();
	afx_msg void OnClickedButtonLibrary();
	afx_msg void OnClickedButtonNuri();
	afx_msg void OnClickedButtonSeoil();
	afx_msg void OnClickedButtonSejong();
	afx_msg void OnClickedButtonJ();
};
