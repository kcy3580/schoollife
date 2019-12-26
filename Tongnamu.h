#pragma once


// CTongnamu dialog

class CTongnamu : public CDialogEx
{
	DECLARE_DYNAMIC(CTongnamu)

public:
	CTongnamu(CWnd* pParent = NULL);   // standard constructor
	virtual ~CTongnamu();

// Dialog Data
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_DIALOG_FOOD_FOODIN_TONGNAMU };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support

	DECLARE_MESSAGE_MAP()
};
