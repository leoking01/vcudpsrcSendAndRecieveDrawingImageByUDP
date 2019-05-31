// Jieshou.h : main header file for the JIESHOU application
//

#if !defined(AFX_JIESHOU_H__B3D5F999_922A_4539_931E_631213CFAD6E__INCLUDED_)
#define AFX_JIESHOU_H__B3D5F999_922A_4539_931E_631213CFAD6E__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

#ifndef __AFXWIN_H__
	#error include 'stdafx.h' before including this file for PCH
#endif

#include "resource.h"       // main symbols

/////////////////////////////////////////////////////////////////////////////
// CJieshouApp:
// See Jieshou.cpp for the implementation of this class
//

class CJieshouApp : public CWinApp
{
public:

	CJieshouApp();

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CJieshouApp)
	public:
	virtual BOOL InitInstance();
	//}}AFX_VIRTUAL

// Implementation
	//{{AFX_MSG(CJieshouApp)
	afx_msg void OnAppAbout();
		// NOTE - the ClassWizard will add and remove member functions here.
		//    DO NOT EDIT what you see in these blocks of generated code !
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};


/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_JIESHOU_H__B3D5F999_922A_4539_931E_631213CFAD6E__INCLUDED_)
