#pragma once


// CNuri dialog

class CNuri : public CDialogEx
{
	DECLARE_DYNAMIC(CNuri)

public:
	CNuri(CWnd* pParent = NULL);   // standard constructor
	virtual ~CNuri();

// Dialog Data
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_DIALOG_SCHOOLINFO_NURI };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support

	DECLARE_MESSAGE_MAP()
};
