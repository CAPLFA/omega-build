/*
 *  Main program for building a new instance of XFaceMaker 4.0 .
 */

#include <stdio.h>
#include <Fm.h>

/*## 			begin pattern define [ VARNAME left (length _XFM_EXT_BUILD_INIT_FUNCTION_) == _XFM_EXT_BUILD_INIT_FUNCTION_ ] ##*/
/*## #if NeedFunctionPrototypes ##*/
/*## extern void VALUE(void); ##*/
/*## #else ##*/
/*## extern void VALUE(); ##*/
/*## #endif ##*/
/*## 			end pattern define ##*/

/*## begin pattern `function' [ ! defined NAMESPACE ] ##*/
/*## begin user ##*/
/*## end user ##*/
/*## #if NeedFunctionPrototypes ##*/
/*## CTYPE CNAME($$CARGTYPES ARGNAMES$, $) ##*/
/*## #else ##*/
/*## CTYPE CNAME($$ARGNAMES$, $) ##*/
/*## $$CARGTYPES ARGNAMES;$\n$ ##*/
/*## #endif ##*/
/*## { ##*/
/*## begin user ##*/
/*## end user ##*/
/*## } ##*/
/*## end pattern `function' ##*/

main(argc, argv)
int argc;
char **argv;
{
	Widget toplevel, parent;
	
/*## begin pattern interface ##*/
/*## 	toplevel = FmAppInitialize(0, "UCNAME", 0, 0, &argc, argv, 0, 0, 0); ##*/
/*## end pattern interface ##*/
	
#ifndef CCODE
/*## 			begin pattern define [ VARNAME left (length _XFM_EXT_BUILD_INIT_FUNCALL_) == _XFM_EXT_BUILD_INIT_FUNCALL_ ] ##*/
/*## 	VALUE ##*/
/*## 			end pattern define ##*/
	
/*## begin pattern `function' [ ! defined NAMESPACE ] ##*/
/*## 	FmAttachFunction("NAME", (FaceFunctionPtr)CNAME, "TYPE", NUMARGS$$, "ARGTYPES"$$); ##*/
/*## end pattern `function' ##*/
#endif
	
	FmCallEditor();
}
