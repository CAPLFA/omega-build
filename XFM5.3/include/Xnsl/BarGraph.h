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
*  (c) Copyright 1992 - 1998, Nova Sofware Labs  Unpublished - all
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

#ifndef _Xnsl_BarGraph_h
#define _Xnsl_BarGraph_h

externalref WidgetClass xnslBarGraphWidgetClass;

typedef struct _XnslBarGraphClassRec *XnslBarGraphWidgetClass;
typedef struct _XnslBarGraphRec *XnslBarGraphWidget;

#include <Xnsl/Types.h>

#define XnslCR_VALUE_IS_IN_BOUNDS	112
#define XnslCR_VALUE_IS_MAX		113
#define XnslCR_VALUE_IS_MIN		114

typedef struct {
	int             reason;
	XEvent * 	event;		/* always at 0 */
	int             index;
	float           value;
	float           previous_value;
} XnslBarGraphCallbackStruct, *XnslBarGraphCallback;

#define XnslNcolorCount			"colorCount"
#define XnslNcolors			"colors"
#define XnslNlegends			"legends"
#define XnslNpixmapCount		"pixmapCount"
#define XnslNpixmaps			"pixmaps"
#define XnslNbarTitle			"barTitle"
#define XnslNdisplayAxis		"displayAxis"
#define XnslNdisplayGrid		"displayGrid"
#define XnslNdisplayLegend		"displayLegend"
#define XnslNdisplayHorizontal		"displayHorizontal"
#define XnslNdivisions			"divisions"
#define XnslNdivisionsFormat		"divisionsFormat"
#define XnslNemitWarning		"emitWarning"
#define XnslNunitTitle			"unitTitle"
#define XnslNinLimitCallback		"inLimitCallback"
#define XnslNfont			"font"
#define XnslNhorizontalMargin		"horizontalMargin"
#define XnslNinterval			"interval"
#define XnslNmaxLimit			"maxLimit"
#define XnslNmaximum			"maximum"
#define XnslNminLimit			"minLimit"
#define XnslNminimum			"minimum"
#define XnslNorigin			"origin"
#define XnslNoutLimitCallback		"outLimitCallback"
#define XnslNsubDivisions		"subDivisions"
#define XnslNvalues			"values"
#define XnslNvalueCount			"valueCount"
#define XnslNverticalMargin		"verticalMargin"
#define XnslNwarningColor		"warningColor"
#define XnslNwarningPixmap		"warningPixmap"
#define XnslNbarShadowThickness		"barShadowThickness"

#define XnslCColorCount			"ColorCount"
#define XnslCColors			"Colors"
#define XnslCLegends			"Legends"
#define XnslCPixmapCount		"PixmapCount"
#define XnslCPixmaps			"Pixmaps"
#define XnslCBarTitle			"BarTitle"
#define XnslCDisplayAxis		"DisplayAxis"
#define XnslCDisplayGrid		"DisplayGrid"
#define XnslCDisplayLegend		"DisplayLegend"
#define XnslCDisplayHorizontal		"DisplayHorizontal"
#define XnslCDivisions			"Divisions"
#define XnslCDivisionsFormat		"DivisionsFormat"
#define XnslCEmitWarning		"EmitWarning"
#define XnslCUnitTitle			"UnitTitle"
#define XnslCFont			"Font"
#define XnslCHorizontalMargin		"HorizontalMargin"
#define XnslCInterval			"Interval"
#define XnslCMaxLimit			"MaxLimit"
#define XnslCMaximum			"Maximum"
#define XnslCMinLimit			"MinLimit"
#define XnslCMinimum			"Minimum"
#define XnslCOrigin			"Origin"
#define XnslCSubDivisions		"SubDivisions"
#define XnslCValues			"Value"
#define XnslCValueCount			"ValueCount"
#define XnslCVerticalMargin		"VerticalMargin"
#define XnslCWarningColor		"WarningColor"
#define XnslCWarningPixmap		"WarningPixmap"
#define XnslCBarShadowThickness		"BarShadowThickness"
#define XnslCOutLimitCallback		"OutLimitCallback"
#define XnslCInLimitCallback		"InLimitCallback"

#if defined(__STDC__) || defined(__cplusplus) || defined(c_plusplus)
#define _PROTO(x) x
#else /* __STDC__ */
#define _PROTO(x) ()
#endif /* __STDC__ */

#if defined(__cplusplus) || defined(c_plusplus)
extern "C" {
#endif

extern void XnslGraphComplete _PROTO(( void ));
extern void XnslGraphTokenHandler _PROTO(( void (*handler) () ));
extern float XnslBarGraphGetValue _PROTO((Widget, int ));
extern int XnslBarGraphSetValue _PROTO((Widget, int, double));

#undef _PROTO

#if defined(__cplusplus) || defined(c_plusplus)
}
#endif

#endif					/* _Xnsl_BarGraph_h */
