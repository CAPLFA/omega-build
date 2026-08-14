//## 					begin pattern interface
//## 						//## Pattern file for the main header
//## 						//## file of the Windows appli.
//## 						//## 
//## 						begin if [ SHORTNAMES ]
//## 							set global PROJNAME = NAME
//## 							set global LPROJNAME5 = [ lower ( NAME left 5 ) ]
//## 							set global LPROJNAME8 = [ lower ( NAME left 8 ) ]
//## 						ifelse
//## 							set global PROJNAME = NAME
//## 							set global LPROJNAME5 = NAME
//## 							set global LPROJNAME8 = NAME
//## 						end if
//## // `LPROJNAME8'.h : main header file for the `UPROJNAME' application
//## //
//## 
//## #ifndef __AFXWIN_H__
//## 	#error include 'stdafx.h' before including this file for PCH
//## #endif
//## 
//## #include "`LPROJNAME5'Res.h"       // symbols for module NAME
//## 
//## /////////////////////////////////////////////////////////////////////////////
//## // C`PROJNAME'App:
//## // See `LPROJNAME8'.cpp for the implementation of this class
//## //
//## 
//## class C`PROJNAME'App : public CWinApp
//## {
//## public:
//## 	C`PROJNAME'App();
//## 	~C`PROJNAME'App();
//## 
//## private:
//## 					end pattern interface
//## 					begin pattern module
//## 	CXfm`NAME'* m_`NAME';
//## 					end pattern module
//## 					begin pattern interface
//## 
//## // Overrides
//## 	virtual BOOL InitInstance();
//## 
//## // Implementation
//## 
//## 	//{{AFX_MSG(C`PROJNAME'App)
//## 		// NOTE - the ClassWizard will add and remove member functions here.
//## 		//    DO NOT EDIT what you see in these blocks of generated code !
//## 	//}}AFX_MSG
//## 	DECLARE_MESSAGE_MAP()
//## };
//## end pattern interface

/////////////////////////////////////////////////////////////////////////////
