/* $Id: TextList.h 3 2002-10-21 13:28:25Z ab $ */
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
/*************************************<+>*************************************
 *****************************************************************************
 **
 **   File:        TextList.h
 **
 **   Description: This include file contains public defines and structures
 **                needed by all XToolkit applications using the NSL TextList
 *		   widget.
 **
 ************************************<+>*************************************/

#define MOTIF  1
#define MOTIF_1_1  1
#define NSL_WIX  1
#define NSL_LIST  1
#define NSL_IMAGE_EDIT  1
#define TREE  1

extern WidgetClass textListWidgetClass;

typedef struct _TextListClassRec *TextListWidgetClass;
typedef struct _TextListRec      *TextListWidget;

#define XtNfirstItem		"firstItem"
#define	XtNvScrollPosition		"vScrollPosition"
#define	XtNvScrollPositionCallback	"vScrollPositionCallback"
#define	XtNvScrollSize		"vScrollSize"
#define	XtNvScrollSizeCallback	"vScrollSizeCallback"
#define XtNshadowThickness	"shadowThickness"
#define XtNtopShadowColor	"topShadowColor"
#define XtNbottomShadowColor	"bottomShadowColor"
#define XtNtopShadowTile	"topShadowTile"
#define XtNbottomShadowTile	"bottomShadowTile"
#define XtNitem			"item"
#define XtNselectionStyle	"selectionStyle"
#define XtNselectionNumber	"selectionNumber"
#define XtNlineNum		"lineNum"
#define XtNnumItem		"numItem"
#define XtNselect		"select"
#define XtNrelease		"release"
#define XtNmode			"mode"
#define XtNforceSize		"forceSize"

#define	XtCScroll		"Scroll"
#define XtCFirstItem		"FirstItem"
#define XtCShadowThickness	"ShadowThickness"
#define XtCTopShadowTile	"TopShadowTile"
#define XtCBottomShadowTile	"BottomShadowTile"
#define XtCItem			"Item"
#define XtCSelectionStyle	"SelectionStyle"
#define XtCSelectionNumber	"SelectionNumber"
#define XtCLineNum		"LineNum"
#define XtCNumItem		"NumItem"
#define XtCMode			"Mode"
#define XtCForceSize		"ForceSize"
