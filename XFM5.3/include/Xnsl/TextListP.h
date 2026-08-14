/* $Id: TextListP.h 3 2002-10-21 13:28:25Z ab $ */
/******************************************************************************
*******************************************************************************
*
*  (c) Copyright 1990, Nova Software Labs S.A.
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

#include <Xm/Xm.h>
#include <Xm/XmP.h>

#if XmVersion >= 1002
#include <Xm/PrimitiveP.h>
#endif

/*
 *	La barre de textLists.
 */

typedef struct {
	int	rien;
} TextListClassPart;

/*
 *	Class record.
 */

typedef struct _TextListClassRec {
	CoreClassPart		core_class;
	XmPrimitiveClassPart	primitive_class;
	TextListClassPart	textList_class;
} TextListClassRec;

extern TextListClassRec textListClassRec;

typedef struct _TextListPart {
	XFontStruct*	font;
	int		font_height;
	GC		label_GC;
	int		space;
	int		sb_size;
	int		sb_pos;
	XtCallbackList	vscroll_size;
	XtCallbackList	vscroll_pos;
	XtCallbackList	select;
	XtCallbackList	release;
	Bool		force_size;
	unsigned char	mode;
	int		selection_style;
	int		selection_number;
	String		selection;
	String		item_string;
	String*		items;
	int		num_items;
	int		num_lines;
	int		first_item;
	char*		selected;
} TextListPart;

typedef struct _TextListRec {
	CorePart	core;
	XmPrimitivePart	primitive;
	TextListPart	textList;
} TextListRec;
