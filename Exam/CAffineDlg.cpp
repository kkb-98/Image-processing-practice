// CAffineDlg.cpp: 구현 파일
//

#include "pch.h"
#include "Exam.h"
#include "CAffineDlg.h"
#include "afxdialogex.h"


// CAffineDlg 대화 상자

IMPLEMENT_DYNAMIC(CAffineDlg, CDialog)

CAffineDlg::CAffineDlg(CWnd* pParent /*=nullptr*/)
	: CDialog(IDD_Affine, pParent)
	, m_affine_a(0)
	, m_affine_b(0)
	, m_affine_c(0)
	, m_affine_d(0)
	, m_affine_e(0)
	, m_affine_f(0)
{

}

CAffineDlg::~CAffineDlg()
{
}

void CAffineDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	DDX_Text(pDX, IDC_AFFINE_A, m_affine_a);
	DDX_Text(pDX, IDC_AFFINE_B, m_affine_b);
	DDX_Text(pDX, IDC_AFFINE_C, m_affine_c);
	DDX_Text(pDX, IDC_AFFINE_D, m_affine_d);
	DDX_Text(pDX, IDC_AFFINE_E, m_affine_e);
	DDX_Text(pDX, IDC_AFFINE_F, m_affine_f);
}


BEGIN_MESSAGE_MAP(CAffineDlg, CDialog)
END_MESSAGE_MAP()


// CAffineDlg 메시지 처리기
