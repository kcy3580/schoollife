#pragma once


// CMomoth dialog

class CMomoth : public CDialogEx
{
	DECLARE_DYNAMIC(CMomoth)

public:
	CMomoth(CWnd* pParent = NULL);   // standard constructor
	virtual ~CMomoth();

// Dialog Data
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_DIALOG_FOOD_BEVERAGE_MOMOTH };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support

	DECLARE_MESSAGE_MAP()
};
