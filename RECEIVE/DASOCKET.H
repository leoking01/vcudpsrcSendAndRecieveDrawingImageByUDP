#if !defined(AFX_DASOCKET_H__44714252_E3FB_4077_8A3D_969806400979__INCLUDED_)
#define AFX_DASOCKET_H__44714252_E3FB_4077_8A3D_969806400979__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
// DASocket.h : header file
// Download by http://www.codefans.net



/////////////////////////////////////////////////////////////////////////////
// CDASocket command target
#include "JieshouDoc.h"
class CJieshouDoc;
class CDASocket : public CAsyncSocket
{
// Attributes
public:

// Operations
public:
	CDASocket(CJieshouDoc* pDoc);
	virtual ~CDASocket();

// Overrides
public:
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CDASocket)
	public:
	virtual void OnReceive(int nErrorCode);
	//}}AFX_VIRTUAL

	// Generated message map functions
	//{{AFX_MSG(CDASocket)
		// NOTE - the ClassWizard will add and remove member functions here.
	//}}AFX_MSG

// Implementation
protected:
	CJieshouDoc* m_pDoc;
};

/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_DASOCKET_H__44714252_E3FB_4077_8A3D_969806400979__INCLUDED_)
