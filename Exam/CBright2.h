#pragma once


// CBright2 대화 상자

class CBright2 : public CDialogEx
{
	DECLARE_DYNAMIC(CBright2)

public:
	CBright2(CWnd* pParent = nullptr);   // 표준 생성자입니다.
	virtual ~CBright2();

// 대화 상자 데이터입니다.
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_BRIGHT };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 지원입니다.

	DECLARE_MESSAGE_MAP()
public:
	int m_brightvalue;
};
