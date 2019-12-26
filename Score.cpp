// Score.cpp : implementation file
//

#include "stdafx.h"
#include "SchoolLIfeProject.h"
#include "Score.h"
#include "afxdialogex.h"


// CScore dialog

IMPLEMENT_DYNAMIC(CScore, CDialogEx)

CScore::CScore(CWnd* pParent /*=NULL*/)
	: CDialogEx(IDD_DIALOG_CLASS_SCORE_INPUT, pParent)
	, m_nOption(0)
	, m_nSub1(_T(""))
	, m_nSub2(_T(""))
	, m_nSub3(_T(""))
	, m_nSub4(_T(""))
	, m_nSub5(_T(""))
	, m_nSub6(_T(""))
	, m_nSub7(_T(""))
	, m_nScoreTotal(_T(""))
	, m_nScoreGrade(_T(""))
	, m_nScoreAverage(_T(""))
{

}

CScore::~CScore()
{
}

void CScore::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
	//  DDX_Text(pDX, IDC_EDIT_SUB1, m_strSub1);
	//  DDX_Text(pDX, IDC_EDIT_SUB2, m_strSub2);
	//  DDX_Text(pDX, IDC_EDIT_SUB3, m_strSub3);
	//  DDX_Text(pDX, IDC_EDIT_SUB4, m_strSub4);
	//  DDX_Text(pDX, IDC_EDIT_SUB5, m_strSub5);
	//  DDX_Text(pDX, IDC_EDIT_SUB6, m_strSub6);
	//  DDX_Text(pDX, IDC_EDIT_SUB7, m_strSub7);
	DDX_Text(pDX, IDC_EDIT_SUB1, m_nSub1);
	DDX_Text(pDX, IDC_EDIT_SUB2, m_nSub2);
	DDX_Text(pDX, IDC_EDIT_SUB3, m_nSub3);
	DDX_Text(pDX, IDC_EDIT_SUB4, m_nSub4);
	DDX_Text(pDX, IDC_EDIT_SUB5, m_nSub5);
	DDX_Text(pDX, IDC_EDIT_SUB6, m_nSub6);
	DDX_Text(pDX, IDC_EDIT_SUB7, m_nSub7);
	DDX_Text(pDX, IDC_EDIT_SCORE_TOTAL, m_nScoreTotal);
	DDX_Text(pDX, IDC_EDIT_SCORE_GRADE, m_nScoreGrade);
	DDX_Text(pDX, IDC_EDIT_SCORE_AVERAGE, m_nScoreAverage);
}


BEGIN_MESSAGE_MAP(CScore, CDialogEx)
	ON_BN_CLICKED(IDC_BUTTON_RESULT, &CScore::OnClickedButtonResult)
	ON_BN_CLICKED(IDC_BUTTON_CLEAR2, &CScore::OnClickedButtonClear2)
END_MESSAGE_MAP()


// CScore message handlers

void CScore::OnClickedButtonResult()
{
	// TODO: 여기에 컨트롤 알림 처리기 코드를 추가합니다.
	char temp[20];
	double tmpTotal;
	double tmpAverage;

	m_nOption = 1;

	UpdateData(TRUE);

	switch (m_nOption)
	{
	case 1:
		tmpTotal = atof(m_nSub1) + atof(m_nSub2) + atof(m_nSub3) + atof(m_nSub4) + atof(m_nSub5) + atof(m_nSub6) + atof(m_nSub7);
		break;
	default:
		tmpTotal = 0.00;
		break;
	}

	sprintf_s(temp, "%2.f", tmpTotal);
	m_nScoreTotal = temp;

	switch (m_nOption)
	{
	case 1:
		tmpAverage = (atof(m_nSub1) + atof(m_nSub2) + atof(m_nSub3) + atof(m_nSub4) + atof(m_nSub5) + atof(m_nSub6) + atof(m_nSub7))/7;
		break;
	default:
		tmpTotal = 0.00;
		break;
	}

	sprintf_s(temp, "%2.f", tmpAverage);
	m_nScoreAverage = temp;

	if (tmpAverage >= 90)
	{
		m_nScoreGrade = "A";
	}

	else if (tmpAverage >= 80)
	{
		m_nScoreGrade = "B";
	}

	else if (tmpAverage >= 70)
	{
		m_nScoreGrade = "C";
	}

	else if (tmpAverage >= 60)
	{
		m_nScoreGrade = "D";
	}

	else
	{
		m_nScoreGrade = "F";
	}

	UpdateData(FALSE);
}


void CScore::OnClickedButtonClear2()
{
	// TODO: 여기에 컨트롤 알림 처리기 코드를 추가합니다.
	UpdateData(TRUE);
	m_nSub1 = _T("");
	m_nSub2 = _T("");
	m_nSub3 = _T("");
	m_nSub4 = _T("");
	m_nSub5 = _T("");
	m_nSub6 = _T("");
	m_nSub7 = _T("");
	m_nScoreTotal = _T("");
	m_nScoreAverage = _T("");
	m_nScoreGrade = _T("");
	UpdateData(FALSE);
}
