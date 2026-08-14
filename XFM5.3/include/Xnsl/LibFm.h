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

#ifndef _Xnsl_LibFm_h /* whole file */
#define _Xnsl_LibFm_h 1

#include <Xnsl/Stand.h>

typedef struct _FmResourceTypeInfo {
	char	*name;
	int	type;
	char	*avname;
	char	*boxname;
	char	*defval;
	char	*enumnames;
	int	first;
} FmResourceTypeInfo;

#define	XNSL_TYPE_GET_VALUE	1
#define	XNSL_TYPE_GET_STRING	2
#define	XNSL_TYPE_STRING	3

typedef struct _FmEnumerationInfo {
	char	*name;
	char	*values;
	int	first;
	char	*prefix;
} FmEnumerationInfo;

typedef struct _FmTypeDefInfo {
	char	*name;
	char	*caster;
	int	size;
} FmTypeDefInfo;

typedef struct _FmRepresentationInfo {
	char	*name;
	char 	*repname;
	char	*caster;
	int	size;
	int 	aligned;
	int 	indirect;
} FmRepresentationInfo;

typedef	void (*FmTableParseFunction)();
typedef	String (*FmTableMakeFunction)();

typedef struct _FmTableResourceInfo {
	char	*type;
	char	*item;
	FmTableParseFunction	parse;
	FmTableMakeFunction	make;
} FmTableResourceInfo;

#define FM_MAXARGS	12

typedef void	(*FmFunction)();
typedef struct _FmFunctionInfo {
	char	*name;
	FmFunction	func;
	char	*type;
	int	argc;
	char	*argv[FM_MAXARGS];
} FmFunctionInfo;

#if defined(__STDC__) || defined(__cplusplus)
#define _PROTO(x) x
#else /* __STDC__ */
#define _PROTO(x) ()
#endif /* __STDC__ */

#ifdef __cplusplus
extern "C" {
#endif

extern void XnslRegisterConverters _PROTO((void));

#ifndef DRAW1_0
extern int	XnslInitAllLibraries _PROTO((Widget));
#else
extern int	XnslInitAllLibraries _PROTO((void));
#endif

extern int	XnslInitControlLibrary _PROTO((void));
#ifndef DRAW1_0
extern int	XnslInitDrawLibrary _PROTO((Widget));
#else
extern int	XnslInitDrawLibrary _PROTO((void));
#endif
extern int	XnslInitGraphLibrary _PROTO((void));
extern int	XnslInit3dLibrary _PROTO((void));
extern int	XnslInitHtmlLibrary _PROTO((void));
extern int	XnslAddBarGraphWidgetClass _PROTO((FmFunctionsVector *));
#ifndef DRAW1_0
extern int	XnslAddDrawWidgetClass _PROTO((Widget, FmFunctionsVector *));
extern void 	XnslFillDrawFunctionVector _PROTO((FmDrawFunctionVector *));
#else
extern int	XnslAddDrawWidgetClass _PROTO((FmFunctionsVector *));
#endif
extern int	XnslAddJoystickWidgetClass _PROTO((FmFunctionsVector *));
extern int	XnslAddIndicatorWidgetClass _PROTO((FmFunctionsVector *));
extern int	XnslAddSliderWidgetClass _PROTO((FmFunctionsVector *));
extern int	XnslAddStepperWidgetClass _PROTO((FmFunctionsVector *));
extern int 	XnslAddHTMLWidgetClass _PROTO((FmFunctionsVector *));
extern void	FmInitStand _PROTO((FmFunctionsVector *));
extern void	FmInitTypes _PROTO((FmFunctionsVector *));
extern void	FmInitReasons _PROTO((FmFunctionsVector *));
extern void	FmInitEvent _PROTO((FmFunctionsVector *));
/*
extern void	FmInitTimeOut _PROTO((FmFunctionsVector *));
*/
extern void	FmInitFont _PROTO((FmFunctionsVector *));
extern void	FmAddTypeDefList _PROTO((FmFunctionsVector *,FmTypeDefInfo *));
extern void	FmAddRepresentationList _PROTO((FmFunctionsVector *,FmRepresentationInfo *));
extern void	FmAddResourceTypeList _PROTO((FmFunctionsVector *,
					      FmResourceTypeInfo *));
extern void	FmAddEnumeratedTypeList _PROTO((FmFunctionsVector *,
						FmEnumerationInfo *));
extern void	FmSetTableResourceList _PROTO((FmFunctionsVector *,
					       FmTableResourceInfo *));
extern void	FmAttachFunctionList _PROTO((FmFunctionsVector *,
					     FmFunctionInfo *));

void FmInitFunctions _PROTO((FmFunctionsVector *));

#undef _PROTO

#ifdef __cplusplus
}
#endif

#endif /* _Xnsl_LibFm_h, whole file */
