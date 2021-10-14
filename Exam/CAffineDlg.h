#pragma once


// CAffineDlg 대화 상자

class CAffineDlg : public CDialog
{
	DECLARE_DYNAMIC(CAffineDlg)

public:
	CAffineDlg(CWnd* pParent = nullptr);   // 표준 생성자입니다.
	virtual ~CAffineDlg();

// 대화 상자 데이터입니다.
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_Affine };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 지원입니다.

	DECLARE_MESSAGE_MAP()
public:
	float m_affine_a;
	float m_affine_b;
	float m_affine_c;
	float m_affine_d;
	float m_affine_e;
	float m_affine_f;
};
