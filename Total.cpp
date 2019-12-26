// Total.cpp : implementation file
//

#include "stdafx.h"
#include "SchoolLIfeProject.h"
#include "Total.h"
#include "afxdialogex.h"


// CTotal dialog

IMPLEMENT_DYNAMIC(CTotal, CDialogEx)

CTotal::CTotal(CWnd* pParent /*=NULL*/)
	: CDialogEx(IDD_DIALOG_CLASS_TOTAL, pParent)
	, m_strAddressOut(_T(""))
	, m_strAverageOut(_T(""))
	, m_strBirthOut(_T(""))
	, m_strF1O(_T(""))
	, m_strF2O(_T(""))
	, m_strF3O(_T(""))
	, m_strF4O(_T(""))
	, m_strF5O(_T(""))
	, m_strF6O(_T(""))
	, m_strF7O(_T(""))
	, m_strGradeOut(_T(""))
	, m_strM1O(_T(""))
	, m_strM2O(_T(""))
	, m_strM3O(_T(""))
	, m_strM4O(_T(""))
	, m_strM5O(_T(""))
	, m_strM6O(_T(""))
	, m_strM7O(_T(""))
	, m_strNameOut(_T(""))
	, m_strSchNumOut(_T(""))
	, m_strScoreOut(_T(""))
	, m_strSubjectOut(_T(""))
	, m_strT1O(_T(""))
	, m_strT2O(_T(""))
	, m_strT3O(_T(""))
	, m_strT4O(_T(""))
	, m_strT5O(_T(""))
	, m_strT7O(_T(""))
	, m_strT6O(_T(""))
	, m_strTh1O(_T(""))
	, m_strTh2O(_T(""))
	, m_strTh3O(_T(""))
	, m_strTh4O(_T(""))
	, m_strTh5O(_T(""))
	, m_strTh6O(_T(""))
	, m_strTh7O(_T(""))
	, m_strTotalOut(_T(""))
	, m_strW1O(_T(""))
	, m_strW2O(_T(""))
	, m_strW3O(_T(""))
	, m_strW4O(_T(""))
	, m_strW5O(_T(""))
	, m_strW6O(_T(""))
	, m_strW7O(_T(""))
	, m_strSubjectOutput(_T(""))
	, m_nOption(0)
{

}

CTotal::~CTotal()
{
}

void CTotal::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
	DDX_Text(pDX, IDC_EDIT_ADDRESS_OUT, m_strAddressOut);
	DDX_Text(pDX, IDC_EDIT_AVERAGE_OUT, m_strAverageOut);
	DDX_Text(pDX, IDC_EDIT_BIRTH_OUT, m_strBirthOut);
	DDX_Text(pDX, IDC_EDIT_F1_OUT, m_strF1O);
	DDX_Text(pDX, IDC_EDIT_F2_OUT, m_strF2O);
	DDX_Text(pDX, IDC_EDIT_F3_OUT, m_strF3O);
	DDX_Text(pDX, IDC_EDIT_F4_OUT, m_strF4O);
	DDX_Text(pDX, IDC_EDIT_F5_OUT, m_strF5O);
	DDX_Text(pDX, IDC_EDIT_F6_OUT, m_strF6O);
	DDX_Text(pDX, IDC_EDIT_F7_OUT, m_strF7O);
	DDX_Text(pDX, IDC_EDIT_GRADE_OUT, m_strGradeOut);
	DDX_Text(pDX, IDC_EDIT_M1_OUT, m_strM1O);
	DDX_Text(pDX, IDC_EDIT_M2_OUT, m_strM2O);
	DDX_Text(pDX, IDC_EDIT_M3_OUT, m_strM3O);
	DDX_Text(pDX, IDC_EDIT_M4_OUT, m_strM4O);
	DDX_Text(pDX, IDC_EDIT_M5_OUT, m_strM5O);
	DDX_Text(pDX, IDC_EDIT_M6_OUT, m_strM6O);
	DDX_Text(pDX, IDC_EDIT_M7_OUT, m_strM7O);
	DDX_Text(pDX, IDC_EDIT_NAME_OUT, m_strNameOut);
	DDX_Text(pDX, IDC_EDIT_SCHNUM_OUT, m_strSchNumOut);
	DDX_Text(pDX, IDC_EDIT_SCORE_OUT, m_strScoreOut);
	DDX_Text(pDX, IDC_EDIT_SUBJECT_OUT, m_strSubjectOut);
	DDX_Text(pDX, IDC_EDIT_T1_OUT, m_strT1O);
	DDX_Text(pDX, IDC_EDIT_T2_OUT, m_strT2O);
	DDX_Text(pDX, IDC_EDIT_T3_OUT, m_strT3O);
	DDX_Text(pDX, IDC_EDIT_T4_OUT, m_strT4O);
	DDX_Text(pDX, IDC_EDIT_T5_OUT, m_strT5O);
	DDX_Text(pDX, IDC_EDIT_T7_OUT, m_strT7O);
	DDX_Text(pDX, IDC_EDIT_T6_OUT, m_strT6O);
	DDX_Text(pDX, IDC_EDIT_TH1_OUT, m_strTh1O);
	DDX_Text(pDX, IDC_EDIT_TH2_OUT, m_strTh2O);
	DDX_Text(pDX, IDC_EDIT_TH3_OUT, m_strTh3O);
	DDX_Text(pDX, IDC_EDIT_TH4_OUT, m_strTh4O);
	DDX_Text(pDX, IDC_EDIT_TH5_OUT, m_strTh5O);
	DDX_Text(pDX, IDC_EDIT_TH6_OUT, m_strTh6O);
	DDX_Text(pDX, IDC_EDIT_TH7_OUT, m_strTh7O);
	DDX_Text(pDX, IDC_EDIT_TOTAL_OUT, m_strTotalOut);
	DDX_Text(pDX, IDC_EDIT_W1_OUT, m_strW1O);
	DDX_Text(pDX, IDC_EDIT_W2_OUT, m_strW2O);
	DDX_Text(pDX, IDC_EDIT_W3_OUT, m_strW3O);
	DDX_Text(pDX, IDC_EDIT_W4_OUT, m_strW4O);
	DDX_Text(pDX, IDC_EDIT_W5_OUT, m_strW5O);
	DDX_Text(pDX, IDC_EDIT_W6_OUT, m_strW6O);
	DDX_Text(pDX, IDC_EDIT_W7_OUT, m_strW7O);
	DDX_Text(pDX, IDC_EDIT_SUBJECT_OUTPUT, m_strSubjectOutput);
}


BEGIN_MESSAGE_MAP(CTotal, CDialogEx)
END_MESSAGE_MAP()


// CTotal message handlers
