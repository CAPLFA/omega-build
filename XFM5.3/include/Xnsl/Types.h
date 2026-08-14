/******************************************************************************
*******************************************************************************
*
*  (c) Copyright 1992 1993, Nova Sofware Labs
*  ALL RIGHTS RESERVED
*  
*	THIS SOFTWARE IS FURNISHED UNDER A LICENSE AND MAY BE USED
*  AND COPIED ONLY IN ACCORDANCE WITH THE TERMS OF SUCH LICENSE AND
*  WITH THE INCLUSION OF THE ABOVE COPYRIGHT NOTICE. THIS SOFTWARE OR
*  ANY OTHER COPIES THEREOF MAY NOT BE PROVIDED OR OTHERWISE MADE
*  AVAILABLE TO ANY OTHER PERSON. NO TITLE TO AND OWNERSHIP OF THE
*  SOFTWARE IS HEREBY TRANSFERRED.
*  
*	THE INFORMATION IN THIS SOFTWARE IS SUBJECT TO CHANGE WITHOUT
*  NOTICE AND SHOULD NOT BE CONSTRUED AS A COMMITMENT BY 
*  Nova Sofware Labs OR ITS THIRD PARTY SUPPLIERS.
*  
*	Nova Sofware Labs AND ITS THIRD PARTY SUPPLIERS,
*  ASSUME NO RESPONSIBILITY FOR THE USE OR INABILITY TO USE ANY OF ITS
*  SOFTWARE . Nova Sofware Labs SOFTWARE IS PROVIDED "AS IS"
*  WITHOUT WARRANTY OF ANY KIND, AND Nova Sofware Labs EXPRESSLY
*  DISCLAIMS ALL IMPLIED WARRANTIES, INCLUDING BUT NOT LIMITED TO THE
*  IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR
*  PURPOSE.
*  
*  (c) Copyright 1992, 1993, 1994, 1995, 1996, 1997, 1998
*  Nova Sofware Labs  Unpublished - all rights reserved under the Copyright
*  laws of France
*  
*  Nova Sofware Labs		
*  57-59 rue Lhomond,			
*  75005 Paris.			
*  France.				
*					
*  
*******************************************************************************
******************************************************************************/

#ifndef _Xnsl_Types_h
#define _Xnsl_Types_h

typedef float	*FloatTable;
typedef struct _TimeOutRec	TimeOut;

#ifndef XnslRFloat
#define XnslRFloat		"Float"
#endif

#ifndef XnslRFloatTable
#define XnslRFloatTable		"FloatTable"
#endif

#ifndef XnslRImage
#define XnslRImage		"Image"
#endif

#ifndef XnslRPixelTable
#define XnslRPixelTable         "PixelTable"
#endif

#ifndef XnslRPixmap
#define XnslRPixmap		"Pixmap"
#endif

#ifndef XnslRPixmapTable
#define XnslRPixmapTable        "PixmapTable"
#endif

#ifndef XnslRStringTable
#define XnslRStringTable        "StringTable"
#endif

#ifndef XnslRTime
#define XnslRTime		"Time"
#endif

#ifndef XnslRTimeOut
#define XnslRTimeOut		"TimeOut"
#endif


#ifndef XnslSetFloatArg
#define XnslSetFloatArg(arg,n,d) ((arg).name = (n),\
				  ((sizeof(XtArgVal) < sizeof(float))?\
				   ((arg).value = *(XtArgVal *)&(d)):\
				   (*(float *) &(arg).value = d)))
#endif


#if defined(__STDC__) || defined(__cplusplus) || defined(c_plusplus)
#define _PROTO(x) x
#else /* __STDC__ */
#define _PROTO(x) ()
#endif /* __STDC__ */

#if defined(__cplusplus) || defined(c_plusplus)
extern "C" {
#endif

extern Pixmap	XnslGetColorPixmap			_PROTO(( Screen *screen, Colormap colormap, char *image_name, Pixel foreground, Pixel background ));
extern void	XnslRegisterColorPixmapConverter	_PROTO(( String pixmap_type, int primitive ));
extern void	XnslRegisterConverters			_PROTO(( void ));
extern void	XnslRegisterFloatTableConverter		_PROTO(( void ));
extern void	XnslRegisterPixelTableConverter		_PROTO(( void ));
extern Boolean	XnslCvtStringToPixmapTable		_PROTO(( Display *dpy, XrmValuePtr args, Cardinal *numArgs, XrmValuePtr fromVal, XrmValuePtr toVal, XtPointer *data ));
extern void	XnslRegisterPixmapTableConverter	_PROTO(( void ));
extern void	XnslRegisterStringTableConverter	_PROTO(( void ));
extern TimeOut	*FmStartTimeOut				_PROTO((Widget,String,unsigned));	/* Stepper.c timeout.c */
extern void	FmKillTimeOut				_PROTO((TimeOut *));	/* Stepper.c timeout.c */
extern Boolean	FmSetEnumConverter			_PROTO((char *,char *,int));	/* Joystick.c StepperF.c enum.c */

#undef _PROTO

#if defined(__cplusplus) || defined(c_plusplus)
}
#endif

#endif /* _Xnsl_Types_h */
