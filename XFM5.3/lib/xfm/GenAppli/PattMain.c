/*
 *  XFaceMaker 4.0 Application Main Function
 */

/*## begin pattern interface ##*/
/*## set global RDBMODE = RDBMODE ##*/
/*## set global UILMODE = UILMODE ##*/
/*## begin if [ UILMODE == 1 ] ##*/
/*## 	set global UIDFILESPATH = `' ##*/
/*## end if ##*/
/*## end pattern interface ##*/

#include <stdio.h>
#ifndef STANDALONE
#include <Fm.h>
#else
#include <Xm/Xm.h>
#endif

/*## 			begin pattern define [ VARNAME left (length _XFM_EXT_BUILD_INIT_FUNCTION_) == _XFM_EXT_BUILD_INIT_FUNCTION_ ] ##*/
/*## #if NeedFunctionPrototypes ##*/
/*## extern void VALUE(void); ##*/
/*## #else ##*/
/*## extern void VALUE(); ##*/
/*## #endif ##*/
/*## 			end pattern define ##*/

/*## begin pattern interface ##*/
/*## #include "`NAME'App.h" ##*/
/*## end pattern interface ##*/

#ifndef REMOTE

#ifdef CCODE
#if NeedFunctionPrototypes
/*## begin pattern interface ##*/
/*## $$extern Widget FmCreate`CREATENAMES'(String,Widget,ArgList,Cardinal);$\n$ ##*/
/*## end pattern interface ##*/
#else /* NeedFunctionPrototypes */
/*## begin pattern interface ##*/
/*## $$extern Widget FmCreate`CREATENAMES'();$\n$ ##*/
/*## end pattern interface ##*/
#endif /* NeedFunctionPrototypes */
#endif

#endif /* REMOTE */

#ifdef REMOTE

#if NeedFunctionPrototypes
extern int FaceIPCConnectApplication(Widget, char*);
#else /* NeedFunctionPrototypes */
extern int FaceIPCConnectApplication();
#endif /* NeedFunctionPrototypes */

static XrmOptionDescRec AddressOptions[] = {
	{"-host", "*xfmRemoteHost", XrmoptionSepArg},
	{"-port", "*xfmRemotePort", XrmoptionSepArg},
};

#define options 	AddressOptions
#define num_options 	XtNumber(AddressOptions)

#else /* REMOTE */

#define options 	0
#define num_options 	0

#endif /* REMOTE */

