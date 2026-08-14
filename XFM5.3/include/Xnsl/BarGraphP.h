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

#ifndef _Xnsl_BarGraphP_h
#define _Xnsl_BarGraphP_h

#include <Xm/Xm.h>
#include <Xm/XmP.h>
#if XmVersion >= 1002
#include <Xm/PrimitiveP.h> 
#endif

#include <Xnsl/BarGraph.h>

/*
 *	Le Nouveau Widget
 */

typedef struct _XnslBarGraphClassPart {
	int             rien;
}               XnslBarGraphClassPart;

/*
 *	Class record.
 */

typedef struct _XnslBarGraphClassRec {
	CoreClassPart   core_class;
	XmPrimitiveClassPart primitive_class;
	XnslBarGraphClassPart bargraph_class;
} XnslBarGraphClassRec;

externalref XnslBarGraphClassRec xnslBarGraphClassRec;

typedef struct _XnslBarGraphPart {
	XtCallbackList  in_limit_callback;
	XtCallbackList  out_limit_callback;
	float          *values;
	int             num_values;
	String         *value_legends;
	String          title_legend;
	String          unit_legend;
	float           origin;
	float           minimum, maximum;
	float           min_limit, max_limit;
	Pixel          *colors;
	int             num_colors;
	Pixel           warning_color;
	Pixmap         *pixmaps;
	int             num_pixmaps;
	Pixmap          warning_pixmap;
	int             horizontal_margin;
	int             vertical_margin;
	int             inter_space;
	int             divisions;
	int             subdivisions;
	int             space_div;
	XFontStruct    *font;
	Boolean         display_axis;
	Boolean         display_legend;
	Boolean         display_grid;
	Boolean         display_horiz;
	String          legend_format;
	int             bar_shadow_thickness;
	GC              gc;
	GC              gc_dash;
	Boolean         in_callback;
	Boolean         emit_warning;
}               XnslBarGraphPart;

typedef struct _XnslBarGraphRec {
	CorePart        core;
	XmPrimitivePart primitive;
	XnslBarGraphPart bargraph;
}               XnslBarGraphRec;

#endif					/* _Xnsl_BarGraphP_h */
