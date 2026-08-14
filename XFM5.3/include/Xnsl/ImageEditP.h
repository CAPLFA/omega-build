/* $Id: ImageEditP.h 3 2002-10-21 13:28:25Z ab $ */
/*************************************<+>*************************************
 *****************************************************************************
 **
 **   File:        ImageEditP.h    
 **
 **   Project:     X Widgets
 **
 **   Description: Private include file for the ImageEdit class
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

#if XmVersion >= 1002
#include <Xm/PrimitiveP.h>
#endif

/*  ImageEdit class structure  */

typedef struct _XmImageEditClassPart
{
	int foo;

} XmImageEditClassPart;


/*  Full class record declaration for ImageEdit class  */

typedef struct _XmImageEditClassRec
{
   CoreClassPart         core_class;
   XmPrimitiveClassPart  primitive_class;
   XmImageEditClassPart  imageEdit_class;
} XmImageEditClassRec;

extern XmImageEditClassRec XmimageEditClassRec;


/*  The ImageEdit instance record  */

typedef struct _XmImageEditPart
{
   int          pixel_scale;
   int          grid_thickness;
   XImage     * image; 
   Pixel	draw_color;
   Pixel	erase_color;
   Boolean	erase_on;

   int          old_width;
   int          old_height;
   int          pt_x;
   int          pt_y;
   GC           imageEdit_GC;  /*  graphics context for imageEdit drawing   */
   GC           imageEditErase_GC;
   GC           draw_GC;
   Pixel	draw_Pixel;
   XtCallbackList arm_callback;
   XtCallbackList disarm_callback;
} XmImageEditPart;


/*  Full instance record declaration  */

typedef struct _XmImageEditRec
{
   CorePart	   core;
   XmPrimitivePart primitive;
   XmImageEditPart imageEdit;
} XmImageEditRec;

