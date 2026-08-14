//{{NO_DEPENDENCIES}}
//
//## begin pattern cmodule
//## 	set global NEXTRESOURCEVALUE = 0
//## 	set global NEXTCONTROLVALUE = 0
//## 	set global NEXTCOMMANDVALUE = 0
//## 	set global MODNAME = INAME
//## 	set global UMODNAME = [ upper INAME ]
//## end pattern cmodule
//## begin pattern widget
//## 	set local IDPREFIX = `'
//## 	set local IDVALUE = `'
//## 	begin if [ defined(MFC_CLASS) && MFC_CLASS != "" ]
//## 		set local IDPREFIX = IDC
//## 		set local IDVALUE = _`UMODNAME'_FIRST_CONTROL_VALUE+NEXTCONTROLVALUE
//## 		set global NEXTCONTROLVALUE = [ NEXTCONTROLVALUE + 1 ]
//## 	end if
//## 	begin if [ MFC_ISMENUITEM == true ]
//## 		set local IDPREFIX = IDM
//## 		set local IDVALUE = _`UMODNAME'_FIRST_COMMAND_VALUE+NEXTCOMMANDVALUE
//## 		set global NEXTCOMMANDVALUE = [ NEXTCOMMANDVALUE + 1 ]
//## 	end if
//## 	begin if [ IDVALUE != "" ]
//## 		set local ID = `IDPREFIX'_`UMODNAME'_`NAME'_`INDEX'
//## 		set local ID = [ upper ID ]
//## #define ID IDVALUE
//## 	end if
//## 	recursive pattern widget
//## end pattern widget

//## 					begin pattern cmodule
//## #define _`UMODNAME'_NEXT_RESOURCE_VALUE _`UMODNAME'_FIRST_RESOURCE_VALUE+NEXTRESOURCEVALUE
//## #define _`UMODNAME'_NEXT_CONTROL_VALUE _`UMODNAME'_FIRST_CONTROL_VALUE+NEXTCONTROLVALUE
//## #define _`UMODNAME'_NEXT_COMMAND_VALUE _`UMODNAME'_FIRST_COMMAND_VALUE+NEXTCOMMANDVALUE
//## 					end pattern cmodule

//## 					begin pattern globalvar [ VARNAME != __FaceDevNullVariable__ && VARCNAME != __extern__ && VARSTATIC != 2 && VARSTATIC != 3]
//## 						begin if [ ! (VARNAME { DECLAREDGLOBALS) ]
//## #ifdef _GLOBVAR_VXfm`VARNAME'_DECLARED_
//## #define _GLOBVAR_VXfm`VARNAME'_`MODNAME'_ extern
//## #else
//## #define _GLOBVAR_VXfm`VARNAME'_`MODNAME'_ /**/
//## #define _GLOBVAR_VXfm`VARNAME'_DECLARED_
//## #endif
//## 							set global DECLAREDGLOBALS = DECLAREDGLOBALS VARNAME
//## 						end if
//## 					end pattern globalvar
