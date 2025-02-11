
// SchoolLIfeProjectDlg.cpp: 구현 파일
//

#include "stdafx.h"
#include "SchoolLIfeProject.h"
#include "SchoolLIfeProjectDlg.h"
#include "afxdialogex.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// 응용 프로그램 정보에 사용되는 CAboutDlg 대화 상자입니다.

class CAboutDlg : public CDialogEx
{
public:
	CAboutDlg();

// 대화 상자 데이터입니다.
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_ABOUTBOX };
#endif

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 지원입니다.

// 구현입니다.
protected:
	DECLARE_MESSAGE_MAP()
};

CAboutDlg::CAboutDlg() : CDialogEx(IDD_ABOUTBOX)
{
}

void CAboutDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
}

BEGIN_MESSAGE_MAP(CAboutDlg, CDialogEx)
END_MESSAGE_MAP()


// CSchoolLIfeProjectDlg 대화 상자



CSchoolLIfeProjectDlg::CSchoolLIfeProjectDlg(CWnd* pParent /*=NULL*/)
	: CDialog(IDD_SCHOOLLIFEPROJECT_DIALOG, pParent)
{
	m_hIcon = AfxGetApp()->LoadIcon(IDR_MAINFRAME);
}

void CSchoolLIfeProjectDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
}

BEGIN_MESSAGE_MAP(CSchoolLIfeProjectDlg, CDialog)
	ON_WM_SYSCOMMAND()
	ON_WM_PAINT()
	ON_WM_QUERYDRAGICON()
	ON_WM_TIMER()
	ON_BN_CLICKED(IDC_BUTTON_CLASS, &CSchoolLIfeProjectDlg::OnClickedButtonClass)
	ON_BN_CLICKED(IDC_BUTTON_FOOD, &CSchoolLIfeProjectDlg::OnClickedButtonFood)
	ON_BN_CLICKED(IDC_BUTTON_CONVENIENC, &CSchoolLIfeProjectDlg::OnClickedButtonConvenienc)
	ON_BN_CLICKED(IDC_BUTTON_SHUTTLE, &CSchoolLIfeProjectDlg::OnClickedButtonShuttle)
	ON_BN_CLICKED(IDC_BUTTON_INFORMATION, &CSchoolLIfeProjectDlg::OnClickedButtonInformation)
END_MESSAGE_MAP()


// CSchoolLIfeProjectDlg 메시지 처리기

BOOL CSchoolLIfeProjectDlg::OnInitDialog()
{
	static CFont VDCFont;

	VDCFont.CreateFont(40, 0, 0, 0, FW_SEMIBOLD, FALSE, FALSE, 0, 0, 0, 0, 0, 0, _T("Seoil University"));
	GetDlgItem(IDC_STATIC_SEOIL)->SetFont(&VDCFont);

	CDialog::OnInitDialog();

	// 시스템 메뉴에 "정보..." 메뉴 항목을 추가합니다.
	CRect rect;
	screen.top = 0;
	screen.left = 0;
	screen.bottom = ::GetSystemMetrics(SM_CYSCREEN);
	screen.right = GetSystemMetrics(SM_CXSCREEN); //화면 크기

	htimer = SetTimer(1, 1000, NULL);

	GetWindowRect(rect);
	vsize = rect.Width();  //프로그램의 가로 크기
	hsize = rect.Height(); //프로그램의 세로 크기

	// IDM_ABOUTBOX는 시스템 명령 범위에 있어야 합니다.
	ASSERT((IDM_ABOUTBOX & 0xFFF0) == IDM_ABOUTBOX);
	ASSERT(IDM_ABOUTBOX < 0xF000);

	CMenu* pSysMenu = GetSystemMenu(FALSE);
	if (pSysMenu != NULL)
	{
		BOOL bNameValid;
		CString strAboutMenu;
		bNameValid = strAboutMenu.LoadString(IDS_ABOUTBOX);
		ASSERT(bNameValid);
		if (!strAboutMenu.IsEmpty())
		{
			pSysMenu->AppendMenu(MF_SEPARATOR);
			pSysMenu->AppendMenu(MF_STRING, IDM_ABOUTBOX, strAboutMenu);
		}
	}

	// 이 대화 상자의 아이콘을 설정합니다.  응용 프로그램의 주 창이 대화 상자가 아닐 경우에는
	//  프레임워크가 이 작업을 자동으로 수행합니다.
	SetIcon(m_hIcon, TRUE);			// 큰 아이콘을 설정합니다.
	SetIcon(m_hIcon, FALSE);		// 작은 아이콘을 설정합니다.

	// TODO: 여기에 추가 초기화 작업을 추가합니다.

	return TRUE;  // 포커스를 컨트롤에 설정하지 않으면 TRUE를 반환합니다.
}

void CSchoolLIfeProjectDlg::OnSysCommand(UINT nID, LPARAM lParam)
{
	if ((nID & 0xFFF0) == IDM_ABOUTBOX)
	{
		CAboutDlg dlgAbout;
		dlgAbout.DoModal();
	}
	else
	{
		CDialog::OnSysCommand(nID, lParam);
	}
}

