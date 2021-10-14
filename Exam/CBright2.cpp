// CBright2.cpp: 구현 파일
//

#include "pch.h"
#include "Exam.h"
#include "CBright2.h"
#include "afxdialogex.h"


// CBright2 대화 상자

IMPLEMENT_DYNAMIC(CBright2, CDialogEx)

CBright2::CBright2(CWnd* pParent /*=nullptr*/)
	: CDialogEx(IDD_BRIGHT, pParent)
	, m_brightvalue(0)
{

}

CBright2::~CBright2()
{
}

void CBright2::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
	DDX_Text(pDX, IDC_BRIGHTVALUE, m_brightvalue);
}


BEGIN_MESSAGE_MAP(CBright2, CDialogEx)
END_MESSAGE_MAP()


// CBright2 메시지 처리기
