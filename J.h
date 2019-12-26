#pragma once


// CJ dialog

class CJ : public CDialogEx
{
	DECLARE_DYNAMIC(CJ)

public:
	CJ(CWnd* pParent = NULL);   // standard constructor
	virtual ~CJ();

// Dialog Data
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_DIALOG_SCHOOLINFO_J };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support

	DECLARE_MESSAGE_MAP()
};
