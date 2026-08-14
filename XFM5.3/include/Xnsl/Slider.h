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

#ifndef _Xnsl_Slider_h /* whole file */
#define _Xnsl_Slider_h 1

#define	XnslCR_ENTER_MAX		115 		/* Slider.c */
#define XnslCR_LEAVE_MAX		116 		/* Slider.c */
#define XnslCR_ENTER_MIN		117 		/* Slider.c */
#define XnslCR_LEAVE_MIN 		118 		/* Slider.c */

extern WidgetClass xnslSliderWidgetClass;
typedef struct _XnslSliderClassRec *XnslSliderWidgetClass;
typedef struct _XnslSliderRec      *XnslSliderWidget;

#define XnslNdivisions			"divisions"
#define XnslNdivisionsFormat		"divisionsFormat"
#define XnslNlimitPixmap		"limitPixmap"
#define XnslNmaxCallback		"maxCallback"
#define XnslNmaxLimit			"maxLimit"
#define XnslNmaxLimitColor		"maxLimitColor"
#define XnslNminCallback		"minCallback"
#define XnslNminLimit			"minLimit"
#define XnslNminLimitColor		"minLimitColor"
#define XnslNneedleColor		"needleColor"
#define XnslNneedleWidth		"needleWidth"
#define XnslNshowArrows			"showArrows"
#define XnslNshowDivision		"showDivisions"
#define XnslNsubDivisions		"subDivisions"
#define XnslNsubSubDivisions		"subSubDivisions"
#define XnslNsubSubSubDivisions		"subSubSubDivisions"

#define	XnslCDivisions			"Divisions"
#define XnslCColor			"Color"
#define XnslCDivisionsFormat		"DivisionsFormat"
#define XnslCLimitPixmap		"LimitPixmap"
#define XnslCMaxCallback		"MaxCallback"
#define XnslCMaxLimit			"MaxLimit"
#define XnslCMinCallback		"MinCallback"
#define XnslCMinLimit			"MinLimit"
#define XnslCNeedleWidth		"NeedleWidth"
#define XnslCShowArrows			"ShowArrows"
#define XnslCShowDivision		"ShowDivision"
#define XnslCSubDivisions		"SubDivisions"
#define XnslCSubSubDivisions		"SubSubDivisions"
#define XnslCSubSubSubDivisions		"SubSubSubDivisions"

typedef struct {
	int reason;
	XEvent *e;
	int value;
} XnslSliderCallbackStruct;

#endif /* _Xnsl_Slider_h -- whole file */
