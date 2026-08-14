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

#ifndef _Xnsl_JoystickP_h /* whole file */
#define _Xnsl_JoystickP_h 1

#include <Xm/Xm.h>
#include <Xm/XmP.h>
#if XmVersion >= 1002
#include <Xm/PrimitiveP.h> 
#endif
#include <Xnsl/Joystick.h> 

#define		CURSOR_IN	 		0
#define 	CURSOR_OUT	 		0xffff
#define 	CURSOR_UPPER_LEFT 		0x1001
#define 	CURSOR_UPPER 			0x1000
#define 	CURSOR_UPPER_RIGHT 		0x1010
#define 	CURSOR_RIGHT 			0x0010
#define 	CURSOR_LOWER_RIGHT 		0x0110
#define 	CURSOR_LOWER 			0x0100
#define 	CURSOR_LOWER_LEFT 		0x0101
#define 	CURSOR_LEFT 			0x0001

/*
 *	Le Nouveau Widget
 */

typedef struct {
	int queud;
} XnslJoystickClassPart;

/*
 *	Class record.
 */

typedef enum {
	JOYSTICK_SLEEP,
	JOYSTICK_ARM,
	JOYSTICK_DRAG,
	JOYSTICK_RELEASE,
	JOYSTICK_RESIZE
} _XnslJoystickState;

typedef struct {
	CoreClassPart		core_class;
	XmPrimitiveClassPart	primitive_class;
	XnslJoystickClassPart	joystick_class;
} XnslJoystickClassRec;

extern XnslJoystickClassRec xnslJoystickClassRec;

typedef struct {
	XtCallbackList	select;
	XtCallbackList	drag;	
	XtCallbackList	release;
	XtCallbackList	value;

	int		xValue;
	int 		yValue;

	int 		xMinValue;
	int 		xMaxValue;
	int		yMinValue;
	int 		yMaxValue;

	int	cursorHorizontalSize;
	int	cursorVerticalSize;
	
	int 		cursorBorderStyle;
	int	cursorBorderWidth;
	Pixel 		cursorBorderColor;
	Pixmap 		cursorBorderPixmap;

	int		cursorStyle;
	Pixel		cursorColor;
	Pixmap		cursorPixmap;
	
	int 	cursorX;
	int 	cursorY;
	int	cursorWidth;
	int 	cursorHeight;

	GC		cursorGC;
	GC 		borderGC;
	
	int 		cursorPixmapWidth;
	int 		cursorPixmapHeight;

	Cursor 		cursor;
	int 		x, y;
	int 		width, height;
 	int 		xOff, yOff;
	int 		where;
	
	int 		resizeMode;
	int 		first;
	
	int 		old_x;
	int 		old_y;
	int 		old_w;
	int 		old_h;
	_XnslJoystickState state;
	
	Cursor UpperLeft;
	Cursor Upper;
	Cursor UpperRight;
	Cursor Right;
	Cursor LowerRight;
	Cursor Lower;
	Cursor LowerLeft;
	Cursor Left;
	Cursor Track;

} XnslJoystickPart;

typedef struct _XnslJoystickRec {
	CorePart	core;
	XmPrimitivePart	primitive;
	XnslJoystickPart	joystick;
} XnslJoystickRec;

#endif /* _Xnsl_JoystickP_h -- whole file */
