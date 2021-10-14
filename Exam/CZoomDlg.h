#pragma once


// CZoomDlg 대화 상자

class CZoomDlg : public CDialog
{
	DECLARE_DYNAMIC(CZoomDlg)

public:
	CZoomDlg(CWnd* pParent = nullptr);   // 표준 생성자입니다.
	virtual ~CZoomDlg();

// 대화 상자 데이터입니다.
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_DIALOG1 };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 지원입니다.

	DECLARE_MESSAGE_MAP()
public:
	float m_zoomsize_x;
	float m_zoomsize_y;
};
