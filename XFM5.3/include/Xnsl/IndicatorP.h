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

#ifndef _Xnsl_IndicatorP_h /* whole file */
#define _Xnsl_IndicatorP_h 1

#include <Xm/Xm.h>
#include <Xm/XmP.h>
#if XmVersion >= 1002
#include <Xm/PrimitiveP.h> 
#endif

#include <Xnsl/Indicator.h>

/*
 *	Le Nouveau Widget
 */

typedef struct {
	int	rien;
} XnslIndicatorClassPart;

/*
 *	Class record.
 */

typedef struct _XnslIndicatorClassRec {
	CoreClassPart		core_class;
	XmPrimitiveClassPart	primitive_class;
	XnslIndicatorClassPart	indicator_class;
} XnslIndicatorClassRec;

extern XnslIndicatorClassRec xnslIndicatorClassRec;

typedef struct  _XnslIndicatorPart {
	XtCallbackList	arm;
	XtCallbackList	activate;
	int state;
	Pixmap default_pixmap;
	Pixmap *pixmaps;
	int nstates;
	Boolean	change_state;
#ifdef DISSOLVE
	Boolean dissolve;
#endif
	GC	gc;
} XnslIndicatorPart;

typedef struct _XnslIndicatorRec {
	CorePart	core;
	XmPrimitivePart	primitive;
	XnslIndicatorPart	indicator;
} XnslIndicatorRec;

#endif /* _Xnsl_IndicatorP_h -- whole file */
