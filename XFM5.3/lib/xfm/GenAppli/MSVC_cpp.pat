//## 					begin pattern interface
//## 						//## 
//## 						//## Pattern file for the main source file
//## 						//## of the Windows application.
//## 						//## 
//## 						begin if [ SHORTNAMES ]
//## 							set global PROJNAME = NAME
//## 							set global LPROJNAME = [ lower ( NAME left 8 ) ]
//## 						ifelse
//## 							set global PROJNAME = NAME
//## 							set global LPROJNAME = NAME
//## 						end if
//## // `LPROJNAME'.cpp : Defines the class behaviors for the application.
//## //
//## 					end pattern interface
//## 					begin pattern module
//## 						begin if [ SHORTNAMES ]
//## 							set local LMODNAME5 = [ lower ( NAME left 5 ) ]
//## 						ifelse
//## 							set local LMODNAME5 = NAME
//## 						end if
//## 					end pattern module

#include "stdafx.h"
#include <afxole.h>
#include <xfmwin.h>
//## 					begin pattern module
//## #include "`LMODNAME5'Xfm.h"
//## 					end pattern module
//## 					begin pattern interface
//## #include "`LPROJNAME'.h"
//## #include "`LPROJNAME'App.h"
//## 					end pattern interface

#ifdef _DEBUG
#undef THIS_FILE
static char BASED_CODE THIS_FILE[] = __FILE__;
#endif

//## 					begin pattern interface
//## /////////////////////////////////////////////////////////////////////////////
//## // Class C`PROJNAME'App
//## 
//## BEGIN_MESSAGE_MAP(C`PROJNAME'App, CWinApp)
//## 	//{{AFX_MSG_MAP(C`PROJNAME'App)
//## 		// NOTE - the ClassWizard will add and remove mapping macros here.
//## 		//    DO NOT EDIT what you see in these blocks of generated code!
//## 	//}}AFX_MSG_MAP
//## END_MESSAGE_MAP()
//## 
//## /////////////////////////////////////////////////////////////////////////////
//## // C`PROJNAME'App construction
//## 
//## C`PROJNAME'App::C`PROJNAME'App()
//## {
//## 	// TODO: add construction code here,
//## 	// Place all significant initialization in InitInstance
//## }
//## 
//## /////////////////////////////////////////////////////////////////////////////
//## // The one and only C`PROJNAME'App object
//## 
//## C`PROJNAME'App NEAR theApp;
//## 
//## /////////////////////////////////////////////////////////////////////////////
//## // C`PROJNAME'App initialization
//## 
//## BOOL C`PROJNAME'App::InitInstance()
//## {
//## 	Enable3dControls();
//## 	SetDialogBkColor();
//## 	AfxOleInit();
//## 	
//## 	CWnd* parentWnd = 0;
//## 					end pattern interface
//## 					begin pattern `active_values'
//## 	$$FmAttachAv("AVNAMES", (XtPointer)`AVADDRS'AVNAMES);$\n$
//## 					end pattern `active_values'
//## 					begin pattern module
//## 	FmRegisterCreateFunction("NAME.fm", FmCreate`CREATENAME');
//## 					end pattern module
//## 					begin pattern module
//## 						begin if [ INDEX == 0 ]
//## 							begin if [ TOPOBJ != POPUP_SHELL && TOPOBJ != APP_SHELL ]
//## 								begin message
//## XFaceMaker/Win error: application must have a Shell.
//## 								end message
//## 								stop all
//## 							end if
//## 	m_`NAME' = new CXfm`NAME'(0);
//## 	m_pMainWnd = m_`NAME';
//## 						elseif [ PARENTPATH != "" ]
//## 	parentWnd = FmWGetWidget(m_pMainWnd, 0, "PARENTPATH");
//## 	if(!parentWnd)
//## 		TRACE("Cannot find parent `PARENTPATH' for module NAME\\n");
//## 	m_`NAME' = new CXfm`NAME'(parentWnd);
//## 						ifelse
//## 	m_`NAME' = new CXfm`NAME'(m_pMainWnd);
//## 						end if
//## 					end pattern module
//## 					begin pattern module
//## 						begin if [ MAPPED == 1 || INDEX == 0 ]
//## 	FmShowWidget(m_`NAME');
//## 						end if
//## 					end pattern module
#ifdef XFM_CLIENT_SERVER_MODE
	FmWIPCInit();
#endif
	return TRUE;
}

//## 					begin pattern interface
//## C`PROJNAME'App::~C`PROJNAME'App()
//## {
//## 					end pattern interface
//## 					begin pattern module
//## 						begin if [ INDEX == 0 ]
//## 	if(m_pMainWnd){
//## 		delete m_pMainWnd;
//## 		m_pMainWnd = 0;
//## 	}
//## 						ifelse
//## 	delete m_`NAME';
//## 						end if
//## 					end pattern module
//## 					begin pattern interface
//## }
//## 					end pattern interface
