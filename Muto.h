#pragma once


// CMuto dialog

class CMuto : public CDialogEx
{
	DECLARE_DYNAMIC(CMuto)

public:
	CMuto(CWnd* pParent = NULL);   // standard constructor
	virtual ~CMuto();

// Dialog Data
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_DIALOG_CONVENIENCE_MUTOPC };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support

	DECLARE_MESSAGE_MAP()
};
