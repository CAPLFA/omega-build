//## 					begin pattern interface
//## 						begin if [ SHORTNAMES ]
//## 							set global PROJNAME = NAME
//## 							set global LPROJNAME = [ lower ( NAME left 8 ) ]
//## 							set global LPROJNAME8 = [ LPROJNAME left 8 ]
//## 							set global LPROJNAME5 = [ LPROJNAME left 5 ]
//## 						ifelse
//## 							set global PROJNAME = NAME
//## 							set global LPROJNAME = NAME
//## 							set global LPROJNAME8 = NAME
//## 							set global LPROJNAME5 = NAME
//## 						end if
//## // `LPROJNAME5'app.cpp : definitions of application functions
//## // for the `UPROJNAME' application
//## 					end pattern interface
//

//## 					begin pattern module
//## 						begin if [ SHORTNAMES ]
//## 							set local LMODNAME5 = [ lower ( NAME left 5 ) ]
//## 						ifelse
//## 							set local LMODNAME5 = NAME
//## 						end if
//## 					end pattern module

#include "stdafx.h"
#include <xfmwin.h>
//## 					begin pattern module
//## #include "`LMODNAME5'Xfm.h"
//## 					end pattern module
//## 					begin pattern interface
//## #include "`LPROJNAME8'.h"
//## 					end pattern interface

#ifdef _DEBUG
#undef THIS_FILE
static char BASED_CODE THIS_FILE[] = __FILE__;
#endif

//## 					begin pattern `active_values'
//## $$AVTYPES AVNAMES;$\n$
//## 					end pattern `active_values'

//## 					begin pattern `function' [ ! (CNAME } "::") ]
//## 						begin user
//## 						end user
//## CTYPE CNAME($$CARGTYPES ARGNAMES$, $)
//## {
//## 						begin user
//## #ifdef XFM_CLIENT_SERVER_MODE
//## 				begin if [ CTYPE != void ]
//## 	return((CTYPE)
//## 		_FaceIPCVaCallFunction(_FmInterfaceConnection,
//## 				ifelse
//## 	_FaceIPCVaCallFunction(_FmInterfaceConnection,
//## 				end if
//## 			"CNAME",
//## 			"TYPE",
//## 			$$"ARGTYPES", ARGNAMES,$\n$
//## 				begin if [ CTYPE != void ]
//## 			0));
//## 				ifelse
//## 			0);
//## 				end if
//## #else
//## 	TRACE("Application function CNAME not yet defined.\\n");
//## 	begin if [ CTYPE != void ]
//## 	return((CTYPE)0);
//## 	end if
//## #endif
//## 						end user
//## }
//## 
//## 					end pattern `function'
	
