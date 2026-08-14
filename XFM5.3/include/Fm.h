#ifndef _FM_H_
#define _FM_H_

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
*  WITHOUT WARRANTY OF ANY KIND, AND OSF EXPRESSLY DISCLAIMS ALL
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
 *	Module: 	Fm.h
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

#include <Xm/Xm.h>
#include "FmCommon.h"

#if XmVersion >= 1002

/*
 * Types used by drag-and-drop functions.
 */

typedef struct _FmArgList {
	Arg	*args;
	int	num_args;
	int	max_args;
} FmArgList;

typedef struct _FmAtomList {
	Atom	*atoms;
	int	num_atoms;
	int	max_atoms;
} FmAtomList;

typedef struct _FmConvertProcStruct {
	XtPointer	value;
	String		type;
	int		length;
	int		format;
	Widget		drag_context;
	String		selection;
	String		target;
	XtPointer	client_data;
	unsigned long	max_length;
	XtRequestId 	request_id;
} FmConvertProcStruct;

typedef struct _FmTransferProcStruct {
	XtPointer	value;
	String		type;
	int		length;
	int		format;
	Widget		drop_transfer;
	String		selection;
	String		target;
	XtPointer	client_data;
} FmTransferProcStruct;

#endif

/***********************************************************************
 *
 * External function declarations.
 *
 **********************************************************************/

