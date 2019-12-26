#pragma once


// CNamumi dialog

class CNamumi : public CDialogEx
{
	DECLARE_DYNAMIC(CNamumi)

public:
	CNamumi(CWnd* pParent = NULL);   // standard constructor
	virtual ~CNamumi();

// Dialog Data
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_DIALOG_FOOD_FOODIN_NAMUMI };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support

	DECLARE_MESSAGE_MAP()
};
