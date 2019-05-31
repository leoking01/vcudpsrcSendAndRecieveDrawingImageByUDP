// Fason.h : main header file for the FASON application
//

#if !defined(AFX_FASON_H__5B3AA228_1BF7_4E9E_916F_AD760CBB4A33__INCLUDED_)
#define AFX_FASON_H__5B3AA228_1BF7_4E9E_916F_AD760CBB4A33__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

#ifndef __AFXWIN_H__
	#error include 'stdafx.h' before including this file for PCH
#endif

#include "resource.h"		// main symbols

/////////////////////////////////////////////////////////////////////////////
// CFasonApp:
// See Fason.cpp for the implementation of this class
//

class CFasonApp : public CWinApp
{
public:
	CFasonApp();

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CFasonApp)
	public:
	virtual BOOL InitInstance();
	//}}AFX_VIRTUAL

// Implementation

	//{{AFX_MSG(CFasonApp)
		// NOTE - the ClassWizard will add and remove member functions here.
		//    DO NOT EDIT what you see in these blocks of generated code !
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};


/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_FASON_H__5B3AA228_1BF7_4E9E_916F_AD760CBB4A33__INCLUDED_)
