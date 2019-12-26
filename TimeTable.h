#pragma once


// CTimeTable dialog

class CTimeTable : public CDialogEx
{
	DECLARE_DYNAMIC(CTimeTable)

public:
	CTimeTable(CWnd* pParent = NULL);   // standard constructor
	virtual ~CTimeTable();

// Dialog Data
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_DIALOG_CLASS_TIMETABLEINPUT };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support

	DECLARE_MESSAGE_MAP()
public:
	CString m_strF1;
	CString m_strF2;
	CString m_strF4;
	CString m_strF3;
	CString m_strF5;
	CString m_strF6;
	CString m_strF7;
	CString m_strM1;
	CString m_strM2;
	CString m_strM3;
	CString m_strM4;
	CString m_strM5;
	CString m_strM6;
	CString m_strM7;
	CString m_strT1;
	CString m_strT2;
	CString m_strT3;
	CString m_strT4;
	CString m_strT5;
	CString m_strT6;
	CString m_strT7;
	CString m_strTh1;
	CString m_strTh2;
	CString m_strTh3;
	CString m_strTh4;
	CString m_strTh5;
	CString m_strTh6;
	CString m_strTh7;
	CString m_strW1;
	CString m_strW2;
	CString m_strW3;
	CString m_strW4;
	CString m_strW5;
	CString m_strW6;
	CString m_strW7;
	CString m_strSubjectout;
	afx_msg void OnClickedButtonClear3();
};
