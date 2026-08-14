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

#ifndef _Xnsl_Joystick_h /* whole file */
#define _Xnsl_Joystick_h 1

#ifndef XnslCR_ARM
#define XnslCR_ARM			XmCR_ARM
#endif
#ifndef XnslCR_DRAG
#define XnslCR_DRAG			XmCR_DRAG
#endif
#define XnslCR_RELEASE			106
/* These are bitwise OR-able */
#define XnslCR_X_VALUE_CHANGED		(1 <<  8)
#define XnslCR_Y_VALUE_CHANGED		(1 <<  9)
#define XnslCR_W_VALUE_CHANGED		(1 << 10)
#define XnslCR_H_VALUE_CHANGED		(1 << 11)


extern WidgetClass xnslJoystickWidgetClass;

typedef struct _XnslJoystickClassRec *XnslJoystickWidgetClass;
typedef struct _XnslJoystickRec      *XnslJoystickWidget;

#define XnslNcursorBorderColor		"cursorBorderColor"
#define XnslNcursorBorderPixmap		"cursorBorderPixmap"
#define XnslNcursorBorderStyle		"cursorBorderStyle"
#define XnslNcursorBorderWidth		"cursorBorderWidth"
#define XnslNcursorColor		"cursorColor"
#define XnslNcursorHorizontalSize	"cursorHorizontalSize"
#define XnslNcursorPixmap		"cursorPixmap"
#define XnslNcursorStyle		"cursorStyle"
#define XnslNcursorVerticalSize		"cursorVerticalSize"
#define XnslNdragCallback		"dragCallback"
#define XnslNheightValue		"heightValue"
#define XnslNreleaseCallback		"releaseCallback"
#define XnslNresizeMode			"resizeMode"
#define XnslNselectCallback		"selectCallback"
#define XnslNspring			"spring"
#define XnslNvalueChangedCallback	"valueChangedCallback"
#define XnslNwarp			"warp"
#define XnslNwidthValue			"widthValue"
#define XnslNxMaxValue			"xMaxValue"
#define XnslNxMinValue			"xMinValue"
#define XnslNxValue			"xValue"
#define XnslNyMaxValue			"yMaxValue"
#define XnslNyMinValue			"yMinValue"
#define XnslNyValue			"yValue"

#define XnslCDragCallback		"DragCallback"
#define XnslCReleaseCallback		"ReleaseCallback"
#define XnslCSelectCallback		"SelectCallback"
#define XnslCSpring			"Spring"
#define XnslCValueChangedCallback	"ValueChangedCallback"
#define XnslCWarp			"Warp"

#define XnslRBorderStyle		"BorderStyle"
#define XnslRCursorStyle		"CursorStyle"
#define XnslRResizeMode			"ResizeMode"

typedef struct {
	int reason;
	XEvent *event;
	int x;
	int y;
	int width;
	int height;
} XnslJoystickCallbackStruct;

/* Border Styles */
#define XnslBORDER_SHADOW_IN	0
#define XnslBORDER_SHADOW_OUT 	1
#define XnslBORDER_LINE	 	2

/* Cursor Styles */
#define XnslCURSOR_OUT_LINE 	0
#define XnslCURSOR_SOLID	1
#define XnslCURSOR_PIXMAP	2

/* Resize Modes */
#define XnslNO_RESIZE	0
#define XnslDO_RESIZE	1

#endif /* _Xnsl_Joystick_h -- whole file */
