
// SchoolLIfeProjectDlg.h: 헤더 파일
//

#pragma once


#include "Class.h"
#include "Food.h"
#include "Convenience.h"
#include "Shuttle.h"
#include "SchoolInfo.h"

// CSchoolLIfeProjectDlg 대화 상자
class CSchoolLIfeProjectDlg : public CDialog
{
// 생성입니다.
public:
	CSchoolLIfeProjectDlg(CWnd* pParent = NULL);	// 표준 생성자입니다.

	CClass m_ClassDlg;
	CFood m_FoodDlg;
	CConvenience m_ConvenienceDlg;
	CShuttle m_ShuttleDlg;
	CSchoolInfo m_SchoolInfoDlg;

	CRect screen; //화면 크기 저장 변수
	int vsize, hsize; //폭과 높이 변수

	UINT htimer;

// 대화 상자 데이터입니다.
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_SCHOOLLIFEPROJECT_DIALOG };
#endif

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV 지원입니다.


// 구현입니다.
protected:
	HICON m_hIcon;

	// 생성된 메시지 맵 함수
	virtual BOOL OnInitDialog();
	afx_msg void OnSysCommand(UINT nID, LPARAM lParam);
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnTimer(UINT_PTR nIDEvent);
	afx_msg void OnClickedButtonClass();
	afx_msg void OnClickedButtonFood();
	afx_msg void OnClickedButtonConvenienc();
	afx_msg void OnClickedButtonShuttle();
	afx_msg void OnClickedButtonInformation();
};
