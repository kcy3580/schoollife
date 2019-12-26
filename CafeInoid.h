#pragma once


// CCafeInoid dialog

class CCafeInoid : public CDialogEx
{
	DECLARE_DYNAMIC(CCafeInoid)

public:
	CCafeInoid(CWnd* pParent = NULL);   // standard constructor
	virtual ~CCafeInoid();

// Dialog Data
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_DIALOG_FOOD_BEVERAGE_CAFEINOID };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support

	DECLARE_MESSAGE_MAP()
};
