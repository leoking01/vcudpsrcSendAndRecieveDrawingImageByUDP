// JieshouView.cpp : implementation of the CJieshouView class
// Download by http://www.codefans.net

#include "stdafx.h"
#include "Jieshou.h"

#include "JieshouDoc.h"
#include "JieshouView.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CJieshouView

IMPLEMENT_DYNCREATE(CJieshouView, CView)

BEGIN_MESSAGE_MAP(CJieshouView, CView)
	//{{AFX_MSG_MAP(CJieshouView)
		// NOTE - the ClassWizard will add and remove mapping macros here.
		//    DO NOT EDIT what you see in these blocks of generated code!
	//}}AFX_MSG_MAP
	// Standard printing commands
	ON_COMMAND(ID_FILE_PRINT, CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_DIRECT, CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_PREVIEW, CView::OnFilePrintPreview)
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CJieshouView construction/destruction

CJieshouView::CJieshouView()
{
	// TODO: add construction code here


}

CJieshouView::~CJieshouView()
{
}

BOOL CJieshouView::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: Modify the Window class or styles here by modifying
	//  the CREATESTRUCT cs

	return CView::PreCreateWindow(cs);
}

/////////////////////////////////////////////////////////////////////////////
// CJieshouView drawing

void CJieshouView::OnDraw(CDC* pDC)
{
	CJieshouDoc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	// TODO: add draw code for native data here
	x=pDoc->p.x;
	y=pDoc->p.y;
	r=pDoc->p.r;
	if(pDoc->p.color==1)
	pDC->SelectObject(new CBrush(RGB(255,0,0)));
	if(pDoc->p.color==2)
		pDC->SelectObject(new CBrush(RGB(0,255,0)));
	if(pDoc->p.color==3)
		pDC->SelectObject(new CBrush(RGB(0,0,255)));
	//if(pDoc->p.color==0)
	//	pDC->SelectObject(new CBrush(RGB(255,255,255)));
	  pDC->Ellipse(x-r,y-r,x+r,y+r);
	  

}

/////////////////////////////////////////////////////////////////////////////
// CJieshouView printing

BOOL CJieshouView::OnPreparePrinting(CPrintInfo* pInfo)
{
	// default preparation
	return DoPreparePrinting(pInfo);
}

void CJieshouView::OnBeginPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: add extra initialization before printing
}

void CJieshouView::OnEndPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: add cleanup after printing
}

/////////////////////////////////////////////////////////////////////////////
// CJieshouView diagnostics

#ifdef _DEBUG
void CJieshouView::AssertValid() const
{
	CView::AssertValid();
}

void CJieshouView::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CJieshouDoc* CJieshouView::GetDocument() // non-debug version is inline
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CJieshouDoc)));
	return (CJieshouDoc*)m_pDocument;
}
#endif //_DEBUG

/////////////////////////////////////////////////////////////////////////////
// CJieshouView message handlers
