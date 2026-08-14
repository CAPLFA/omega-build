/*
 *  XFaceMaker 4.0 Application Functions Declarations.
 */

#ifndef STANDALONE
#include <Fm.h>
#endif
/*## 					begin pattern define [ VARNAME left (length _XFM_EXT_BUILD_INCLUDES) == _XFM_EXT_BUILD_INCLUDES ] ##*/
/*## VALUE ##*/
/*## 					end pattern ##*/

/*## begin pattern `active_values' ##*/
/*## $$extern AVTYPES AVNAMES;$\n$ ##*/
/*## end pattern `active_values' ##*/

#if NeedFunctionPrototypes
/*## begin pattern `function' [ ! defined NAMESPACE && ! (CNAME } "::") ] ##*/
/*## extern CTYPE CNAME($$CARGTYPES ARGNAMES$, $); ##*/
/*## end pattern `function' ##*/
#else /* NeedFunctionPrototypes */
/*## begin pattern `function' [ ! defined NAMESPACE && ! (CNAME } "::") ] ##*/
/*## extern CTYPE CNAME(); ##*/
/*## end pattern `function' ##*/
#endif /* NeedFunctionPrototypes */
