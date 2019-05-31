; CLW file contains information for the MFC ClassWizard

[General Info]
Version=1
LastClass=CFasonDlg
LastTemplate=CSocket
NewFileInclude1=#include "stdafx.h"
NewFileInclude2=#include "Fason.h"

ClassCount=4
Class1=CFasonApp
Class2=CFasonDlg
Class3=CAboutDlg

ResourceCount=3
Resource1=IDD_ABOUTBOX
Resource2=IDR_MAINFRAME
Class4=CDSocket
Resource3=IDD_FASON_DIALOG

[CLS:CFasonApp]
Type=0
HeaderFile=Fason.h
ImplementationFile=Fason.cpp
Filter=N

[CLS:CFasonDlg]
Type=0
HeaderFile=FasonDlg.h
ImplementationFile=FasonDlg.cpp
Filter=D
BaseClass=CDialog
VirtualFilter=dWC
LastObject=CFasonDlg

[CLS:CAboutDlg]
Type=0
HeaderFile=FasonDlg.h
ImplementationFile=FasonDlg.cpp
Filter=D

[DLG:IDD_ABOUTBOX]
Type=1
Class=CAboutDlg
ControlCount=4
Control1=IDC_STATIC,static,1342177283
Control2=IDC_STATIC,static,1342308480
Control3=IDC_STATIC,static,1342308352
Control4=IDOK,button,1342373889

[DLG:IDD_FASON_DIALOG]
Type=1
Class=CFasonDlg
ControlCount=10
Control1=IDC_STATIC,static,1342308352
Control2=IDC_STATIC,static,1342308352
Control3=IDC_STATIC,static,1342308352
Control4=IDC_X,edit,1350631552
Control5=IDC_Y,edit,1350631552
Control6=IDC_R,edit,1350631552
Control7=IDC_STATIC,static,1342308352
Control8=IDC_COMBO1,combobox,1344340226
Control9=IDC_SEND,button,1342242827
Control10=IDC_EXIT,button,1342242827

[CLS:CDSocket]
Type=0
HeaderFile=DSocket.h
ImplementationFile=DSocket.cpp
BaseClass=CSocket
Filter=N

