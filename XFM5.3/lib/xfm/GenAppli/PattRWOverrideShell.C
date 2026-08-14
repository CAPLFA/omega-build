#include <Fm.h>
#include <rw/Xrw/Util.h>

//## begin pattern cxxclass
//## #include "CLASSINCLUDE"
//## end pattern cxxclass

//## begin pattern interface
//## Widget _FmCreate`NAME'(String name, Widget parent, Widget * toplevels, Cardinal num_toplevels, Widget ** widgets_return, Cardinal * num_widgets_return, Arg* avs, Cardinal num_avs, Arg* user_args, Cardinal num_user_args, Boolean managed, XtPointer _this);
//## end pattern interface

//## begin pattern interface
//## // constructors
//## NAME::NAME(RWController* parent, const RWCString& name, RWBoolean managed)
//## end pattern interface
//## begin pattern cxxclass
//##  : BASECLASS(parent, name, managed)
//## end pattern cxxclass
//## begin pattern interface
//## {
//##   initialize(parent, name);
//## }
//## NAME::NAME(RWController* parent, const RWCString& name, ArgList args, Cardinal argcnt, RWBoolean popup, RWBoolean managed)
//## end pattern interface
//## begin pattern cxxclass
//##  : BASECLASS(parent, name, args, argcnt, popup, managed)
//## end pattern cxxclass
//## begin pattern interface
//## {
//##   initialize(parent, name);
//## }
//## NAME::NAME(RWController* parent, const RWCString& name, const RWResourceObj& resObj, RWBoolean managed)
//## end pattern interface
//## begin pattern cxxclass
//##  : BASECLASS(parent, name, resObj, managed)
//## end pattern cxxclass
//## begin pattern interface
//## {
//##   initialize(parent, name);
//## } 
//## NAME::NAME(RWController* parent, RWResourceObj* resObj)
//## end pattern interface
//## begin pattern cxxclass
//##  : BASECLASS(parent,  resObj)
//## end pattern cxxclass
//## begin pattern interface
//## {
//##   initialize(parent, "");
//## }
//## end pattern interface


// initialization function - must be called by the constructors

//## begin pattern interface
//## void 
//## NAME::initialize(RWController* parent, const RWCString& name)
//## {
//## end pattern interface
//## //
//## // set resources values specified in the .fm file
//## //
//## begin pattern resource
//##   {
//##     XrmValue from, to;
//##     CTYPE result;
//##     from.size = strlen(VALUE);
//##     from.addr = VALUE;
//##     to.size = sizeof(result);
//##     to.addr = (XPointer) &result;
//##     convertAndStore("String", &from, "CTYPE", &to);
//##     set`UCNAME'(result);
//##   }
//## end pattern resource
//## //
//## // prepare call to _FmCreate...
//## // 
//## begin pattern interface
//##   Widget* widgetTable;
//##   Cardinal widgetNum;
//##   int n = 0;
//## end pattern interface
//## begin pattern interface NUMAVS = 0
//##   Arg* avs = 0;
//## end pattern interface
//## begin pattern interface NUMAVS # 0
//##   Arg avs[NUMAVS];
//## end pattern interface
//## begin pattern active_value STORAGE = AV_OBJECT 
//##   XtSetArg(avs[n], "NAME", &NAME); n++;
//## end pattern active_value
//## //
//## // call _FmCreate... to build the widget tree and initialize the active values
//## //
//## begin pattern interface   
//##   Widget toplevels[1];
//##   toplevels[0] = getWidget();
//##   (void)  _FmCreate`NAME'((String) (const char*) name, parent->getWidget(), toplevels, 1, &widgetTable, &widgetNum, avs, NUMAVS, 0, 0, False, this);
//## }
//## end pattern interface



//
// plain member functions
//

//## begin pattern active_value STORAGE = AV_NONE
//## 	begin if [ CRETTYPE == void ]
//## void
//## 	ifelse
//## CRETTYPE 
//## 	end if
//## CLASSNAME::NAME($$CARGTYPES ARGNAMES$, $)
//## {
//## 	set local ARGLIST = `'
//## 	begin pattern methodarg
//## 		begin if [ CARGTYPE == float ]
//## 			set local __ARGLIST = __ARGLIST`, '*(XtArgVal*)&ARGNAME
//## 		ifelse
//## 			set local __ARGLIST = __ARGLIST`, 'ARGNAME
//## 		end if
//## 	end pattern methodarg
//## 	begin if [ CRETTYPE == void ]
//##   FmCallValue(widget, "NAME", NUMARGS ARGLIST);
//## 	elseif [ CRETTYPE == float ]
//##   XtArgVal _tmp = FmCallValue(widget, "NAME", NUMARGS ARGLIST);
//##   return *(float*)&_tmp;
//## 	ifelse
//##   return (CRETTYPE) FmCallValue(widget, "NAME", NUMARGS ARGLIST);
//## 	end if
//## }
//## end pattern active_value

//
// access functions for data members
//

//## begin pattern active_value STORAGE = AV_OBJECT GENFUN = 1
//## void 
//## CLASSNAME::set`UCNAME'(CTYPE val)
//## {
//## begin if [ CTYPE == float ]
//##   XtArgVal tmpval = * (XtArgVal*) &val;
//## ifelse
//##   XtArgVal tmpval = (XtArgVal) val;
//## end if
//##   FmSetValue(widget, "NAME", &tmpval);
//## begin if [ CTYPE == float ]
//##   NAME = * (float*) &tmpval;
//## ifelse
//##   NAME = (CTYPE) tmpval;
//## end if
//## }
//## 
//## CTYPE 
//## CLASSNAME::get`UCNAME'(CTYPE* val)
//## {
//## begin if [ CTYPE == float ]
//##   XtArgVal tmpval = * (XtArgVal*) &NAME;
//## ifelse
//##   XtArgVal tmpval = (XtArgVal) NAME;
//## end if
//##   if (FmGetValue(widget, "NAME", &tmpval) == 1) 
//## begin if [ CTYPE == float ]
//##     NAME = * (float*) &tmpval;
//## ifelse
//##     NAME = (CTYPE) tmpval;
//## end if
//##   if (val) *val = NAME;
//##   return NAME;
//## }
//## end pattern active_value

//## begin pattern cxxclass
//## // Beginning of XFaceMaker-generated code.
//## //
//## CCODE
//## end pattern cxxclass
