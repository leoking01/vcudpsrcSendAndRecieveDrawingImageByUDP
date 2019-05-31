// JieshouView.h : interface of the CJieshouView class
//
/////////////////////////////////////////////////////////////////////////////

#if !defined(AFX_JIESHOUVIEW_H__44109B5E_0E11_48E1_90A3_CFA768C6FF1B__INCLUDED_)
#define AFX_JIESHOUVIEW_H__44109B5E_0E11_48E1_90A3_CFA768C6FF1B__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000


class CJieshouView : public CView
{
protected: // create from serialization only
	CJieshouView();
	DECLARE_DYNCREATE(CJieshouView)

// Attributes
public:
	CJieshouDoc* GetDocument();
	int x;
	int y;
	int r;

   
// Operations
public:

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CJieshouView)
	public:
	virtual void OnDraw(CDC* pDC);  // overridden to draw this view
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
	protected:
	virtual BOOL OnPreparePrinting(CPrintInfo* pInfo);
	virtual void OnBeginPrinting(CDC* pDC, CPrintInfo* pInfo);
	virtual void OnEndPrinting(CDC* pDC, CPrintInfo* pInfo);
	//}}AFX_VIRTUAL

// Implementation
public:
	virtual ~CJieshouView();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// Generated message map functions
protected:
	//{{AFX_MSG(CJieshouView)
		// NOTE - the ClassWizard will add and remove member functions here.
		//    DO NOT EDIT what you see in these blocks of generated code !
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

#ifndef _DEBUG  // debug version in JieshouView.cpp
inline CJieshouDoc* CJieshouView::GetDocument()
   { return (CJieshouDoc*)m_pDocument; }
#endif

/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_JIESHOUVIEW_H__44109B5E_0E11_48E1_90A3_CFA768C6FF1B__INCLUDED_)
