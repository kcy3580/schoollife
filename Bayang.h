#pragma once


// CBayang dialog

class CBayang : public CDialogEx
{
	DECLARE_DYNAMIC(CBayang)

public:
	CBayang(CWnd* pParent = NULL);   // standard constructor
	virtual ~CBayang();

// Dialog Data
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_DIALOG_SCHOOLINFO_BAEYANG };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support

	DECLARE_MESSAGE_MAP()
};
