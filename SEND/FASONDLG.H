// FasonDlg.h : header file
//

#if !defined(AFX_FASONDLG_H__29FC574B_1C5A_4F86_97B7_0399356471C5__INCLUDED_)
#define AFX_FASONDLG_H__29FC574B_1C5A_4F86_97B7_0399356471C5__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

/////////////////////////////////////////////////////////////////////////////
// CFasonDlg dialog
#include "LinkButton.h"
class CFasonDlg : public CDialog
{
// Construction
public:
	CFasonDlg(CWnd* pParent = NULL);	// standard constructor

// Dialog Data
	//{{AFX_DATA(CFasonDlg)
	enum { IDD = IDD_FASON_DIALOG };
    CLinkButton	m_ExitButton;
	CLinkButton	m_SendButton;
	CComboBox	m_Cob;
	int		m_r;
	int		m_x;
	int		m_y;
	//}}AFX_DATA

	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CFasonDlg)
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV support
	//}}AFX_VIRTUAL

// Implementation
protected:
	HICON m_hIcon;

	struct yuan
		{
			int x;
			int y;
			int  r;
			int color;
			
		} yuan1,*p;
	// Generated message map functions
	//{{AFX_MSG(CFasonDlg)
	virtual BOOL OnInitDialog();
	afx_msg void OnSysCommand(UINT nID, LPARAM lParam);
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	afx_msg void OnSend();
	afx_msg void OnExit();
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_FASONDLG_H__29FC574B_1C5A_4F86_97B7_0399356471C5__INCLUDED_)
