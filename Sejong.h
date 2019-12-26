#pragma once


// CSejong dialog

class CSejong : public CDialogEx
{
	DECLARE_DYNAMIC(CSejong)

public:
	CSejong(CWnd* pParent = NULL);   // standard constructor
	virtual ~CSejong();

// Dialog Data
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_DIALOG_SCHOOLINFO_SEJONG };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support

	DECLARE_MESSAGE_MAP()
};
