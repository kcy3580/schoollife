#pragma once


// CJuicePop dialog

class CJuicePop : public CDialogEx
{
	DECLARE_DYNAMIC(CJuicePop)

public:
	CJuicePop(CWnd* pParent = NULL);   // standard constructor
	virtual ~CJuicePop();

// Dialog Data
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_DIALOG_FOOD_BEVERAGE_JUICEPOP };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support

	DECLARE_MESSAGE_MAP()
};
