//{{NO_DEPENDENCIES}}
//

//## 					begin pattern interface
//## 						set global LASTMODULE = `'
//## 					end pattern interface

//## 					begin pattern module
//## 						begin if [ SHORTNAMES ]
//## 							set local MODNAME5 = [ (lower NAME) left 5 ]
//## 						ifelse
//## 							set local MODNAME5 = NAME
//## 						end if
//## 						set local UMODNAME = [ upper NAME ]
//## 						begin if [ LASTMODULE == "" ]
//## #define _`UMODNAME'_FIRST_RESOURCE_VALUE 	101
//## #define _`UMODNAME'_FIRST_CONTROL_VALUE	1001
//## #define _`UMODNAME'_FIRST_COMMAND_VALUE	32771
//## 						ifelse
//## #define _`UMODNAME'_FIRST_RESOURCE_VALUE 	_`LASTMODULE'_NEXT_RESOURCE_VALUE+1
//## #define _`UMODNAME'_FIRST_CONTROL_VALUE	_`LASTMODULE'_NEXT_CONTROL_VALUE+1
//## #define _`UMODNAME'_FIRST_COMMAND_VALUE	_`LASTMODULE'_NEXT_COMMAND_VALUE+1
//## 						end if
//## 
//## #include "`MODNAME5'Fmr.h"
//## 
//## 						set global LASTMODULE = UMODNAME
//## 					end pattern module

//## 					begin pattern interface
//## #define _APS_NEXT_RESOURCE_VALUE 	_`LASTMODULE'_NEXT_RESOURCE_VALUE+1
//## #define _APS_NEXT_CONTROL_VALUE	_`LASTMODULE'_NEXT_CONTROL_VALUE+1
//## #define _APS_NEXT_SYMED_VALUE	101
//## #define _APS_NEXT_COMMAND_VALUE	_`LASTMODULE'_NEXT_COMMAND_VALUE+1
//## 					end pattern interface
