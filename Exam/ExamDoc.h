
// ExamDoc.h: CExamDoc 클래스의 인터페이스
//

#include "CBright2.h"
#include "CTrans.h"
#include "CRotationDlg.h"
#include "CZoomDlg.h"
#include "CAffineDlg.h"
#include "CMaskDlg.h"
#pragma once


class CExamDoc : public CDocument
{
protected: // serialization에서만 만들어집니다.
	CExamDoc() noexcept;
	DECLARE_DYNCREATE(CExamDoc)

// 특성입니다.
public:
	unsigned char m_InImg[4][256][256]; //입력영상 저장
	unsigned char m_OutImg[4][256][256]; //출력 영상 저장
	unsigned int m_SizeX;
	unsigned int m_SizeY;
	unsigned int m_NoInImg;
	unsigned int m_NoOutImg; 
	CBright2 m_BrightDlg;
	void CExamDoc::m_Bright(int height, int width);
	void m_TwoImgLoad();
	CTrans m_TransDlg;
	CRotationDlg m_rotationdlg;
	void CExamDoc::m_Rotation(int height, int width, int center_r, int center_c, unsigned char InImg[][256]);
	void CExamDoc::m_Zoom(int height, int width, unsigned char InImg[][256]);
	void CExamDoc::m_Affine(int height, int width);
	CMaskDlg m_maskdlg;
	void CExamDoc::m_Lowpass(int height, int width, unsigned char InImg[][256]);
	void CExamDoc::m_Highpass(int height, int width, unsigned char InImg[][256]);
	void CExamDoc::m_Median(int height, int width, unsigned char InImg[][256]);
	int m_HistoArr[256];  //각 레벨의 히스토그램(빈도)를 저장
	unsigned char m_OutImgTemp[256][256]; //처리영상 임시저장
	void CExamDoc::m_Histo(int height, int width);
	void CExamDoc::m_HistoStretch(int height, int width);
	void CExamDoc::m_HistoEqual(int height, int width);
	CZoomDlg m_ZoomDlg;
	CAffineDlg m_affinedlg;
	
// 작업입니다.
public:

// 재정의입니다.
public:
	virtual BOOL OnNewDocument();
	virtual void Serialize(CArchive& ar);
#ifdef SHARED_HANDLERS
	virtual void InitializeSearchContent();
	virtual void OnDrawThumbnail(CDC& dc, LPRECT lprcBounds);
#endif // SHARED_HANDLERS

// 구현입니다.
public:
	virtual ~CExamDoc();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// 생성된 메시지 맵 함수
protected:
	DECLARE_MESSAGE_MAP()

#ifdef SHARED_HANDLERS
	// 검색 처리기에 대한 검색 콘텐츠를 설정하는 도우미 함수
	void SetSearchContent(const CString& value);
#endif // SHARED_HANDLERS
};
