#pragma once


// CTotal dialog

class CTotal : public CDialogEx
{
	DECLARE_DYNAMIC(CTotal)

public:
	CTotal(CWnd* pParent = NULL);   // standard constructor
	virtual ~CTotal();

// Dialog Data
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_DIALOG_CLASS_TOTAL };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support

	DECLARE_MESSAGE_MAP()
public:
	CString m_strAddressOut;
	CString m_strAverageOut;
	CString m_strBirthOut;
	CString m_strF1O;
	CString m_strF2O;
	CString m_strF3O;
	CString m_strF4O;
	CString m_strF5O;
	CString m_strF6O;
	CString m_strF7O;
	CString m_strGradeOut;
	CString m_strM1O;
	CString m_strM2O;
	CString m_strM3O;
	CString m_strM4O;
	CString m_strM5O;
	CString m_strM6O;
	CString m_strM7O;
	CString m_strNameOut;
	CString m_strSchNumOut;
	CString m_strScoreOut;
	CString m_strSubjectOut;
	CString m_strT1O;
	CString m_strT2O;
	CString m_strT3O;
	CString m_strT4O;
	CString m_strT5O;
	CString m_strT7O;
	CString m_strT6O;
	CString m_strTh1O;
	CString m_strTh2O;
	CString m_strTh3O;
	CString m_strTh4O;
	CString m_strTh5O;
	CString m_strTh6O;
	CString m_strTh7O;
	CString m_strTotalOut;
	CString m_strW1O;
	CString m_strW2O;
	CString m_strW3O;
	CString m_strW4O;
	CString m_strW5O;
	CString m_strW6O;
	CString m_strW7O;
	CString m_strSubjectOutput;
	int m_nOption;
};
