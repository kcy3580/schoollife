#pragma once


// CChoil dialog

class CChoil : public CDialogEx
{
	DECLARE_DYNAMIC(CChoil)

public:
	CChoil(CWnd* pParent = NULL);   // standard constructor
	virtual ~CChoil();

// Dialog Data
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_DIALOG_SCHOOLINFO_CHOIL };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support

	DECLARE_MESSAGE_MAP()
};
