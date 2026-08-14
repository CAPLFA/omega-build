/******************************************************************************
*******************************************************************************
*
*  (c) Copyright 1990,1991 Nova Software Labs S.A.
*  ALL RIGHTS RESERVED
*
*  	THIS SOFTWARE IS FURNISHED UNDER A LICENSE AND MAY BE USED
*  AND COPIED ONLY IN ACCORDANCE WITH THE TERMS OF SUCH LICENSE AND
*  WITH THE INCLUSION OF THE ABOVE COPYRIGHT NOTICE.  THIS SOFTWARE OR
*  ANY OTHER COPIES THEREOF MAY NOT BE PROVIDED OR OTHERWISE MADE
*  AVAILABLE TO ANY OTHER PERSON.  NO TITLE TO AND OWNERSHIP OF THE
*  SOFTWARE IS HEREBY TRANSFERRED.
*
*  	THE INFORMATION IN THIS SOFTWARE IS SUBJECT TO CHANGE WITHOUT
*  NOTICE AND SHOULD NOT BE CONSTRUED AS A COMMITMENT BY
*  Nova Software Labs S.A. OR ITS THIRD PARTY SUPPLIERS.
*
*  	Nova Software Labs S.A. AND ITS THIRD PARTY SUPPLIERS,
*  ASSUME NO RESPONSIBILITY FOR THE USE OR INABILITY TO USE ANY OF ITS
*  SOFTWARE .   Nova Software Labs S.A SOFTWARE IS PROVIDED "AS IS"
*  WITHOUT WARRANTY OF ANY KIND, AND NSL EXPRESSLY DISCLAIMS ALL
*  IMPLIED WARRANTIES, INCLUDING BUT NOT LIMITED TO THE IMPLIED
*  WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE.
*
*  (c) Copyright 1990, Nova Software Labs S.A.  Unpublished - all
*  rights reserved under the Copyright laws of France
*
*  Nova Software Labs S.A.
*  57-59 rue Lhomond,
*  75005 Paris.
*  France.
*
* XFaceMaker is a registered trademark of Nova Software Labs S.A.
*
*******************************************************************************
******************************************************************************/

/***********************************************************************
 ***********************************************************************
 *
 *                     (C) Copyright 1991, NSL
 *
 *	Module: 	FmCommon.h
 *
 *	Project: 	XFM2
 *
 *	Author: 	[ed]
 *
 *	Date: 		November 1991
 *
 *	Description: 	Include file for use by XFM2 applications
 *			(OSF/Motif version).
 *
 ***********************************************************************
 **********************************************************************/

#ifndef _FMCOMMON_H_
#define _FMCOMMON_H_

/***********************************************************************
 *
 * 1. Type declarations and macro definitions
 *
 **********************************************************************/

/*
 * XFM version number.
 */
#define XFM_VERSION	5
#define XFM_REVISION	3

/*
 * Defines for 'type' argument to FmAddWidgetClass function.
 */
typedef int FmWidgetType;

#define	FM_PRIMITIVE	0	/* Primitive Widget */
#define	FM_COMPOSITE	1	/* Composite Widget */
#define	FM_SHELL	2	/* Shell Widget */
#define	FM_MENUCASCADE	3	/* Menu Cascade */
#define	FM_APPSHELL	4	/* ApplicationShell */

/*
 * Defines for 'flags' argument to FmAddWidgetClass function.
 */
#define FM_NORMAL		(0)		/* normal case */
#define FM_NEED_REBUILD		(1 << 1)	/* rebuild when child changed */
#define	FM_ONE_EXPOSE		(1 << 3)	/* clear all widget to erase handles */
#define FM_ONE_CHILD		(1 << 6)	/* only one child allowed */
#define FM_NO_CHILD		(1 << 7)	/* no child allowed */
#define FM_INIT_CLASS		(1 << 8)	/* class must be inited before 1st instanciation */
#define FM_KEY_SENS		(1 << 15)	/* sensitive to Key events */
#define FM_CONVERT_WITH_PARENT 	(1 << 20)	/* use parent for converting resources */
#define FM_DONT_FREE_VALUES	(1 << 21)	/* dont free resources returned by XtGetValues (XmStrings) */
#define FM_UIL_USER_DEFINED 	(1 << 22)
#define FM_TIMED_HANDLES 	(1 << 23)

/*
 * Defines for arguments to FmAddResourceType function.
 */
#define RT_WIDGET	0	/* get current value from widget */
#define RT_OBJECT	1	/* get current value from XFM2 resources */

#define RT_STRING	0	/* string value */
#define RT_INTEGER	1	/* integer value */

#define FM_MAX_ARGS	12	/* maximum number of arguments */

/*
 * New 3.0 Active Value defines.
 */
#define FM_AV_GLOBAL	0		/* 0 = default */
#define FM_AV_OBJECT	1
#define FM_AV_NONE	2

