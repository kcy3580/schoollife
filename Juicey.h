#pragma once


// CJuicey dialog

class CJuicey : public CDialogEx
{
	DECLARE_DYNAMIC(CJuicey)

public:
	CJuicey(CWnd* pParent = NULL);   // standard constructor
	virtual ~CJuicey();

// Dialog Data
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_DIALOG_FOOD_BEVERAGE_JUICEY };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support

	DECLARE_MESSAGE_MAP()
};
