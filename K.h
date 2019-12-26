#pragma once


// CK dialog

class CK : public CDialogEx
{
	DECLARE_DYNAMIC(CK)

public:
	CK(CWnd* pParent = NULL);   // standard constructor
	virtual ~CK();

// Dialog Data
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_DIALOG_SCHOOLINFO_K };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support

	DECLARE_MESSAGE_MAP()
};