#define FM_AV_PUBLIC	0		/* 0 = default */
#define FM_AV_PROTECTED 1
#define FM_AV_PRIVATE	2

/*
 * Timeout record pointer (opaque).
 */
typedef struct FaceTimeOutRec *FmTimeOutPtr;

/*
 * Catalog descriptor for internationalization.
 * I assume that if NL_SETD is defined, then nl_catd
 * is also defined, so if your system has the GLS
 * library, you should include <nl_types.h> before
 * <Fm.h>.
 *
 * In all cases, NL_CATD can be overriden by defining it before
 * this file is included.
 */
#ifndef NL_CATD
#ifdef  NL_SETD
#define NL_CATD	nl_catd
#else
#define NL_CATD	int
#endif
#endif

/*
 * Types used to register FACE structures, to use
 * with FmRegisterStructures (version 2.1 only).
 */
typedef struct _FmFieldDesc {
	String		name;
	String		type;
	int		size;
	int		offset;
} FmFieldDesc;

typedef struct _FmStructDesc {
	String		name;
	String		cname;
	FmFieldDesc	*fields;
	int		num_fields;
	String		id_field;
	XtArgVal	id_value;
} FmStructDesc;

/*
 * Useful macros for registering structures.
 */

#ifndef FmSize
#define FmSize(type,field) sizeof(((type)0)->field)
#endif

#ifndef FmField
#define FmField(ptr_type,field_type,field_string,field_name) \
	{ \
		field_string, \
		field_type, \
		FmSize(ptr_type,field_name), \
		XtOffset(ptr_type,field_name) \
	},
#endif

/*
 * Structure returned by FmGetFunctionsVector().
 * Contains pointers to Fm functions used to register
 * a new widget class.
 */

#ifndef FMCCODEHOOK
#define FMCCODEHOOK
typedef Boolean (*FmCCodeHook) ();
#endif

typedef struct _FmFunctionsVector {
	int (*add_widget_class)();
	int (*set_superclass_infos)();
	Boolean (*add_resource_type)();
	Boolean (*add_enumerated_type)();
	int (*attach_function)();
	int (*new_predefined_variable)();
	int (*new_type)();
	Boolean (*add_boot_file)();
	Boolean (*set_table_resource)();
	Boolean (*can_call_editor)();
	void (*register_exit_function)();
	int (*set_function_prototype)();
	int (*new_type_def)();
	int (*register_structures)();
	Boolean (*set_ccode_hook)();
	int (*add_representation)();
	char * (*draw_widget_to_string)();
} FmFunctionsVector;


#ifndef _PROTO
#if defined(__STDC__) || defined(__cplusplus)
#define _PROTO(x) x
#else /* __STDC__ */
#define _PROTO(x) ()
#endif /* __STDC__ */
#endif

typedef void 		(*f1p) 	_PROTO((Widget, GC, int)) ;
typedef void 		(*f2p)	_PROTO((Widget, int, XRectangle *));
typedef int  		(*f3p) 	_PROTO((Widget, int, int, int));
typedef void 		(*f4p)	_PROTO((Widget, GC, int, int));
typedef int 		(*f5p)	_PROTO((Widget));
typedef void 		(*f6p)	_PROTO((Widget, Widget, double, double));
typedef int 		(*f7p) 	_PROTO((Widget, int, int, int));
typedef void 		(*f8p) 	_PROTO((Widget, GC, int, int, int, XtPointer));
typedef int  		(*f9p) 	_PROTO((Widget));
typedef int  		(*f10p) _PROTO((Widget));
typedef int  		(*f11p) _PROTO((Widget));
typedef double 		(*f12p)	_PROTO((double, double, double, double));
typedef void 		(*f13p) _PROTO((Widget, Widget, int, int, int));
typedef XtPointer 	(*f14p) _PROTO((char *, int *));
typedef void 		(*f15p) _PROTO((Widget, int));

typedef struct _FmDrawFunctionVector {
	f1p 	object_handles;
	f2p 	object_handles_rect;
	f3p 	object_where;
	f4p 	object_track;
	f5p 	is_draw_object;
	f6p 	move_object;
	f7p 	object_in_handle;
	f8p 	object_shadow;
	f9p 	is_draw_ellipse;
	f10p 	is_draw_poly;
	f11p  	is_draw_rect;
	f12p 	draw_angle;
	f13p 	object_modify;
	f14p 	string_to_dp;
	f15p 	set_edit_object_flag;
} FmDrawFunctionVector;

#undef _PROTO

extern  FmDrawFunctionVector *FmGetDrawFunctionsVector(
#if NeedFunctionPrototypes
#if !defined(__cplusplus) && !defined(c_plusplus)
void
#endif
#endif /* NeedFunctionPrototypes */
);

/*
 * Types and constants used by FACE arrays.
 */
#define FACE_ARRAY_INT		0
#define FACE_ARRAY_STRING	1

