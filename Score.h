#pragma once


// CScore dialog

class CScore : public CDialogEx
{
	DECLARE_DYNAMIC(CScore)

public:
	CScore(CWnd* pParent = NULL);   // standard constructor
	virtual ~CScore();

// Dialog Data
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_DIALOG_CLASS_SCORE_INPUT };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support

	DECLARE_MESSAGE_MAP()
public:
//	CString m_strSub1;
//	CString m_strSub2;
//	CString m_strSub3;
//	CString m_strSub4;
//	CString m_strSub5;
//	CString m_strSub6;
//	CString m_strSub7;
//	int m_nOption;
	CString m_nSub1;
	CString m_nSub2;
	CString m_nSub3;
	CString m_nSub4;
	CString m_nSub5;
	CString m_nSub6;
	CString m_nSub7;
//	int m_nOption;
//	int m_ntmpTotal;
		int m_nOption;
//	int m_nResulTotal;
//	int m_nResultAverage;
//	CString m_nResultGrade;
		afx_msg void OnClickedButtonResult();
		CString m_nScoreTotal;
		CString m_nScoreGrade;
		CString m_nScoreAverage;
		afx_msg void OnClickedButtonClear2();
};
