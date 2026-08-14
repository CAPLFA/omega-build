/*
 *  Main program for building a new instance of XFaceMaker 4.0.
 */

#include <stdio.h>
#include <Fm.h>
/*## 					begin pattern define [ VARNAME left (length _XFM_EXT_BUILD_INCLUDES) == _XFM_EXT_BUILD_INCLUDES ] ##*/
/*## VALUE ##*/
/*## 					end pattern ##*/

/*## 					begin pattern define [ VARNAME left (length _XFM_EXT_DECLS_) == _XFM_EXT_DECLS_ ] ##*/
/*## 	VALUE ##*/
/*## 					end pattern define ##*/

#ifndef CCODE

/*## 					begin pattern struct [ defined NAMESPACE && defined CNAME && CNAME != "" ] ##*/
/*## static FmFieldDesc `NAME'_fields[] = { ##*/
/*## 						begin pattern struct_field ##*/
/*## 	FmField(__CNAME, "TYPE", "NAME", NAME) ##*/
/*## 						end pattern struct_field ##*/
/*## }; ##*/
/*## 					end pattern struct ##*/

/*## 					begin pattern struct [ defined NAMESPACE && defined CNAME && CNAME != "" ] ##*/
/*## 						set global NUM_STRUCTS = [ NUM_STRUCTS + 1 ] ##*/
/*## 					end pattern struct ##*/
/*## 					begin pattern interface ##*/
/*## 						begin if [ NUM_STRUCTS > 0 ] ##*/
/*## static FmStructDesc FaceStructs[] = { ##*/
/*## 						end if ##*/
/*## 					end pattern interface ##*/
/*## 					begin pattern struct [ defined NAMESPACE && defined CNAME && CNAME != "" ] ##*/
/*## 	{"NAME", "CNAME", `NAME'_fields, XtNumber(`NAME'_fields), ID_FIELD, ID_VALUE}, ##*/
/*## 						set global NUM_STRUCTS = [ NUM_STRUCTS + 1 ]
/*## 					end pattern struct ##*/
/*## 					begin pattern interface ##*/
/*## 						begin if [ NUM_STRUCTS > 0 ] ##*/
/*## }; ##*/
/*## 						end if ##*/
/*## 					end pattern interface ##*/

#endif /* CCODE */

/*## 					begin pattern interface ##*/
/*## 						set global EXT_E_FUNC = XnslInitUnknownExtension ##*/
/*## 					end pattern interface ##*/

/*## 					begin pattern define [ VARNAME left (length _XFM_EXT_BUILD_INIT_FUNCTION) == _XFM_EXT_BUILD_INIT_FUNCTION ] ##*/
/*## 						set global EXT_E_FUNC = VALUE ##*/
/*## 					end pattern define ##*/


#ifndef CCODE
	
void
/*## 					begin pattern interface ##*/
/*## EXT_E_FUNC() ##*/
/*## 					end pattern interface ##*/
{
	FmFunctionsVector *fns = FmGetFunctionsVector();

/*## 					begin pattern define [ VARNAME left (length _XFM_EXT_CODE_) == _XFM_EXT_CODE_ ] ##*/
/*## 	VALUE ##*/
/*## 					end pattern define ##*/

/*## 					begin pattern define [ VARNAME left (length _XFM_EXT_CLASS_RESOURCE_EDITOR) == _XFM_EXT_CLASS_RESOURCE_EDITOR ] ##*/
/*## 	(*fns->add_boot_file)(VALUE); ##*/
/*## 					end pattern define ##*/

/*## begin pattern `function' [ defined NAMESPACE ] ##*/
/*## 	(*fns->attach_function)("NAME", (FaceFunctionPtr)CNAME, "TYPE", NUMARGS$$, "ARGTYPES"$$); ##*/
/*## end pattern `function' ##*/
	
/*## 					begin pattern enum [ defined NAMESPACE ] ##*/
/*## 						begin oneline ##*/
/*## 	(*fns->add_enumerated_type)("NAME", " ##*/
/*## 							begin pattern enum_value ##*/
/*## STRING=SYMBOL=DEFINE\\n ##*/
/*## 							end pattern enum_value ##*/
/*## ", 0, 0); ##*/
/*## 						end oneline ##*/
/*## 					end pattern enum ##*/
	
/*## 					begin pattern typedef [ defined NAMESPACE ] ##*/
/*## 						begin if [ REPNAME == 0 ] ##*/
/*## 							set local RN = 0 ##*/
/*## 						ifelse ##*/
/*## 							set local RN = "REPNAME" ##*/
/*## 						end if ##*/
/*## 	(*fns->add_representation)("NAME", RN, "CTYPE", sizeof(CTYPE), ALIGNED, INDIRECT); ##*/
/*## 					end pattern typedef ##*/

/*## 					begin pattern enum [ defined NAMESPACE ] ##*/
/*## 	(*fns->new_type)("NAME"); ##*/
/*## 					end pattern enum ##*/
/*## 					begin pattern typedef [ defined NAMESPACE ] ##*/
/*## 	(*fns->new_type)("NAME"); ##*/
/*## 					end pattern typedef ##*/

/*## 					begin pattern define [ defined NAMESPACE && ((VARNAME left (length _XFM_EXT_) != "_XFM_EXT_") || (VARNAME left (length _XFM_EXT_BUILD_) == "_XFM_EXT_BUILD_")) ] ##*/
/*## 						begin if [ VARCNAME == "" ] ##*/
/*## 							begin if [ VARTYPE == String ] ##*/
/*## 								set local V = [ cstring VALUE ] ##*/
/*## 							ifelse ##*/
/*## 								set local V = VARNAME ##*/
/*## 							end if ##*/
/*## 						ifelse ##*/
/*## 							set local V = VARCNAME ##*/
/*## 						end if ##*/
/*## 	(*fns->new_predefined_variable)("VARNAME", (XtArgVal)V, "VARTYPE"); ##*/
/*## 					end pattern define ##*/
	
/*## 					begin pattern interface ##*/
/*## 						begin if [ NUM_STRUCTS > 0 ]
/*## 	(*fns->register_structures)(FaceStructs, XtNumber(FaceStructs)); ##*/
/*## 						end if ##*/
/*## 					end pattern interface ##*/

}
#else /* !CCODE */
static void nraf(){printf("dummy\n");}
#endif /* !CCODE */
