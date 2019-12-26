#pragma once


// CSungwon dialog

class CSungwon : public CDialogEx
{
	DECLARE_DYNAMIC(CSungwon)

public:
	CSungwon(CWnd* pParent = NULL);   // standard constructor
	virtual ~CSungwon();

// Dialog Data
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_DIALOG_CONVENIENCE_SUNGWON };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support

	DECLARE_MESSAGE_MAP()
};
