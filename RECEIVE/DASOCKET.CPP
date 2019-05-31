// DASocket.cpp : implementation file
// Download by http://www.codefans.net

#include "stdafx.h"
#include "Jieshou.h"
#include  "JieshouDoc.h"
#include "DASocket.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CDASocket

CDASocket::CDASocket(CJieshouDoc* pDoc)
{m_pDoc=pDoc;
}

CDASocket::~CDASocket()
{
}


// Do not edit the following lines, which are needed by ClassWizard.
#if 0
BEGIN_MESSAGE_MAP(CDASocket, CAsyncSocket)
	//{{AFX_MSG_MAP(CDASocket)
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()
#endif	// 0

/////////////////////////////////////////////////////////////////////////////
// CDASocket member functions

void CDASocket::OnReceive(int nErrorCode) 
{
	// TODO: Add your specialized code here and/or call the base
	char buff[256];
	int ret=0;
	ret=Receive(buff,256);
	if(ret==ERROR)
	{
		TRACE("ERROR!");
	}
	else 
		m_pDoc->Presscessding(buff);
	//class CAsyncSocket::OnReceive(nErrorCode);
	  CAsyncSocket::OnReceive(nErrorCode);
}
