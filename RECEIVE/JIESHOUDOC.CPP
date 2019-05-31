// JieshouDoc.cpp : implementation of the CJieshouDoc class
//  Download by http://www.codefans.net

#include "stdafx.h"
#include "Jieshou.h"
#include  "DASocket.h"
#include "JieshouDoc.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CJieshouDoc

IMPLEMENT_DYNCREATE(CJieshouDoc, CDocument)

BEGIN_MESSAGE_MAP(CJieshouDoc, CDocument)
	//{{AFX_MSG_MAP(CJieshouDoc)
		// NOTE - the ClassWizard will add and remove mapping macros here.
		//    DO NOT EDIT what you see in these blocks of generated code!
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CJieshouDoc construction/destruction

CJieshouDoc::CJieshouDoc()
{
	// TODO: add one-time construction code here
	
	m_hSocket=new CDASocket(this);
	m_hSocket->Create(3550,SOCK_DGRAM);

}

CJieshouDoc::~CJieshouDoc()
{delete m_hSocket;

}

BOOL CJieshouDoc::OnNewDocument()
{
	if (!CDocument::OnNewDocument())
		return FALSE;

	// TODO: add reinitialization code here
	// (SDI documents will reuse this document)

	return TRUE;
}



/////////////////////////////////////////////////////////////////////////////
// CJieshouDoc serialization

void CJieshouDoc::Serialize(CArchive& ar)
{
	if (ar.IsStoring())
	{
		// TODO: add storing code here
	}
	else
	{
		// TODO: add loading code here
	}
}

/////////////////////////////////////////////////////////////////////////////
// CJieshouDoc diagnostics

#ifdef _DEBUG
void CJieshouDoc::AssertValid() const
{
	CDocument::AssertValid();
}

void CJieshouDoc::Dump(CDumpContext& dc) const
{
	CDocument::Dump(dc);
}
#endif //_DEBUG

/////////////////////////////////////////////////////////////////////////////
// CJieshouDoc commands
void CJieshouDoc::Presscessding(char* lbuff)
{
	buff=(struct yuan*)lbuff;
	p.x=buff->x;

	p.y=buff->y;
	p.r=buff->r;
	p.color=buff->color;
	UpdateAllViews(NULL);
	

}
