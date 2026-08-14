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

#ifndef _Xnsl_Reasons_h /* whole file */
#define _Xnsl_Reasons_h 1

/* These are the same as OSF/Motif */
#define XnslCR_ACTIVATE			XmCR_ACTIVATE
#define XnslCR_ARM			XmCR_ARM
#define XnslCR_DRAG			XmCR_DRAG

/* We'll start at 100 to hopefully avoid collision with OSF/Motif */
#define XnslCR_ACTIVE_CELL_SET		100
#define XnslCR_ACTIVE_CELL_UNSET	101
#define XnslCR_CLICK_IN_CELL		102
#define XnslCR_KEY_IN_CELL		103
#define XnslCR_MAX_LIMIT		104
#define XnslCR_MIN_LIMIT		105
#define XnslCR_RELEASE			106
#define XnslCR_RESIZE_ATTEMPT		107
#define XnslCR_RESIZE_DONE		108
#define XnslCR_SELECT			109
#define XnslCR_SELECTION		110
#define XnslCR_TABLE_SCROLLED		111
#define XnslCR_VALUE_IS_IN_BOUNDS	112
#define XnslCR_VALUE_IS_MAX		113
#define XnslCR_VALUE_IS_MIN		114
#define	XnslCR_ENTER_MAX		115
#define XnslCR_LEAVE_MAX		116
#define XnslCR_ENTER_MIN		117
#define XnslCR_LEAVE_MIN 		118
#ifdef DRAW1_0
#define XnslCR_DRAW_MULTI_CLICK 	120
#define XnslCR_DRAW_SELECT_OBJECT	121
#define XnslCR_DRAW_MODIFY_GEOMETRY 	122
#define XnslCR_DRAW_MODIFY_GRAPH	123
#define	XnslCR_DRAW_ADD_FONT		124
#define XnslCR_DRAW_ADD_BITMAP		125
#define XnslCR_DRAW_ADD_COLOR		126
#define XnslCR_DRAW_ADD_PIXMAP		127
#define XnslCR_DRAW_REPAINT		128
#define XnslCR_DRAW_COMPLETE_POINTS 	129
#define XnslCR_DRAW_COMPLETE_ALL 	130
#define XnslCR_DRAW_SELECT_VERIFY 	131
#define XnslCR_DRAW_VERIFY_GEOMETRY 	132
#define XnslCR_DRAW_VERIFY_GRAPH	133
#define XnslCR_DRAW_INPUT		134
#define XnslCR_DRAW_SCRIPT_VERIFY	135
#define XnslCR_DRAW_SCRIPT_DONE		136
#define XnslCR_DRAW_RESIZE 		137
#endif
/* These are bitwise OR-able */
#define XnslCR_X_VALUE_CHANGED		(1 <<  8)
#define XnslCR_Y_VALUE_CHANGED		(1 <<  9)
#define XnslCR_W_VALUE_CHANGED		(1 << 10)
#define XnslCR_H_VALUE_CHANGED		(1 << 11)

#endif /* _Xnsl_Reasons_h, whole file */