typedef struct _hash_table *FaceArrayPtr; /* opaque pointer type */

typedef unsigned long	FaceHashKey;
typedef unsigned long	FaceHashData;

/***********************************************************************
 *
 * 2. External function declarations.
 *
 **********************************************************************/

#ifdef __cplusplus
extern "C" {                                    /* for C++ V2.0 */
#endif

#ifndef NeedFunctionPrototypes
#if defined(FUNCPROTO) || defined(__STDC__) || defined(__cplusplus) || defined(c_plusplus)
#define NeedFunctionPrototypes 1
#else
#define NeedFunctionPrototypes 0
#ifndef const
#define const
#endif /* const */
#endif /* __STDC__ */
#endif /* NeedFunctionPrototypes */

/*
 * 	Initialization.
 */

extern Widget FmAppInitialize(
#if NeedFunctionPrototypes
	XtAppContext*	, /* app_context_return; */
	String 		, /* class; */
	XrmOptionDescRec*,/* options; */
	Cardinal 	, /* num_options; */
	int *		, /* argc; */
	String *	, /* argv; */
	String *	, /* fallback_resources; */
	ArgList		, /* args; */
	Cardinal 	  /* num_args */
#endif /* NeedFunctionPrototypes */
);

extern Widget FmInitialize(
#if NeedFunctionPrototypes
	String 		, /* name; */
	String 		, /* class; */
	XrmOptionDescRec*,/* options; */
	Cardinal 	, /* num_options; */
	int *		, /* argc; */
	String *	  /* argv; */
#endif /* NeedFunctionPrototypes */
);

extern String FmGetVersionString(
#if NeedFunctionPrototypes
#if !defined(__cplusplus) && !defined(c_plusplus)
void
#endif
#endif /* NeedFunctionPrototypes */
);

extern void FmSetToplevel(
#if NeedFunctionPrototypes
	Widget		  /* toplevel */
#endif /* NeedFunctionPrototypes */
);

/*
 *	User-defined function declaration.
 */

typedef int(*FaceFunctionPtr)();

extern int FmAttachFunction(
#if NeedFunctionPrototypes
	char *		, /* name; */
	FaceFunctionPtr	, /* fun; */
	char *		, /* type; */
	int 		, /* nargs; */
	...
#endif /* NeedFunctionPrototypes */
);

extern int FmSetFunctionPrototype(
#if NeedFunctionPrototypes
	char *		, /* name; */
	char *		, /* cname; */
	char *		, /* ctype; */
	...
#endif /* NeedFunctionPrototypes */
);

extern int FmAddRepresentation(
#if NeedFunctionPrototypes
	char *		, /* type; */
	char *		, /* repname; */
	char *		, /* ctype; */
	int		, /* size; */
	int		, /* aligned; */
	int		  /* indirect; */
#endif /* NeedFunctionPrototypes */
);

extern int FmNewTypeDef(
#if NeedFunctionPrototypes
	char *		, /* type; */
	char *		, /* ctype; */
	int		  /* size; */
#endif /* NeedFunctionPrototypes */
);

/*
 *	File/Group loading functions
 */

extern Widget FmLoad(
#if NeedFunctionPrototypes
	char *		  /* filename */
#endif /* NeedFunctionPrototypes */
);

extern Widget FmLoadAsciiFile(
#if NeedFunctionPrototypes
	char *		  /* filename */
#endif /* NeedFunctionPrototypes */
);

extern int FmLoadGroup(
#if NeedFunctionPrototypes
	char *		, /* groupname */
	char *		  /* filename */
#endif /* NeedFunctionPrototypes */
);

extern Boolean FmDeleteGroup(
#if NeedFunctionPrototypes
	char *		  /* groupname; */
#endif /* NeedFunctionPrototypes */
);

extern Widget FmCreateObject(
#if NeedFunctionPrototypes
	Widget 		, /* parent; */
	const char *	, /* name; */
	const char *	, /* groupname; */
	Arg*		, /* args; */
	Cardinal 	  /* num_args; */
#endif /* NeedFunctionPrototypes */
);

extern Widget FmCreateManagedObject(
#if NeedFunctionPrototypes
	Widget 		, /* parent; */
	const char *	, /* name; */
	const char *	, /* groupname; */
	Arg*		, /* args; */
	Cardinal 	  /* num_args; */
#endif /* NeedFunctionPrototypes */
);

extern Widget FmLoadCreateGroup(
#if NeedFunctionPrototypes
	const char *	, /* name; */
	const char *	, /* groupname; */
	Widget 		, /* parent; */
	Arg*		, /* args; */
	Cardinal 	  /* num_args; */
#endif /* NeedFunctionPrototypes */
);

extern Widget FmLoadCreateManagedGroup(
#if NeedFunctionPrototypes
	const char *	, /* name; */
	const char *	, /* groupname; */
	Widget 		, /* parent; */
	Arg*		, /* args; */
	Cardinal 	  /* num_args; */
#endif /* NeedFunctionPrototypes */
);

extern Widget FmLoadCreate(
#if NeedFunctionPrototypes
	const char *	, /* name; */
	const char *	, /* groupname; */
	Widget 		, /* parent; */
	Arg*		, /* args; */
	Cardinal 	  /* num_args; */
#endif /* NeedFunctionPrototypes */
);

extern Widget FmLoadCreateManaged(
#if NeedFunctionPrototypes
	const char *	, /* name; */
	const char *	, /* groupname; */
	Widget 		, /* parent; */
	Arg*		, /* args; */
	Cardinal 	  /* num_args; */
#endif /* NeedFunctionPrototypes */
);

extern Widget FmCreate(
#if NeedFunctionPrototypes
	const char *	, /* name; */
	const char *	, /* groupname; */
	Widget 		  /* parent; */
#endif /* NeedFunctionPrototypes */
);

extern void FmDeleteObject(
#if NeedFunctionPrototypes
	Widget		  /* w; */
#endif /* NeedFunctionPrototypes */
);

#ifndef FM_CREATION_FUNCTION_TYPE_DEFINED
#define FM_CREATION_FUNCTION_TYPE_DEFINED

typedef Widget (*FmCreationFunction)(
#if NeedFunctionPrototypes
	const char *	, /* name; */
	Widget 		, /* parent; */
	Arg*		, /* args; */
	Cardinal 	  /* num_args; */
#endif /* NeedFunctionPrototypes */
);

#endif

/*
 * Compiled-mode only.
 */
extern void FmRegisterCreateFunction(
#if NeedFunctionPrototypes
	const char *	,  /* name; */
	FmCreationFunction /* function; */
#endif /* NeedFunctionPrototypes */
);

/*
 *	XFM2 editor application callable interface.
 */

extern void FmCallEditor(
#if NeedFunctionPrototypes
#if !defined(__cplusplus) && !defined(c_plusplus)
void
#endif
#endif /* NeedFunctionPrototypes */
);

extern void FmCallEditorCallback(
#if NeedFunctionPrototypes
#if !defined(__cplusplus) && !defined(c_plusplus)
void
#endif
#endif /* NeedFunctionPrototypes */
);

/*
 *	User-defined Widget class declaration.
 */

extern void  FmAddWidgetClass(
#if NeedFunctionPrototypes
	WidgetClass*	, /* widget_class;	address of Widget Class pointer */
	WidgetClass* 	, /* gadget_class;	address of Gadget Class pointer (or 0) */
	FmWidgetType	, /* type;		(see enum below) */
	unsigned  	, /* long	flags;		(see defines below) */
	char* 		, /* default_resources;	ex: "width=10\nheight=100\n" */
	char*		, /* include_file;	include file for C generation */
	char*		, /* class_ref;		Widget Class variable name for C code */
	char*		, /* gadget_class_ref;	Gadget Class variable name for C code */
	XtResourceList	, /* sub_resources;	Additional resources */
	Cardinal 	, /* num_sub_resources;	Number of ... */
	char*		  /* icon_bitmap_file;	Bitmap file for icon in XFM2 */
#endif /* NeedFunctionPrototypes */
);

/*
 *	User-defined resource type declaration.
 */

extern Boolean FmAddResourceType(
#if NeedFunctionPrototypes
	char* 		, /* type;		representation name */
	char 		, /* get_value;		get values from XFM2 object of from widget ? */
	char 		, /* avtype;		string or integer ? */
	char* 		, /* avname;		active value name */
	char* 		, /* boxname;		box name */
	char* 		, /* default_value;	default value (string) */
	char* 		, /* enumeration;	enumeration values (strings) */
	int 		  /* offset;		enumeration offset */
#endif /* NeedFunctionPrototypes */
);

/*
 *	FACE structures declaration.
 *	(version 2.1 only).
 */

extern int FmRegisterStructures(
#if NeedFunctionPrototypes
	FmStructDesc*	, /* structs;		structures to register */
	int		  /* num_structs; 	number of structures */
#endif /* NeedFunctionPrototypes */
);

/*
 *	Main loops.
 */

extern void FmLoop(
#if NeedFunctionPrototypes
#if !defined(__cplusplus) && !defined(c_plusplus)
void
#endif
#endif /* NeedFunctionPrototypes */
);

extern void FmEditLoop(
#if NeedFunctionPrototypes
#if !defined(__cplusplus) && !defined(c_plusplus)
void
#endif
#endif /* NeedFunctionPrototypes */
);

/*
 *	Active Values functions.
 */

extern int FmAttachAv(
#if NeedFunctionPrototypes
	const char *    , /* name; */
	XtPointer 	  /* addr; */
#endif /* NeedFunctionPrototypes */
);

extern XtPointer FmGetActiveValueAddr(
#if NeedFunctionPrototypes
	const char *      /* name; */
#endif /* NeedFunctionPrototypes */
);

extern Boolean FmGetActiveValue(
#if NeedFunctionPrototypes
	Widget 		, /* widget; */
	const char *      /* name; */
#endif /* NeedFunctionPrototypes */
);

extern Boolean FmSetActiveValue(
#if NeedFunctionPrototypes
	Widget 		, /* widget; */
	const char *      /* name; */
#endif /* NeedFunctionPrototypes */
);

/*
 * 	New 3.0 Active Values functions.
 */

extern int FmAttachValue(
#if NeedFunctionPrototypes
	Widget 		, /* w */
	const char *	, /* name; */
	XtPointer 	  /* addr; */
#endif /* NeedFunctionPrototypes */
);

extern Boolean FmFetchValue(
#if NeedFunctionPrototypes
	Widget 		, /* w */
	const char *	, /* name; */
	XtPointer*	, /* address_return */
	XrmQuark*	, /* type_return */
	int*		, /* storage_return */
	int*		, /* scope_return */
	int*		, /* immediate_return */
	int*		, /* automatic_return */
	int*		  /* genfun_return */
#endif /* NeedFunctionPrototypes */
);

extern Boolean FmGetValue(
#if NeedFunctionPrototypes
	Widget 		, /* w */
	const char *	, /* name; */
	XtPointer 	  /* addr; */
#endif /* NeedFunctionPrototypes */
);

extern Boolean FmSetValue(
#if NeedFunctionPrototypes
	Widget 		, /* w */
	const char *	, /* name; */
	XtPointer 	  /* addr; */
#endif /* NeedFunctionPrototypes */
);

extern int FmReadValue(
#if NeedFunctionPrototypes
	Widget 		, /* w */
	const char *	, /* name */
	XtArgVal *	, /* value_return */
	String *	  /* type_return */
#endif /* NeedFunctionPrototypes */
);

extern int FmFetchValueAddress(
#if NeedFunctionPrototypes
	Widget 		, /* w */
	const char *	, /* name */
	XtArgVal *	, /* value_return */
	String *	  /* type_return */
#endif /* NeedFunctionPrototypes */
);

extern int FmWriteValue(
#if NeedFunctionPrototypes
	Widget 		, /* w */
	const char *	, /* name */
	XtArgVal 	, /* value */
	String		  /* type */
#endif /* NeedFunctionPrototypes */
);

extern int FmChangeValueAddress(
#if NeedFunctionPrototypes
	Widget 		, /* w */
	const char *	, /* name */
	XtArgVal 	, /* value */
	String		  /* type */
#endif /* NeedFunctionPrototypes */
);

extern XtArgVal FmCallValue(
#if NeedFunctionPrototypes
	Widget 		, /* w */
	const char *	, /* name */
	int 		, /* count */
	...
#endif /* NeedFunctionPrototypes */
);

/*
 *	Old Active Values functions (for compatibility).
 */

extern XtPointer FmGetAv(
#if NeedFunctionPrototypes
	String 		  /* name; */
#endif /* NeedFunctionPrototypes */
);

extern Boolean FmSetAv(
#if NeedFunctionPrototypes
	String		  /* name; */
#endif /* NeedFunctionPrototypes */
);

extern Boolean FmSetNamedAv(
#if NeedFunctionPrototypes
	String		  /* name; */
#endif /* NeedFunctionPrototypes */
);

extern Boolean FmSetWidgetAv(
#if NeedFunctionPrototypes
	Widget		  /* w; */
#endif /* NeedFunctionPrototypes */
);

extern Boolean FmUpdateAv(
#if NeedFunctionPrototypes
	String		  /* name; */
#endif /* NeedFunctionPrototypes */
);

extern Boolean FmUpdateNamedAv(
#if NeedFunctionPrototypes
	String		  /* name; */
#endif /* NeedFunctionPrototypes */
);

extern Boolean FmUpdateWidgetAv(
#if NeedFunctionPrototypes
	Widget		  /* w; */
#endif /* NeedFunctionPrototypes */
);

extern void FmStopTimeOut(
#if NeedFunctionPrototypes
	FmTimeOutPtr	  /* timeout; */
#endif /* NeedFunctionPrototypes */
);

/*
 *	Timeout functions.
 */

extern FmTimeOutPtr FmCallCallbacksTimeOut(
#if NeedFunctionPrototypes
	Widget 		, /* widget; */
	String 		, /* name; */
	unsigned 	  /* interval; */
#endif /* NeedFunctionPrototypes */
);

extern FmTimeOutPtr FmGetActiveValueTimeOut(
#if NeedFunctionPrototypes
 	Widget 		, /* widget; */
	String 		, /* name; */
	unsigned 	  /* interval; */
#endif /* NeedFunctionPrototypes */
);

extern FmTimeOutPtr FmSetActiveValueTimeOut(
#if NeedFunctionPrototypes
 	Widget 		, /* widget; */
	String 		, /* name; */
	unsigned 	  /* interval; */
#endif /* NeedFunctionPrototypes */
);

/*
 *	Miscellaneous toolkit-related functions.
 */

extern void FmBeep(
#if NeedFunctionPrototypes
#if !defined(__cplusplus) && !defined(c_plusplus)
void
#endif
#endif /* NeedFunctionPrototypes */
);

extern void FmCallResizeProc(
#if NeedFunctionPrototypes
	Widget 		  /* w; */
#endif /* NeedFunctionPrototypes */
);

extern Widget FmChooseWidget(
#if NeedFunctionPrototypes
#if !defined(__cplusplus) && !defined(c_plusplus)
void
#endif
#endif /* NeedFunctionPrototypes */
);

extern void FmDoEvent(
#if NeedFunctionPrototypes
#if !defined(__cplusplus) && !defined(c_plusplus)
void
#endif
#endif /* NeedFunctionPrototypes */
);

extern void FmHide(
#if NeedFunctionPrototypes
	Widget		  /* w; */
#endif /* NeedFunctionPrototypes */
);

extern void FmHideWidget(
#if NeedFunctionPrototypes
	Widget		  /* w; */
#endif /* NeedFunctionPrototypes */
);

extern void FmInstallCloseHandler(
#if NeedFunctionPrototypes
	Widget		  /* w; */
#endif /* NeedFunctionPrototypes */
);

typedef Boolean (*FmCloseHandler)(
#if NeedFunctionPrototypes
	Widget		  /* shell; */
#endif /* NeedFunctionPrototypes */
);

extern FmCloseHandler FmSetCloseHandler(
#if NeedFunctionPrototypes
	FmCloseHandler	  /* close_handler; */
#endif /* NeedFunctionPrototypes */
);

extern void FmLowerWidget(
#if NeedFunctionPrototypes
	Widget		  /* w; */
#endif /* NeedFunctionPrototypes */
);

extern char * FmPopupAndWait(
#if NeedFunctionPrototypes
	Widget		  /* w; */
#endif /* NeedFunctionPrototypes */
);

extern void FmProcessAllEvents(
#if NeedFunctionPrototypes
#if !defined(__cplusplus) && !defined(c_plusplus)
void
#endif
#endif /* NeedFunctionPrototypes */
);

extern void FmRaiseWidget(
#if NeedFunctionPrototypes
	Widget		  /* w; */
#endif /* NeedFunctionPrototypes */
);

extern void FmReturn(
#if NeedFunctionPrototypes
	Widget 		, /* w; */
	int 		  /* value; */
#endif /* NeedFunctionPrototypes */
);

extern void FmSendClick(
#if NeedFunctionPrototypes
	Widget		  /* w; */
#endif /* NeedFunctionPrototypes */
);

extern int FmSendMessage(
#if NeedFunctionPrototypes
	Widget 		, /* w; */
	char *		, /* type; */
	char *		  /* data; */
#endif /* NeedFunctionPrototypes */
);

extern int FmSendMessageToWindow(
#if NeedFunctionPrototypes
	Display *	, /* dpy; */
	Window 		, /* win; */
	char *		, /* type; */
	int 		, /* format; */
	XtPointer 	, /* data; */
	int 		  /* size; */
#endif /* NeedFunctionPrototypes */
);

extern void FmSetHints(
#if NeedFunctionPrototypes
	Widget 		, /* shell; */
	int 		, /* x; */
	int 		, /* y; */
	int 		, /* width; */
	int 		  /* height; */
#endif /* NeedFunctionPrototypes */
);

extern void FmShow(
#if NeedFunctionPrototypes
	Widget		  /* w; */
#endif /* NeedFunctionPrototypes */
);

extern void FmShowPopup(
#if NeedFunctionPrototypes
	XButtonEvent *	, /* ev; */
	Widget 		  /* widget; */
#endif /* NeedFunctionPrototypes */
);

extern void FmShowWidget(
#if NeedFunctionPrototypes
	Widget		  /* w; */
#endif /* NeedFunctionPrototypes */
);

extern void FmWait(
#if NeedFunctionPrototypes
	Widget 		, /* w; */
	unsigned long 	  /* ms; */
#endif /* NeedFunctionPrototypes */
);

extern unsigned long FmWaitForReturn(
#if NeedFunctionPrototypes
void
#endif /* NeedFunctionPrototypes */
);

extern void FmWarpPointer(
#if NeedFunctionPrototypes
	Widget		  /* w; */
#endif /* NeedFunctionPrototypes */
);

extern String FmWidgetName(
#if NeedFunctionPrototypes
	Widget		  /* w; */
#endif /* NeedFunctionPrototypes */
);

extern void FmConfigureShell(
#if NeedFunctionPrototypes
	Widget 		, /* shell */
	int 		, /* x */
	int 		, /* y */
	int 		, /* width */
	int 		  /* height */
#endif /* NeedFunctionPrototypes */
);

extern Dimension FmWidest(
#if NeedFunctionPrototypes
	Widget 		, /* first */
	...
#endif /* NeedFunctionPrototypes */
);

extern void FmSetWidest(
#if NeedFunctionPrototypes
	Widget 		, /* first */
	...
#endif /* NeedFunctionPrototypes */
);

extern void FmSetTallest(
#if NeedFunctionPrototypes
	Widget 		, /* first */
	...
#endif /* NeedFunctionPrototypes */
);

extern int FmScreenWidth(
#if NeedFunctionPrototypes
	Widget 		 /* w */
#endif /* NeedFunctionPrototypes */
);

extern int FmScreenHeight(
#if NeedFunctionPrototypes
	Widget 		 /* w */
#endif /* NeedFunctionPrototypes */
);

/*
 *	FACE functions called by generated C code.
 */

extern int FmDtoi(
#if NeedFunctionPrototypes
	double *	  /* pd; */
#endif /* NeedFunctionPrototypes */
);

extern int FmFtoi(
#if NeedFunctionPrototypes
	float *		  /* pf; */
#endif /* NeedFunctionPrototypes */
);

extern int FmEqualString(
#if NeedFunctionPrototypes
	char *		, /* s1 */
	char *		  /* s2 */
#endif /* NeedFunctionPrototypes */
);

extern int FmNotEqualString(
#if NeedFunctionPrototypes
	String		, /* s1; */
	String		  /* s2; */
#endif /* NeedFunctionPrototypes */
);

extern char * FmItoa(
#if NeedFunctionPrototypes
	int		  /* i; */
#endif /* NeedFunctionPrototypes */
);

extern void FmItod(
#if NeedFunctionPrototypes
	int 		, /* i; */
	double *	  /* pd; */
#endif /* NeedFunctionPrototypes */
);

extern void FmItof(
#if NeedFunctionPrototypes
	int		, /* i; */
	float *		  /* pf; */
#endif /* NeedFunctionPrototypes */
);

extern XtArgVal FaceConvertString(
#if NeedFunctionPrototypes
	Widget 		, /* w */
	String		, /* s */
	String 		  /* to_type */
#endif /* NeedFunctionPrototypes */
);

extern int FaceSetValues(
#if NeedFunctionPrototypes
	Widget 		, /* w */
	int 		, /* num_resources */
	...		  /* r1, v1, r2, v2, etc. (max 5) */
#endif /* NeedFunctionPrototypes */
);

/*
 *	Internationalization functions.
 */

extern NL_CATD FmCatOpen(
#if NeedFunctionPrototypes
	char *		, /* name; */
	int 		  /* i; -- UNUSED: MUST BE ZERO*/
#endif /* NeedFunctionPrototypes */
);

extern int FmCatClose(
#if NeedFunctionPrototypes
	NL_CATD		  /* catd; */
#endif /* NeedFunctionPrototypes */
);

extern NL_CATD FmCatFind(
#if NeedFunctionPrototypes
	char*		  /* name; */
#endif /* NeedFunctionPrototypes */
);

extern NL_CATD FmGetCatD(
#if NeedFunctionPrototypes
#if !defined(__cplusplus) && !defined(c_plusplus)
void
#endif
#endif /* NeedFunctionPrototypes */
);

extern char* FmCatGetS(
#if NeedFunctionPrototypes
	int 		, /* setn; */
	int		, /* msgn; */
	char *		  /* default; */
#endif /* NeedFunctionPrototypes */
);

extern String FmInternationalize(
#if NeedFunctionPrototypes
	const char *	  /* s; */
#endif /* NeedFunctionPrototypes */
);

extern String FmNewIString(
#if NeedFunctionPrototypes
	const char *	  /* s; */
#endif /* NeedFunctionPrototypes */
);


/*
 *	Pixmaps.
 */

extern Pixmap FmGetColorPixmap(
#if NeedFunctionPrototypes
	Screen *	, /* screen; */
	const char *	, /* image_name; */
	Pixel		, /* foreground; */
	Pixel		  /* background; */
#endif /* NeedFunctionPrototypes */
);

extern Pixmap FmGetPixmap(
#if NeedFunctionPrototypes
	Widget		, /* w; */
	const char *	  /* name; */
#endif /* NeedFunctionPrototypes */
);

extern XImage *FmLoadXImage(
#if NeedFunctionPrototypes
	Widget		, /* w; */
	const char *	  /* name; */
#endif /* NeedFunctionPrototypes */
);

/*
 *	Declare a new FACE variable (interpreted mode only).
 */

extern int FmNewVariable(
#if NeedFunctionPrototypes
	const char *	, /* name; */
	XtArgVal 	, /* value; */
	const char *	  /* type; */
#endif /* NeedFunctionPrototypes */
);

extern int FmNewPredefinedVariable(
#if NeedFunctionPrototypes
	const char *	, /* name; */
	XtArgVal 	, /* value; */
	const char *	  /* type; */
#endif /* NeedFunctionPrototypes */
);

extern void FmDeleteVariable(
#if NeedFunctionPrototypes
	char *		  /* name; */
#endif /* NeedFunctionPrototypes */
);

extern int FmNewType(
#if NeedFunctionPrototypes
	const char *	 /* type; */
#endif /* NeedFunctionPrototypes */
);

extern FmFunctionsVector *FmGetFunctionsVector(
#if NeedFunctionPrototypes
#if !defined(__cplusplus) && !defined(c_plusplus)
void
#endif
#endif /* NeedFunctionPrototypes */
);

/*
 * 	FACE array functions.
 */

extern FaceArrayPtr 	FmCreateArray	(
#if NeedFunctionPrototypes
	void
#endif
);

extern FaceArrayPtr 	_FaceCreateArray	(
#if NeedFunctionPrototypes
	void
#endif
);

extern FaceArrayPtr 	FmCreateLinearArray	(
#if NeedFunctionPrototypes
	void
#endif
);

extern FaceArrayPtr 	_FaceCreateLinearArray	(
#if NeedFunctionPrototypes
	void
#endif
);

extern FaceArrayPtr 	FmCreateCLinearArray	(
#if NeedFunctionPrototypes
	XtPointer 		data,
	int 			num
#endif
);

extern FaceArrayPtr 	_FaceCreateCLinearArray	(
#if NeedFunctionPrototypes
	XtPointer 		data,
	int 			num
#endif
);

extern void		FmClearArray	(
#if NeedFunctionPrototypes
	FaceArrayPtr 		array,
	int 			type
#endif
);

extern void		_FaceClearArray	(
#if NeedFunctionPrototypes
	FaceArrayPtr 		array,
	int 			type
#endif
);

extern void		FmDestroyArray	(
#if NeedFunctionPrototypes
	FaceArrayPtr 		array,
	int 			type
#endif
);

extern void		_FaceDestroyArray	(
#if NeedFunctionPrototypes
	FaceArrayPtr 		array,
	int 			type
#endif
);

extern FaceHashData	FmGetArray		(
#if NeedFunctionPrototypes
	FaceArrayPtr 		array,
	int 			type,
	FaceHashKey 		key,
	FaceHashData 		empty
#endif
);

extern FaceHashData	_FaceGetArray		(
#if NeedFunctionPrototypes
	FaceArrayPtr 		array,
	int 			type,
	FaceHashKey 		key,
	FaceHashData 		empty
#endif
);

extern Boolean		FmSetArray		(
#if NeedFunctionPrototypes
	FaceArrayPtr 		array,
	int 			type,
	FaceHashKey 		key,
	FaceHashData 		value
#endif
);

extern Boolean		_FaceSetArray		(
#if NeedFunctionPrototypes
	FaceArrayPtr 		array,
	int 			type,
	FaceHashKey 		key,
	FaceHashData 		value
#endif
);

extern FaceHashKey	FmFirstOfArray	(
#if NeedFunctionPrototypes
	FaceArrayPtr 		array,
	int 			type,
	FaceHashKey 		nomore
#endif
);

extern FaceHashKey	_FaceFirstOfArray	(
#if NeedFunctionPrototypes
	FaceArrayPtr 		array,
	int 			type,
	FaceHashKey 		nomore
#endif
);

extern FaceHashKey	FmNextOfArray	(
#if NeedFunctionPrototypes
	FaceArrayPtr 		array,
	int 			type,
	FaceHashKey 		last,
	FaceHashKey 		nomore
#endif
);

extern FaceHashKey	_FaceNextOfArray	(
#if NeedFunctionPrototypes
	FaceArrayPtr 		array,
	int 			type,
	FaceHashKey 		last,
	FaceHashKey 		nomore
#endif
);

extern int		FmSizeOfArray	(
#if NeedFunctionPrototypes
	FaceArrayPtr 		array
#endif
);

extern int		_FaceSizeOfArray	(
#if NeedFunctionPrototypes
	FaceArrayPtr 		array
#endif
);

extern XtPointer 	FmGetArrayData	(
#if NeedFunctionPrototypes
	FaceArrayPtr 		array
#endif
);

extern XtPointer 	_FaceGetArrayData	(
#if NeedFunctionPrototypes
	FaceArrayPtr 		array
#endif
);

extern void 		FmOpenNameSpace	(
#if NeedFunctionPrototypes
	const char *		namespac
#endif
);

extern void 		FmCloseNameSpace	(
#if NeedFunctionPrototypes
	void
#endif
);

#ifdef __cplusplus
}                                               /* for C++ V2.0 */
#endif

#endif /* ! _FMCOMMON_H_ */