// 대화 상자에 최소화 단추를 추가할 경우 아이콘을 그리려면
//  아래 코드가 필요합니다.  문서/뷰 모델을 사용하는 MFC 응용 프로그램의 경우에는
//  프레임워크에서 이 작업을 자동으로 수행합니다.

void CSchoolLIfeProjectDlg::OnPaint()
{
	if (IsIconic())
	{
		CPaintDC dc(this); // 그리기를 위한 디바이스 컨텍스트입니다.

		SendMessage(WM_ICONERASEBKGND, reinterpret_cast<WPARAM>(dc.GetSafeHdc()), 0);

		// 클라이언트 사각형에서 아이콘을 가운데에 맞춥니다.
		int cxIcon = GetSystemMetrics(SM_CXICON);
		int cyIcon = GetSystemMetrics(SM_CYICON);
		CRect rect;
		GetClientRect(&rect);
		int x = (rect.Width() - cxIcon + 1) / 2;
		int y = (rect.Height() - cyIcon + 1) / 2;

		// 아이콘을 그립니다.
		dc.DrawIcon(x, y, m_hIcon);
	}
	else
	{
		CDialog::OnPaint();
	}
}

// 사용자가 최소화된 창을 끄는 동안에 커서가 표시되도록 시스템에서
//  이 함수를 호출합니다.
HCURSOR CSchoolLIfeProjectDlg::OnQueryDragIcon()
{
	return static_cast<HCURSOR>(m_hIcon);
}



void CSchoolLIfeProjectDlg::OnTimer(UINT_PTR nIDEvent)
{
	// TODO: 여기에 메시지 처리기 코드를 추가 및/또는 기본값을 호출합니다.

	CTime gct = CTime::GetCurrentTime();

	CString strDATE;
	CString strMA;
	CString strDOW;
	CString strTIME;

	strDATE.Format(_T(" %d - %d - %d "), gct.GetYear(), gct.GetMonth(), gct.GetDay());
	GetDlgItem(IDC_STATIC_DATE)->SetWindowText((LPCTSTR)strDATE);

	strTIME.Format(_T(" %d : %d : %d "), gct.GetHour(), gct.GetMinute(), gct.GetSecond());
	GetDlgItem(IDC_STATIC_TIME)->SetWindowText((LPCTSTR)strTIME);

	if (gct.GetHour() > 12)

	{
		strMA = _T("오후");
		GetDlgItem(IDC_STATIC_MA)->SetWindowText((LPCTSTR)strMA);
		strMA.Format(_T(" %d : %d : %d "), gct.GetHour() - 12);
	}

	else
	{
		strMA = _T("오전");
		GetDlgItem(IDC_STATIC_MA)->SetWindowText((LPCTSTR)strMA);
		strMA.Format(_T(" %d : %d : %d "), gct.GetHour());
	}

	int i = gct.GetDayOfWeek();

	switch (i)
	{
	case 1:
		strDOW = _T("일요일");
		GetDlgItem(IDC_STATIC_DOW)->SetWindowText((LPCTSTR)strDOW);
		break;
	case 2:
		strDOW = _T("월요일");
		GetDlgItem(IDC_STATIC_DOW)->SetWindowText((LPCTSTR)strDOW);
		break;
	case 3:
		strDOW = _T("화요일");
		GetDlgItem(IDC_STATIC_DOW)->SetWindowText((LPCTSTR)strDOW);
		break;
	case 4:
		strDOW = _T("수요일");
		GetDlgItem(IDC_STATIC_DOW)->SetWindowText((LPCTSTR)strDOW);
		break;
	case 5:
		strDOW = _T("목요일");
		GetDlgItem(IDC_STATIC_DOW)->SetWindowText((LPCTSTR)strDOW);
		break;
	case 6:
		strDOW = _T("금요일");
		GetDlgItem(IDC_STATIC_DOW)->SetWindowText((LPCTSTR)strDOW);
		break;
	case 7:
		strDOW = _T("토요일");
		GetDlgItem(IDC_STATIC_DOW)->SetWindowText((LPCTSTR)strDOW);
		break;
	}

	Invalidate();

	CDialog::OnTimer(nIDEvent);
}


void CSchoolLIfeProjectDlg::OnClickedButtonClass()
{
	// TODO: 여기에 컨트롤 알림 처리기 코드를 추가합니다.
	m_ClassDlg.DoModal();
}


void CSchoolLIfeProjectDlg::OnClickedButtonFood()
{
	// TODO: 여기에 컨트롤 알림 처리기 코드를 추가합니다.
	m_FoodDlg.DoModal();
}


void CSchoolLIfeProjectDlg::OnClickedButtonConvenienc()
{
	// TODO: 여기에 컨트롤 알림 처리기 코드를 추가합니다.
	m_ConvenienceDlg.DoModal();
}


void CSchoolLIfeProjectDlg::OnClickedButtonShuttle()
{
	// TODO: 여기에 컨트롤 알림 처리기 코드를 추가합니다.
	m_ShuttleDlg.DoModal();
}


void CSchoolLIfeProjectDlg::OnClickedButtonInformation()
{
	// TODO: 여기에 컨트롤 알림 처리기 코드를 추가합니다.
	m_SchoolInfoDlg.DoModal();
}
