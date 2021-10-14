// CZoomDlg.cpp: 구현 파일
//

#include "pch.h"
#include "Exam.h"
#include "CZoomDlg.h"
#include "afxdialogex.h"


// CZoomDlg 대화 상자

IMPLEMENT_DYNAMIC(CZoomDlg, CDialog)

CZoomDlg::CZoomDlg(CWnd* pParent /*=nullptr*/)
	: CDialog(IDD_DIALOG1, pParent)
	, m_zoomsize_x(0)
	, m_zoomsize_y(0)
{

}

CZoomDlg::~CZoomDlg()
{
}

void CZoomDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	//  DDX_Text(pDX, IDC_ZOOMSIZE_X, m_zoomsize_X, IDC_ZOOMSIZE_Y, m_zoomsize_Y);
	DDX_Text(pDX, IDC_ZOOMSIZE_X, m_zoomsize_x);
	DDX_Text(pDX, IDC_ZOOMSIZE_Y, m_zoomsize_y);
}


BEGIN_MESSAGE_MAP(CZoomDlg, CDialog)
END_MESSAGE_MAP()


// CZoomDlg 메시지 처리기
