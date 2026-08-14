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

#ifndef _Xnsl_Indicator_h /* whole file */
#define _Xnsl_Indicator_h 1

#include <Xnsl/Types.h>

#ifndef XnslCR_ACTIVATE
#define XnslCR_ACTIVATE			XmCR_ACTIVATE
#endif
#ifndef XnslCR_ARM
#define XnslCR_ARM			XmCR_ARM
#endif

typedef struct {
	int reason;
	XEvent *event;
	int state;
} XnslIndicatorCallbackStruct;

extern WidgetClass xnslIndicatorWidgetClass;

typedef struct _XnslIndicatorClassRec *XnslIndicatorWidgetClass;
typedef struct _XnslIndicatorRec      *XnslIndicatorWidget;

#define XnslNactivateCallback		"activateCallback"
#define XnslNarmCallback		"armCallback"
#define XnslNchangeState		"changeState"
#define XnslNdissolve			"dissolve"
#define XnslNnumStates			"numStates"
#define XnslNpixmap			"pixmap"
#define XnslNpixmaps			"pixmaps"
#define XnslNstate			"state"

#define XnslCChangeState		"ChangeState"
#define XnslCDissolve			"Dissolve"
#define XnslCNumStates			"NumStates"
#define XnslCPixmap			"Pixmap"
#define XnslCPixmaps			"Pixmaps"
#define XnslCState			"State"

#if defined(__STDC__) || defined(__cplusplus) || defined(c_plusplus)
#define _PROTO(x) x
#else /* __STDC__ */
#define _PROTO(x) ()
#endif /* __STDC__ */

#if defined(__cplusplus) || defined(c_plusplus)
extern "C" {
#endif

extern void XnslControlComplete _PROTO(( void ));
extern void XnslControlTokenHandler _PROTO(( void (* handler)() ));


#undef _PROTO

#if defined(__cplusplus) || defined(c_plusplus)
}
#endif


#endif /* _Xnsl_Indicator_h -- whole file */
