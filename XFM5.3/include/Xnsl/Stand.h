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

#ifndef _Xnsl_Stand_h /* whole file */
#define _Xnsl_Stand_h 1

#include <Fm.h>
#ifndef XnslRTime
#define XnslRTime               "Time"
#endif
typedef struct _FmVariableInfo {
	char	*name;
	int	value;
	char	*type;
} FmVariableInfo;

#ifdef __STDC__
#define _PROTO(x) x
#else /* __STDC__ */
#define _PROTO(x) ()
#endif /* __STDC__ */

extern void		FmCheckPath _PROTO((char *,char **,char));
extern void		FmCheckXbmLangPath _PROTO((void));
extern Time		FmEventTime _PROTO((XEvent *));
extern int		FmGrabPointer _PROTO((Widget,Boolean,Boolean,String,XEvent *));
extern void		FmUngrabPointer _PROTO((Widget,XEvent *));
extern void		FmAddVariableList _PROTO((FmFunctionsVector *, FmVariableInfo *));
extern void		FmAddTypeList _PROTO((FmFunctionsVector *,String *));
extern XmStringCharSet	FmGetSimpleCharSet _PROTO((void));
extern XmFontList	FmFontStructToFontList _PROTO((XFontStruct *));
extern XmFontList	FmFontToFontList _PROTO((Widget,Font));
extern XFontStruct	*FmFontListGetFontStruct _PROTO((XmFontList));
extern Font		FmFontListGetFont _PROTO((XmFontList));
extern XmStringCharSet	FmFontListGetCharSet _PROTO((XmFontList));

#undef _PROTO

#endif /* _Xnsl_Stand_h, whole file */
