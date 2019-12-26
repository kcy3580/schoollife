#pragma once


// CHeung dialog

class CHeung : public CDialogEx
{
	DECLARE_DYNAMIC(CHeung)

public:
	CHeung(CWnd* pParent = NULL);   // standard constructor
	virtual ~CHeung();

// Dialog Data
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_DIALOG_SCHOOLINFO_HEUNG };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support

	DECLARE_MESSAGE_MAP()
};
