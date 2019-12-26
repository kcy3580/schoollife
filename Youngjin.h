#pragma once


// CYoungjin dialog

class CYoungjin : public CDialogEx
{
	DECLARE_DYNAMIC(CYoungjin)

public:
	CYoungjin(CWnd* pParent = NULL);   // standard constructor
	virtual ~CYoungjin();

// Dialog Data
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_DIALOG_CONVENIENCE_YOUNGJIN };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support

	DECLARE_MESSAGE_MAP()
};
