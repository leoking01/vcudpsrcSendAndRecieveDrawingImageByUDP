// JieshouDoc.h : interface of the CJieshouDoc class
//
/////////////////////////////////////////////////////////////////////////////

#if !defined(AFX_JIESHOUDOC_H__9C47287F_404B_49EB_80C1_CAF83FC1A576__INCLUDED_)
#define AFX_JIESHOUDOC_H__9C47287F_404B_49EB_80C1_CAF83FC1A576__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
#include "DASocket.h"
class CDASocket;
#include "JieshouDoc.h"


class CJieshouDoc : public CDocument
{
protected: // create from serialization only
	CJieshouDoc();
	DECLARE_DYNCREATE(CJieshouDoc)

// Attributes
public:
	CDASocket* m_hSocket;
	struct yuan
	{
		int x;
		int y;
		int r;
		int color;
	} p,*buff;

// Operations
public:
	void Presscessding(char* lbuff);

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CJieshouDoc)
	public:
	virtual BOOL OnNewDocument();
	virtual void Serialize(CArchive& ar);
	//}}AFX_VIRTUAL

// Implementation
public:
	virtual ~CJieshouDoc();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// Generated message map functions
protected:
	//{{AFX_MSG(CJieshouDoc)
		// NOTE - the ClassWizard will add and remove member functions here.
		//    DO NOT EDIT what you see in these blocks of generated code !
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_JIESHOUDOC_H__9C47287F_404B_49EB_80C1_CAF83FC1A576__INCLUDED_)
