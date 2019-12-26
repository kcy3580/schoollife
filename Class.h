#pragma once

#include "Info.h"
#include "Score.h"
#include "TimeTable.h"
#include "Total.h"
// CClass dialog

class CClass : public CDialogEx
{
	DECLARE_DYNAMIC(CClass)

public:
	CClass(CWnd* pParent = NULL);   // standard constructor
	virtual ~CClass();


	CInfo m_InfoDlg;
	CScore m_ScoreDlg;
	CTimeTable m_TimeTableDlg;
	CTotal m_TotalDlg;

// Dialog Data
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_DIALOG_CLASS };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support

	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnClickedButtonInfo();
	afx_msg void OnClickedButtonTest();
	afx_msg void OnClickedButtonTimetable();
	afx_msg void OnClickedButtonTotal();
};
