#pragma once


// CJiduck dialog

class CJiduck : public CDialogEx
{
	DECLARE_DYNAMIC(CJiduck)

public:
	CJiduck(CWnd* pParent = NULL);   // standard constructor
	virtual ~CJiduck();

// Dialog Data
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_DIALOG_SCHOOLINFO_JIDUCK };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support

	DECLARE_MESSAGE_MAP()
};