#ifdef __cplusplus
extern "C" {
#endif

extern XmString FmCreateXmString(
#if NeedFunctionPrototypes
	char *		  /* string; */
#endif /* NeedFunctionPrototypes */
);

extern String FmGetString(
#if NeedFunctionPrototypes
	XmString	  /* xms; */
#endif /* NeedFunctionPrototypes */
);

extern String FmGetStringFromTable(
#if NeedFunctionPrototypes
	XmStringTable	  /* xms_table; */
#endif /* NeedFunctionPrototypes */
);

extern String FmListGetItems(
#if NeedFunctionPrototypes
	Widget		  /* xmlist; */
#endif /* NeedFunctionPrototypes */
);

extern String FmListGetSelectedItems(
#if NeedFunctionPrototypes
	Widget		  /* xmlist; */
#endif /* NeedFunctionPrototypes */
);

extern Boolean FmListSetItems(
#if NeedFunctionPrototypes
	Widget		, /* xmlist; */
	String		  /* items_string */
#endif /* NeedFunctionPrototypes */
);

extern String FmListGetNthItem(
#if NeedFunctionPrototypes
	Widget		, /* list; */
	int		  /* position */
#endif /* NeedFunctionPrototypes */
);

extern String FmListGetNthSelectedItem(
#if NeedFunctionPrototypes
	Widget		, /* list; */
	int		  /* position */
#endif /* NeedFunctionPrototypes */
);

extern void
FmAttachTopWidget (
#if NeedFunctionPrototypes
	Widget,Widget,int
#endif /* NeedFunctionPrototypes */
);

extern void
FmAttachLeftWidget (
#if NeedFunctionPrototypes
Widget,Widget,int
#endif /* NeedFunctionPrototypes */
);

extern void
FmAttachRightWidget (
#if NeedFunctionPrototypes
	Widget,Widget,int
#endif /* NeedFunctionPrototypes */
);

extern void
FmAttachBottomWidget (
#if NeedFunctionPrototypes
	Widget,Widget,int
#endif /* NeedFunctionPrototypes */
);

extern void
FmListAllowKeySelection (
#if NeedFunctionPrototypes
	Widget,int,const char *,int
#endif /* NeedFunctionPrototypes */
);

#if XmVersion >= 1002

extern Widget FmGetXmDisplay(
#if NeedFunctionPrototypes
Widget
#endif /* NeedFunctionPrototypes */
);

extern Widget FmGetXmScreen(
#if NeedFunctionPrototypes
Widget
#endif /* NeedFunctionPrototypes */
);

extern struct _FmArgList *FmNewArgList(
#if NeedFunctionPrototypes
void
#endif /* NeedFunctionPrototypes */
);

extern void FmAddArg(
#if NeedFunctionPrototypes
	struct _FmArgList * ,	/* list; */
	String  ,	/* name; */
	XtArgVal	/* value; */
#endif /* NeedFunctionPrototypes */
);

extern void FmClearArgList(
#if NeedFunctionPrototypes
	struct _FmArgList *	/* list; */
#endif /* NeedFunctionPrototypes */
);

extern void FmFreeArgList(
#if NeedFunctionPrototypes
	struct _FmArgList * 	/* list; */
#endif /* NeedFunctionPrototypes */
);

extern Widget FmCreateDragIcon(
#if NeedFunctionPrototypes
	Widget  ,	/* widget; */
	String  ,	/* name; */
	struct _FmArgList * 	/* list; */
#endif /* NeedFunctionPrototypes */
);

extern Widget FmDragStart(
#if NeedFunctionPrototypes
	Widget  ,	/* widget; */
	XEvent * ,	/* event; */
	String  ,	/* targets_string; */
	struct _FmArgList * 	/* list; */
#endif /* NeedFunctionPrototypes */
);

extern Widget FmStartSimpleDrag(
#if NeedFunctionPrototypes
	Widget  ,	/* widget; */
	XEvent * ,	/* event; */
	char * ,	/* targets_string; */
	Pixmap	 	/* pixmap; */
#endif /* NeedFunctionPrototypes */
);

extern void FmDropSiteRegister(
#if NeedFunctionPrototypes
	Widget  ,	/* widget; */
	String  ,	/* targets_string; */
	struct _FmArgList * 	/* list; */
#endif /* NeedFunctionPrototypes */
);

extern void FmRegisterSimpleDropSite(
#if NeedFunctionPrototypes
	Widget  ,	/* widget; */
	String  	/* targets_string; */
#endif /* NeedFunctionPrototypes */
);

extern void FmDropSiteUpdate(
#if NeedFunctionPrototypes
	Widget  ,	/* widget; */
	String  ,	/* name; */
	XtArgVal  	/* value; */
#endif /* NeedFunctionPrototypes */
);

extern XtArgVal FmDropSiteRetrieve(
#if NeedFunctionPrototypes
	Widget  ,	/* widget; */
	String  	/* name; */
#endif /* NeedFunctionPrototypes */
);

extern Widget FmDropTransferStart(
#if NeedFunctionPrototypes
	Widget  ,	/* widget; */
	Widget  ,	/* drag_context; */
	String  ,	/* targets_string; */
	XtPointer  ,	/* client_data; */
	Boolean  ,	/* incremental; */
	int  	/* status; */
#endif /* NeedFunctionPrototypes */
);

extern void FmDropTransferAdd(
#if NeedFunctionPrototypes
	Widget  ,	/* widget; */
	Widget  ,	/* drop_transfer; */
	String  ,	/* targets_string; */
	XtPointer  	/* client_data; */
#endif /* NeedFunctionPrototypes */
);

extern XRectangle* FmCreateRectangle(
#if NeedFunctionPrototypes
	int, int, int, int
#endif /* NeedFunctionPrototypes */
);

extern Widget FmStartCursorDrag(
#if NeedFunctionPrototypes
        Widget, XEvent *, const char *, Pixmap, Pixmap
#endif /* NeedFunctionPrototypes */
);

Boolean FmSetResourceFilePattern (
#if NeedFunctionPrototypes
				  char *, char *
#endif /* NeedFunctionPrototypes */
);

#endif /* XmVersion */

#ifdef __cplusplus
}
#endif





/***********************************************************************
 *
 * Base class for C++ class generation.
 *
 **********************************************************************/

#ifdef __cplusplus


class NslUIC {

public:

  // show/hide this Interface component
  void show() { FmShowWidget(widget); }
  void hide() { FmHideWidget(widget); }

  // access root of the widget tree associated with this UI component
  Widget getWidget() { return widget; }

  // callback function to handle widget destruction
  static void widgetDestroyedCallback(Widget, XtPointer clientData, XtPointer)
  {
    ((NslUIC*) clientData)->widgetDestroyed();
  }

  // destructor
  virtual ~NslUIC() { if (widget) XtDestroyWidget(widget); }

protected:

  // protected constructor, since this class is abstract
  NslUIC() : widget(0) {}

  // notify widget destruction
  virtual void widgetDestroyed() { widget = 0; }

  // the root widget of this component
  Widget widget;

};


#endif /* __cplusplus */


#endif /* _FM_H_ */