main(
#if NeedFunctionPrototypes
int argc, char **argv)
#else
argc, argv)
int argc;
char **argv;
#endif
{
	Widget toplevel, parent;
/*## begin pattern interface ##*/
/*## 	Widget w[NUMNAMES]; ##*/
/*## end pattern interface ##*/
	int i;
	XtAppContext app_context;
	static char **fallback = NULL;
	/*
	 * Initialize toolkit.
	 */
/*## begin pattern module ##*/
/*## 	set local NAMEFM = NAME.fm ##*/
/*## 	begin if [ FILE != NAMEFM ] ##*/
/*## 		begin if [ FILE right 3 == ".fm" ] ##*/
/*## 			set local BASEFILE = [ FILE left (length FILE - 3) ] ##*/
/*## 		ifelse ##*/
/*## 			set local BASEFILE = FILE ##*/
/*## 		end if ##*/
/*## 		set local MODULEDIR = [ BASEFILE left (length BASEFILE - length BASENAME) ] ##*/
/*## 		begin if [ UIDFILESPATH == "" ]
/*## 			set global UIDFILESPATH = MODULEDIR%U ##*/
/*## 		ifelse ##*/
/*## 			set global UIDFILESPATH = UIDFILESPATH:MODULEDIR%U ##*/
/*## 		end if ##*/
/*## 	end if ##*/
/*## end pattern module ##*/
/*## begin pattern interface ##*/
/*## 		begin if [ RDBMODE == 1 ] ##*/
/*## #ifndef CALLEDITOR ##*/
/*## 	if(!getenv("XUSERFILESEARCHPATH")) ##*/
/*## 		putenv("XUSERFILESEARCHPATH=%N.ad"); ##*/
/*## #endif ##*/
/*## 		end if ##*/
/*## 		begin if [ UILMODE == 1 && UIDFILESPATH != "" ] ##*/
/*## #ifndef CALLEDITOR ##*/
/*## 	if(!getenv("UIDPATH")) ##*/
/*## 		putenv("UIDPATH=UIDFILESPATH"); ##*/
/*## #endif ##*/
/*## 		end if ##*/
/*## #if defined(CCODE) && defined(STANDALONE) ##*/
/*## 	toplevel = XtAppInitialize(&app_context, "UCNAME", options, num_options, &argc, argv, fallback, 0, 0); ##*/
/*## #else ##*/
/*## 	toplevel = FmAppInitialize(&app_context, "UCNAME", options, num_options, &argc, argv, fallback, 0, 0); ##*/
/*## #endif ##*/
/*## end pattern interface ##*/
	
/*## 			begin pattern define [ VARNAME left (length _XFM_EXT_BUILD_C_INIT_FUNCALL_) == _XFM_EXT_BUILD_C_INIT_FUNCALL_ ] ##*/
/*## 	VALUE ##*/
/*## 			end pattern define ##*/

	XnslRegisterConverters();

#ifndef CCODE
	/*
	 * Call initialization routines for extension libraries.
	 */
/*## 			begin pattern define [ VARNAME left (length _XFM_EXT_BUILD_INIT_FUNCALL_) == _XFM_EXT_BUILD_INIT_FUNCALL_ ] ##*/
/*## 	VALUE ##*/
/*## 			end pattern define ##*/
	
	/*
	 * Attach application functions.
	 */
/*## begin pattern `function' [ ! defined NAMESPACE ]  ##*/
/*## 	FmAttachFunction("NAME", (FaceFunctionPtr)CNAME, "TYPE", NUMARGS$$, "ARGTYPES"$$); ##*/
/*## end pattern `function' ##*/
#ifndef CALLEDITOR
	/*
	 * Load user-defined classes.
	 */
/*## begin pattern `user_class' ##*/
/*## 	FmLoadWidgetClass("UCLASSNAME", "UCLASSFILE.fm"); ##*/
/*## end pattern `user_class' ##*/
#endif
#endif
	
#ifndef STANDALONE
	/*
	 * Attach active values.
	 */
/*## begin pattern `active_values' ##*/
/*## 	$$FmAttachAv("AVNAMES", (XtPointer)`AVADDRS'AVNAMES);$\n$ ##*/
/*## end pattern `active_values' ##*/
#endif
	
#ifndef REMOTE

#ifdef CCODE

#ifndef STANDALONE
	/*
	 * Register creation functions for dynamic creation
	 * in FACE scripts.
	 */
/*## begin pattern module ##*/
/*## 	FmRegisterCreateFunction("NAME.fm", (FmCreationFunction)FmCreate`CREATENAME'); ##*/
/*## end pattern module ##*/
#endif /* STANDALONE*/
	
	/*
	 * Call interface creation functions.
	 */
/*## begin pattern module TOPOBJ = APP_SHELL ##*/
/*## 	w[INDEX] = toplevel = FmCreate`CREATENAME'(0, toplevel, 0, 0); ##*/
/*## end pattern module ##*/
/*## begin pattern module TOPOBJ # APP_SHELL PARENTPATH = `' ##*/
/*## 	w[INDEX] = FmCreate`CREATENAME'(0, toplevel, 0, 0); ##*/
/*## end pattern module ##*/
/*## begin pattern module TOPOBJ # APP_SHELL PARENTPATH # `' ##*/
/*## 	parent = XtNameToWidget(toplevel, "PARENTPATH"); ##*/
/*## 	if(parent) ##*/
/*## 		w[INDEX] = FmCreate`CREATENAME'(0, parent, 0, 0); ##*/
/*## 	else  ##*/
/*## 		fprintf(stderr, "Cannot find parent widget `PARENTPATH'.\\n"); ##*/
/*## end pattern module ##*/
#else
#ifndef CALLEDITOR
	/*
	 * Load interface files.
	 */
/*## begin pattern module ##*/
/*##  		begin if [ RDBMODE == 1 ] ##*/
/*## 			set local FMSUFFIX = _rdb ##*/
/*## 		ifelse ##*/
/*## 			set local FMSUFFIX = `' ##*/
/*## 		end if ##*/
/*## 		begin if [ TOPOBJ == APP_SHELL ] ##*/
/*## 	w[INDEX] = toplevel = FmLoadCreate(0, "`FILE'`FMSUFFIX'", toplevel, 0, 0); ##*/
/*## 		ifelse ##*/
/*## 			begin if [ PARENTPATH == "" ] ##*/
/*## 	w[INDEX] = FmLoadCreate(0, "`FILE'`FMSUFFIX'", toplevel, 0, 0); ##*/
/*## 			ifelse ##*/
/*## 	parent = XtNameToWidget(toplevel, "PARENTPATH"); ##*/
/*## 	if(parent) ##*/
/*## 		w[INDEX] = FmLoadCreate(0, "`FILE'`FMSUFFIX'", parent, 0, 0); ##*/
/*## 	else  ##*/
/*## 		fprintf(stderr, "Cannot find parent widget `PARENTPATH'.\\n"); ##*/
/*## 			end if ##*/
/*## 		end if ##*/
/*## end pattern module ##*/
#endif
#endif

#endif /* REMOTE */

#ifdef REMOTE
	
	FaceIPCConnectApplication(toplevel, argv[0]);
	
#endif /* REMOTE */

#ifndef REMOTE

	/*
	 * Show widgets.
	 */
#ifndef CALLEDITOR
#ifdef STANDALONE
/*## begin pattern module MAPPED = 1 TOPOBJ = APP_SHELL ##*/
/*## 	XtRealizeWidget(w[INDEX]); ##*/
/*## end pattern module ##*/
/*## begin pattern module MAPPED = 1 TOPOBJ = POPUP_SHELL ##*/
/*## 	XtPopup(w[INDEX], False); ##*/
/*## end pattern module ##*/
/*## begin pattern module MAPPED = 1 TOPOBJ = MANAGED_WIDGET ##*/
/*## 	XtManageChild(w[INDEX]); ##*/
/*## end pattern module ##*/
#else
/*## begin pattern module MAPPED = 1 ##*/
/*## 	FmShowWidget(w[INDEX]); ##*/
/*## end pattern module ##*/
#endif
#endif

#endif /* REMOTE */

	/*
	 * Enter main event loop.
	 */
#ifdef CALLEDITOR
	FmCallEditor();
#else
#ifdef STANDALONE
	XtAppMainLoop(app_context);
#else
	FmLoop();
#endif
#endif
}
