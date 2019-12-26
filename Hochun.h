#pragma once


// CHochun dialog

class CHochun : public CDialogEx
{
	DECLARE_DYNAMIC(CHochun)

public:
	CHochun(CWnd* pParent = NULL);   // standard constructor
	virtual ~CHochun();

// Dialog Data
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_DIALOG_SCHOOLINFO_HOCHUN };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support

	DECLARE_MESSAGE_MAP()
};
