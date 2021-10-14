// CRotationDlg.cpp: 구현 파일
//

#include "pch.h"
#include "Exam.h"
#include "CRotationDlg.h"
#include "afxdialogex.h"


// CRotationDlg 대화 상자

IMPLEMENT_DYNAMIC(CRotationDlg, CDialog)

CRotationDlg::CRotationDlg(CWnd* pParent /*=nullptr*/)
	: CDialog(IDD_ROTATION, pParent)
	, m_rotationangle(0)
{

}

CRotationDlg::~CRotationDlg()
{
}

void CRotationDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	DDX_Text(pDX, IDC_ROTATIONANGLE, m_rotationangle);
}


BEGIN_MESSAGE_MAP(CRotationDlg, CDialog)
END_MESSAGE_MAP()


// CRotationDlg 메시지 처리기
