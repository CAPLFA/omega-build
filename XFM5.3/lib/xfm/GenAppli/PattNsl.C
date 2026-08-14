//## begin pattern cxxclass
//## #include "CLASSINCLUDE" // class header file
//## end pattern cxxclass

//## begin pattern interface
//## Widget _FmCreate`NAME'(String name, Widget parent, Widget * toplevels, Cardinal num_toplevels, Widget ** widgets_return, Cardinal * num_widgets_return, Arg* avs, Cardinal num_avs, Arg* user_args, Cardinal num_user_args, Boolean managed, XtPointer _this);
//## end pattern interface

//
// constructors and destructor
//

//## begin pattern interface
//## NAME::NAME(
//##            String name,
//##            Widget parent,
//##            Arg *args,
//##            Cardinal num_args,
//##            Boolean managed
//##           )  
//## {
//##   initialize(name, parent, args, num_args, managed);
//## }
//## NAME::NAME(
//##            String name,
//##            NslUIC& parent,
//##            Arg *args,
//##            Cardinal num_args,
//##            Boolean managed
//##           ) 
//## {
//##   initialize (name, parent.getWidget(), args, num_args, managed);
//## }
//## 
//## NAME::~`NAME'()
//## {
//##   XtRemoveCallback(widget, XmNdestroyCallback, &NslUIC::widgetDestroyedCallback, this);
//## }
//## end pattern interface



//## begin pattern interface 
//## void
//## NAME::initialize(
//##                  String name,
//##                  Widget parent,
//##                  Arg *args,
//##                  Cardinal num_args,
//##                  Boolean managed
//##                 )
//## {
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
//## begin pattern interface   
//##   widget =  _FmCreate`NAME'(name, parent, 0, 0, &widgetTable, &widgetNum, avs, NUMAVS, args, num_args, managed, this);
//##   XtAddCallback(widget, XmNdestroyCallback, &NslUIC::widgetDestroyedCallback, this);
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
//## CLASSNAME::get`UCNAME'()
//## {
//## begin if [ CTYPE == float ]
//##   XtArgVal val = * (XtArgVal*) &NAME;
//## ifelse
//##   XtArgVal val = (XtArgVal) NAME;
//## end if
//##   if (FmGetValue(widget, "NAME", &val) == 1) 
//## begin if [ CTYPE == float ]
//##     NAME = * (float*) &val;
//## ifelse
//##     NAME = (CTYPE) val;
//## end if
//##   return NAME;
//## }
//## end pattern active_value

//## begin pattern cxxclass
//## // Beginning of XFaceMaker-generated code.
//## //
//## CCODE
//## end pattern cxxclass
