// Juicey.cpp : implementation file
//

#include "stdafx.h"
#include "SchoolLIfeProject.h"
#include "Juicey.h"
#include "afxdialogex.h"


// CJuicey dialog

IMPLEMENT_DYNAMIC(CJuicey, CDialogEx)

CJuicey::CJuicey(CWnd* pParent /*=NULL*/)
	: CDialogEx(IDD_DIALOG_FOOD_BEVERAGE_JUICEY, pParent)
{

}

CJuicey::~CJuicey()
{
}

void CJuicey::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
}


BEGIN_MESSAGE_MAP(CJuicey, CDialogEx)
END_MESSAGE_MAP()


// CJuicey message handlers
