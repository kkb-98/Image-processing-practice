// CMaskDlg.cpp: 구현 파일
//

#include "pch.h"
#include "Exam.h"
#include "CMaskDlg.h"
#include "afxdialogex.h"


// CMaskDlg 대화 상자

IMPLEMENT_DYNAMIC(CMaskDlg, CDialog)

CMaskDlg::CMaskDlg(CWnd* pParent /*=nullptr*/)
	: CDialog(IDD_DIALOG2, pParent)
	, m_masksize(0)
{

}

CMaskDlg::~CMaskDlg()
{
}

void CMaskDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	//  DDX_Text(pDX, IDC_MASKSIZE, m__masksize);
	DDX_Text(pDX, IDC_MASKSIZE, m_masksize);
}


BEGIN_MESSAGE_MAP(CMaskDlg, CDialog)
END_MESSAGE_MAP()


// CMaskDlg 메시지 처리기
