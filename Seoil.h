#pragma once


// CSeoil dialog

class CSeoil : public CDialogEx
{
	DECLARE_DYNAMIC(CSeoil)

public:
	CSeoil(CWnd* pParent = NULL);   // standard constructor
	virtual ~CSeoil();

// Dialog Data
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_DIALOG_CONVENIENCE_SEOIL };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support

	DECLARE_MESSAGE_MAP()
};
