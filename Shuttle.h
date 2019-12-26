#pragma once


// CShuttle dialog

class CShuttle : public CDialogEx
{
	DECLARE_DYNAMIC(CShuttle)

public:
	CShuttle(CWnd* pParent = NULL);   // standard constructor
	virtual ~CShuttle();

// Dialog Data
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_DIALOG_SHUTTLE };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support

	DECLARE_MESSAGE_MAP()
};
