//## 					begin pattern interface
//## 						begin if [ SHORTNAMES ]
//## 							set global PROJNAME = NAME
//## 							set global LPROJNAME = [ lower ( NAME left 8 ) ]
//## 						ifelse
//## 							set global PROJNAME = NAME
//## 							set global LPROJNAME = NAME
//## 						end if
//## // `LPROJNAME'app.h : declarations of application functions
//## // for the `UPROJNAME' application
//## //
//## 					end pattern interface

//## 					begin pattern module
//## 						begin if [ SHORTNAMES ]
//## 							set local LMODNAME5 = [ lower ( NAME left 5 ) ]
//## 						ifelse
//## 							set local LMODNAME5 = NAME
//## 						end if
//## 					end pattern module

#ifndef __AFXWIN_H__
	#error include 'stdafx.h' before including this file for PCH
#endif

//## 					begin pattern `active_values'
//## $$extern AVTYPES AVNAMES;$\n$
//## 					end pattern `active_values'

//## 					begin pattern `function' [ ! (CNAME } "::") ]
//## extern CTYPE CNAME($$CARGTYPES ARGNAMES$, $);
//## 					end pattern `function'
