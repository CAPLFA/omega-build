/* $Id: ImageEdit.h 3 2002-10-21 13:28:25Z ab $ */
/*************************************<+>*************************************
 *****************************************************************************
 **
 **   File:        ImageEdit.h
 **
 **   Project:     X Widgets
 **
 **   Description: Public include file for ImageEdit class widget
 **
 *****************************************************************************
 **   
 **   Copyright (c) 1988 by Hewlett-Packard Company
 **   Copyright (c) 1988 by the Massachusetts Institute of Technology
 **   
 **   Permission to use, copy, modify, and distribute this software 
 **   and its documentation for any purpose and without fee is hereby 
 **   granted, provided that the above copyright notice appear in all 
 **   copies and that both that copyright notice and this permission 
 **   notice appear in supporting documentation, and that the names of 
 **   Hewlett-Packard or  M.I.T.  not be used in advertising or publicity 
 **   pertaining to distribution of the software without specific, written 
 **   prior permission.
 **   
 *****************************************************************************
 *************************************<+>*************************************/
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

#define MOTIF  1
#define MOTIF_1_1  1
#define NSL_WIX  1
#define NSL_LIST  1
#define NSL_IMAGE_EDIT  1
#define TREE  1

/*  ImageEdit Widget  */

extern WidgetClass XmimageEditWidgetClass;

typedef struct _XmImageEditClassRec * XmImageEditWidgetClass;
typedef struct _XmImageEditRec      * XmImageEditWidget;

#define XtNimage 		"image"
#define XtCImage 		"Image"
#ifndef XtRImage
#define XtRImage 		"Image"
#endif /* XtRImage */
#define XtNpixelScale		"pixelScale"
#define XtCPixelScale		"PixelScale"
#define XtNgridThickness	"gridThickness"
#define	XtCGridThickness	"GridThickness"
#define XtNdrawColor		"drawColor"
#define XtNeraseColor		"eraseColor"
#define XtNeraseOn		"eraseOn"
#define XtCEraseOn		"EraseOn"

extern void XnslImageEditDrawPts();
