#pragma once


// CInfo dialog

class CInfo : public CDialogEx
{
	DECLARE_DYNAMIC(CInfo)

public:
	CInfo(CWnd* pParent = NULL);   // standard constructor
	virtual ~CInfo();

// Dialog Data
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_DIALOG_CLASS_INFOINPUT };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support

	DECLARE_MESSAGE_MAP()
public:
	CString m_strAddress;
	CString m_strBirth;
	CString m_strGrade;
	CString m_strName;
	CString m_strSchNum;
	CString m_strSubject;
	afx_msg void OnClickedButtonClear();
//	afx_msg void OnClickedButtonExit();
};
