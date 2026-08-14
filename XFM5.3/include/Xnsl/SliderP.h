/******************************************************************************
*******************************************************************************
*
*  (c) Copyright 1992 1993, Nova Sofware Labs
*  ALL RIGHTS RESERVED
*  
*  	THIS SOFTWARE IS FURNISHED UNDER A LICENSE AND MAY BE USED
*  AND COPIED ONLY IN ACCORDANCE WITH THE TERMS OF SUCH LICENSE AND
*  WITH THE INCLUSION OF THE ABOVE COPYRIGHT NOTICE. THIS SOFTWARE OR
*  ANY OTHER COPIES THEREOF MAY NOT BE PROVIDED OR OTHERWISE MADE
*  AVAILABLE TO ANY OTHER PERSON. NO TITLE TO AND OWNERSHIP OF THE
*  SOFTWARE IS HEREBY TRANSFERRED.
*  
*  	THE INFORMATION IN THIS SOFTWARE IS SUBJECT TO CHANGE WITHOUT
*  NOTICE AND SHOULD NOT BE CONSTRUED AS A COMMITMENT BY 
*  Nova Sofware Labs OR ITS THIRD PARTY SUPPLIERS.
*  
*  	Nova Sofware Labs AND ITS THIRD PARTY SUPPLIERS,
*  ASSUME NO RESPONSIBILITY FOR THE USE OR INABILITY TO USE ANY OF ITS
*  SOFTWARE . Nova Sofware Labs SOFTWARE IS PROVIDED "AS IS"
*  WITHOUT WARRANTY OF ANY KIND, AND Nova Sofware Labs EXPRESSLY
*  DISCLAIMS ALL IMPLIED WARRANTIES, INCLUDING BUT NOT LIMITED TO THE
*  IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR
*  PURPOSE.
*  
*  (c) Copyright 1992 1993, Nova Sofware Labs  Unpublished - all
*  rights reserved under the Copyright laws of France
*  
*  Nova Sofware Labs 		
*  57-59 rue Lhomond, 			
*  75005 Paris. 			
*  France. 				
*					
*  
*******************************************************************************
******************************************************************************/

#ifndef _XnslSliderP_h /* whole file */
#define _XnslSliderP_h 1

#include <Xnsl/Slider.h>

typedef struct _XnslSliderClassPart {
          int    empty;
} XnslSliderClassPart;

typedef struct _XnslSliderClassRec {
	CoreClassPart		core_class;
	CompositeClassPart	composite_class;
	ConstraintClassPart	constraint_class;
	XmManagerClassPart	manager_class;
	XmScaleClassPart	scale_class;
	XnslSliderClassPart	slider_class;
} XnslSliderClassRec;

extern XnslSliderClassRec xnslSliderClassRec;

	/* where values */
#define XnslSLIDER_IN_MIN		0
#define XnslSLIDER_IN_NORMAL		1
#define XnslSLIDER_IN_MAX 		2

typedef struct {
	/* resources */

     XtCallbackList maxCallback;
     XtCallbackList minCallback;
     Boolean show_arrows;
     Boolean show_divisions;
     int divisions;
     int sub_divisions;
     int sub_sub_divisions;
     int sub_sub_sub_divisions;
     String format;
     Pixmap limitPixmap;
     int minLimit;
     unsigned long minLimitColor;
     int maxLimit;
     unsigned long maxLimitColor;
     int needleWidth;
     unsigned long needleColor;
     
	/* not resources */

     GC	minDivGC;
     GC maxDivGC;
     GC normGC;
     GC xorGC;
     int min_div_y;
     int max_div_y;
     int min_div_x;
     int max_div_x;
     
     int needleVisible;
     int oldx, oldy;
     int where;

     int is_float_format;
	
} XnslSliderPart;

typedef struct _XnslSliderRec {
	CorePart	core;
	CompositePart	composite;
	ConstraintPart	constraint;
	XmManagerPart	manager;
	XmScalePart	scale;
	XnslSliderPart	slider;
} XnslSliderRec;

#endif /* _Xnsl_SliderP_h -- whole file */
