#pragma once


// CCher dialog

class CCher : public CDialogEx
{
	DECLARE_DYNAMIC(CCher)

public:
	CCher(CWnd* pParent = NULL);   // standard constructor
	virtual ~CCher();

// Dialog Data
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_DIALOG_FOOD_FOODIN_CHER };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support

	DECLARE_MESSAGE_MAP()
};
