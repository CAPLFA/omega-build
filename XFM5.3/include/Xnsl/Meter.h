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

#ifndef _Xnsl_Meter_h /* whole file */
#define _Xnsl_Meter_h 1

extern WidgetClass xnslMeterWidgetClass;

typedef struct _XnslMeterClassRec *XnslMeterWidgetClass;
typedef struct _XnslMeterRec      *XnslMeterWidget;

#define XnslNminimum			"minimum"
#define XnslNmaximum			"maximum"
#define XnslNminLimit			"minLimit"
#define XnslNmaxLimit			"maxLimit"
#define XnslNangle			"angle"
#define XnslNvalue			"value"
#define XnslNfloatUnits			"floatUnits"
#define XnslNfont			"font"
#define XnslNtitle			"title"
#define XnslNxorMode			"xorMode"
#define XnslNleftNeedleColor		"leftNeedleColor"
#define XnslNleftNeedlePixmap		"leftNeedlePixmap"
#define XnslNrightNeedleColor		"rightNeedleColor"
#define XnslNrightNeedlePixmap		"rightNeedlePixmap"
#define XnslNminLimitColor		"minLimitColor"
#define XnslNminLimitPixmap		"minLimitPixmap"
#define XnslNmaxLimitColor		"maxLimitColor"
#define XnslNmaxLimitPixmap		"maxLimitPixmap"
#define XnslNautoScale			"autoScale"
#define XnslNroundBounds		"roundBounds"
#define XnslNdivisions			"divisions"
#define XnslNsubDivisions		"subDivisions"
#define XnslNscaleFactor		"scaleFactor"
#define XnslNdivisionsFormat		"divisionsFormat"
#define XnslNminCallback		"minCallback"
#define XnslNmaxCallback		"maxCallback"
#define XnslNlineNeedle			"lineNeedle"
#define XnslNneedleWidth		"needleWidth"

#define XnslCMinimum			"Minimum"
#define XnslCMaximum			"Maximum"
#define XnslCMinLimit			"MinLimit"
#define XnslCMaxLimit			"MaxLimit"
#define XnslCAngle			"Angle"
#define XnslCValue			"Value"
#define XnslCFloatUnits			"FloatUnits"
#define XnslCFont			"Font"
#define XnslCTitle			"Title"
#define XnslCXorMode			"XorMode"
#define XnslCLeftNeedleColor		"LeftNeedleColor"
#define XnslCLeftNeedlePixmap		"LeftNeedlePixmap"
#define XnslCRightNeedleColor		"RightNeedleColor"
#define XnslCRightNeedlePixmap		"RightNeedlePixmap"
#define XnslCMinLimitColor		"MinLimitColor"
#define XnslCMinLimitPixmap		"MinLimitPixmap"
#define XnslCMaxLimitColor		"MaxLimitColor"
#define XnslCMaxLimitPixmap		"MaxLimitPixmap"
#define XnslCAutoScale			"AutoScale"
#define XnslCRoundBounds		"RoundBounds"
#define XnslCDivisions			"Divisions"
#define XnslCSubDivisions		"SubDivisions"
#define XnslCScaleFactor		"ScaleFactor"
#define XnslCDivisionsFormat		"DivisionsFormat"
#define XnslCLineNeedle			"LineNeedle"
#define XnslCNeedleWidth		"NeedleWidth"

#include <Xnsl/Types.h>

typedef struct {
	int reason;
	XEvent *event;
	float value;
} XnslMeterCallbackStruct;

/*
 * Callback reasons:
 */

#define XnslCR_MAX_LIMIT		104 		/* Meter.c */
#define XnslCR_MIN_LIMIT		105 		/* Meter.c */

#endif /* _Xnsl_Meter_h -- whole file */
