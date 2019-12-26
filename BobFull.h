#pragma once


// CBobFull dialog

class CBobFull : public CDialogEx
{
	DECLARE_DYNAMIC(CBobFull)

public:
	CBobFull(CWnd* pParent = NULL);   // standard constructor
	virtual ~CBobFull();

// Dialog Data
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_DIALOG_FOOD_FOODIN_BOBFULL };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support

	DECLARE_MESSAGE_MAP()
};
