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

#ifndef _Xnsl_MeterP_h /* whole file */
#define _Xnsl_MeterP_h 1

#include <Xm/Xm.h>
#include <Xm/XmP.h>
#if XmVersion >= 1002
#include <Xm/PrimitiveP.h> 
#endif
#include <Xnsl/Meter.h> 

/*
 *	Le Nouveau Widget
 */

typedef struct {
	int	rien;
} XnslMeterClassPart;

/*
 *	Class record.
 */

typedef struct _XnslMeterClassRec {
	CoreClassPart		core_class;
	XmPrimitiveClassPart	primitive_class;
	XnslMeterClassPart	meter_class;
} XnslMeterClassRec;

extern XnslMeterClassRec xnslMeterClassRec;

typedef struct _XnslMeterPart {
	/*
	 * Resource data.
	 */
	float min, max;			/* Minimum and maximum graduations */
	float min_zone, max_zone;	/* Warning zones */
	float value;			/* Current value */
	int alpha0;			/* Half-angle of the meter graduation in degrees
					 * (90 = half-circle meter) */
	XFontStruct* font;		/* Graduations font */
	Boolean float_units;		/* Display graduations as floats ? */
	Boolean xor_mode;		/* Draw needle in XOR */
	Boolean auto_scale;		/* Adjust maximum/minimum automatically ? */
	Boolean round_bounds;		/* Round maximum/minimum to power of 10 ? */
	Pixel left_needle_color;	/* Color of left part of needle */
	Pixmap left_needle_pixmap;	/* ... */
	Pixel right_needle_color;	/* ... */
	Pixmap right_needle_pixmap;	/* ... */
	Pixel min_zone_color;		/* Color of minimum warning zone */
	Pixmap min_zone_pixmap;		/* ... */
	Pixel max_zone_color;		/* ... */
	Pixmap max_zone_pixmap;		/* ... */
	int divisions;			/* Number of main divisions */
	int sub_divisions;		/* Number of secondary divisions */
	float scale;			/* multiplicative factor (e.g. x 100) */
	String format;			/* Divisions print format. */
	String title;			/* Meter title. */
	Boolean line_needle;		/* Line / polygon needle. */
	Dimension needle_width;		/* Needle width if line_needle is True. */
	/*
	 * Private data.
	 */
	float biggrad, smallgrad;	/* Interval between 2 divisions/subdivision */
	int radius;			/* Length of needle */
	int centerx, centery;		/* Center of meter circle in widget coords. */
	float alpha;			/* Angle in radians */
	int margin;			/* margin */
	int old_pot;			/* internal */
	/*
	 * Callbacks.
	 */
	XtCallbackList value_changed_callback;
	XtCallbackList drag_callback;
	XtCallbackList min_callback;
	XtCallbackList max_callback;
	/*
	 *  GC's.
	 */
	GC face1_gc;
	GC face2_gc;
	GC min_zone_gc;
	GC max_zone_gc;
	GC clear_gc;
	GC smallgrad_gc;
	GC biggrad_gc;
	GC text_gc;
	GC center_gc;
} XnslMeterPart;

typedef struct _XnslMeterRec {
	CorePart	core;
	XmPrimitivePart	primitive;
	XnslMeterPart	meter;
} XnslMeterRec;

#endif /* _Xnsl_MeterP_h -- whole file */
