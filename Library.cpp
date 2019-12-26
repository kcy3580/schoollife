// Library.cpp : implementation file
//

#include "stdafx.h"
#include "SchoolLIfeProject.h"
#include "Library.h"
#include "afxdialogex.h"


// CLibrary dialog

IMPLEMENT_DYNAMIC(CLibrary, CDialogEx)

CLibrary::CLibrary(CWnd* pParent /*=NULL*/)
	: CDialogEx(IDD_DIALOG_SCHOOLINFO_LIBRARY, pParent)
{

}

CLibrary::~CLibrary()
{
}

void CLibrary::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
}


BEGIN_MESSAGE_MAP(CLibrary, CDialogEx)
END_MESSAGE_MAP()


// CLibrary message handlers
