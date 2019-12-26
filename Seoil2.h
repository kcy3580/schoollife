#pragma once


// CSeoil2 dialog

class CSeoil2 : public CDialogEx
{
	DECLARE_DYNAMIC(CSeoil2)

public:
	CSeoil2(CWnd* pParent = NULL);   // standard constructor
	virtual ~CSeoil2();

// Dialog Data
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_DIALOG_SCHOOLINFO_SEOIL };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support

	DECLARE_MESSAGE_MAP()
};
