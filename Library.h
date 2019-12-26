#pragma once


// CLibrary dialog

class CLibrary : public CDialogEx
{
	DECLARE_DYNAMIC(CLibrary)

public:
	CLibrary(CWnd* pParent = NULL);   // standard constructor
	virtual ~CLibrary();

// Dialog Data
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_DIALOG_SCHOOLINFO_LIBRARY };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support

	DECLARE_MESSAGE_MAP()
};
