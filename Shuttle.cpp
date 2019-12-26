// Shuttle.cpp : implementation file
//

#include "stdafx.h"
#include "SchoolLIfeProject.h"
#include "Shuttle.h"
#include "afxdialogex.h"


// CShuttle dialog

IMPLEMENT_DYNAMIC(CShuttle, CDialogEx)

CShuttle::CShuttle(CWnd* pParent /*=NULL*/)
	: CDialogEx(IDD_DIALOG_SHUTTLE, pParent)
{

}

CShuttle::~CShuttle()
{
}

void CShuttle::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
}


BEGIN_MESSAGE_MAP(CShuttle, CDialogEx)
END_MESSAGE_MAP()


// CShuttle message handlers
