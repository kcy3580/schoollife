// Class.cpp : implementation file
//

#include "stdafx.h"
#include "SchoolLIfeProject.h"
#include "Class.h"
#include "afxdialogex.h"


// CClass dialog

IMPLEMENT_DYNAMIC(CClass, CDialogEx)

CClass::CClass(CWnd* pParent /*=NULL*/)
	: CDialogEx(IDD_DIALOG_CLASS, pParent)
{

}

CClass::~CClass()
{
}

void CClass::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
}


BEGIN_MESSAGE_MAP(CClass, CDialogEx)
	ON_BN_CLICKED(IDC_BUTTON_INFO, &CClass::OnClickedButtonInfo)
	ON_BN_CLICKED(IDC_BUTTON_TEST, &CClass::OnClickedButtonTest)
	ON_BN_CLICKED(IDC_BUTTON_TIMETABLE, &CClass::OnClickedButtonTimetable)
	ON_BN_CLICKED(IDC_BUTTON_TOTAL, &CClass::OnClickedButtonTotal)
END_MESSAGE_MAP()


// CClass message handlers


void CClass::OnClickedButtonInfo()
{
	// TODO: 여기에 컨트롤 알림 처리기 코드를 추가합니다.
	m_InfoDlg.DoModal();
}


void CClass::OnClickedButtonTest()
{
	// TODO: 여기에 컨트롤 알림 처리기 코드를 추가합니다.
	m_ScoreDlg.DoModal();
}


void CClass::OnClickedButtonTimetable()
{
	// TODO: 여기에 컨트롤 알림 처리기 코드를 추가합니다.
	m_TimeTableDlg.DoModal();
}


void CClass::OnClickedButtonTotal()
{
	// TODO: 여기에 컨트롤 알림 처리기 코드를 추가합니다.
	UpdateData(TRUE);
	//기본정보
	m_TotalDlg.m_strNameOut = m_InfoDlg.m_strName;
	m_TotalDlg.m_strBirthOut = m_InfoDlg.m_strBirth;
	m_TotalDlg.m_strSubjectOut = m_InfoDlg.m_strSubject;
	m_TotalDlg.m_strGradeOut = m_InfoDlg.m_strGrade;
	m_TotalDlg.m_strSchNumOut = m_InfoDlg.m_strSchNum;
	m_TotalDlg.m_strAddressOut = m_InfoDlg.m_strAddress;
	
	//시간표
	m_TotalDlg.m_strSubjectOutput = m_InfoDlg.m_strSubject;
	//월요일
	m_TotalDlg.m_strM1O = m_TimeTableDlg.m_strM1;
	m_TotalDlg.m_strM2O = m_TimeTableDlg.m_strM2;
	m_TotalDlg.m_strM3O = m_TimeTableDlg.m_strM3;
	m_TotalDlg.m_strM4O = m_TimeTableDlg.m_strM4;
	m_TotalDlg.m_strM5O = m_TimeTableDlg.m_strM5;
	m_TotalDlg.m_strM6O = m_TimeTableDlg.m_strM6;
	m_TotalDlg.m_strM7O = m_TimeTableDlg.m_strM7;
	//화요일
	m_TotalDlg.m_strT1O = m_TimeTableDlg.m_strT1;
	m_TotalDlg.m_strT2O = m_TimeTableDlg.m_strT2;
	m_TotalDlg.m_strT3O = m_TimeTableDlg.m_strT3;
	m_TotalDlg.m_strT4O = m_TimeTableDlg.m_strT4;
	m_TotalDlg.m_strT5O = m_TimeTableDlg.m_strT5;
	m_TotalDlg.m_strT6O = m_TimeTableDlg.m_strT6;
	m_TotalDlg.m_strT7O = m_TimeTableDlg.m_strT7;
	//수요일
	m_TotalDlg.m_strW1O = m_TimeTableDlg.m_strW1;
	m_TotalDlg.m_strW2O = m_TimeTableDlg.m_strW2;
	m_TotalDlg.m_strW3O = m_TimeTableDlg.m_strW3;
	m_TotalDlg.m_strW4O = m_TimeTableDlg.m_strW4;
	m_TotalDlg.m_strW5O = m_TimeTableDlg.m_strW5;
	m_TotalDlg.m_strW6O = m_TimeTableDlg.m_strW6;
	m_TotalDlg.m_strW7O = m_TimeTableDlg.m_strW7;
	//목요일
	m_TotalDlg.m_strTh1O = m_TimeTableDlg.m_strTh1;
	m_TotalDlg.m_strTh2O = m_TimeTableDlg.m_strTh2;
	m_TotalDlg.m_strTh3O = m_TimeTableDlg.m_strTh3;
	m_TotalDlg.m_strTh4O = m_TimeTableDlg.m_strTh4;
	m_TotalDlg.m_strTh5O = m_TimeTableDlg.m_strTh5;
	m_TotalDlg.m_strTh6O = m_TimeTableDlg.m_strTh6;
	m_TotalDlg.m_strTh7O = m_TimeTableDlg.m_strTh7;
	//금요일
	m_TotalDlg.m_strF1O = m_TimeTableDlg.m_strF1;
	m_TotalDlg.m_strF2O = m_TimeTableDlg.m_strF2;
	m_TotalDlg.m_strF3O = m_TimeTableDlg.m_strF3;
	m_TotalDlg.m_strF4O = m_TimeTableDlg.m_strF4;
	m_TotalDlg.m_strF5O = m_TimeTableDlg.m_strF5;
	m_TotalDlg.m_strF6O = m_TimeTableDlg.m_strF6;
	m_TotalDlg.m_strF7O = m_TimeTableDlg.m_strF7;
	//성적
	m_TotalDlg.m_strTotalOut = m_ScoreDlg.m_nScoreTotal;
	m_TotalDlg.m_strAverageOut = m_ScoreDlg.m_nScoreAverage;
	m_TotalDlg.m_strScoreOut = m_ScoreDlg.m_nScoreGrade;
	UpdateData(FALSE);
	m_TotalDlg.DoModal();
}
