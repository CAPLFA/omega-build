#ifndef _Xnsl_Wix_h
#define _Xnsl_Wix_h 1

#define MOTIF  1
#define MOTIF_1_1  1
#define NSL_WIX  1
#define NSL_LIST  1
#define NSL_IMAGE_EDIT  1
#define TREE  1

#include <Xm/Xm.h>

extern WidgetClass wixWidgetClass;

typedef struct _WixClassRec *WixWidgetClass;
typedef struct _WixRec      *WixWidget;

/*
 *	les codes d'erreurs et de messages.
 */

#define	T_OK		0
#define	T_ERROR		1
#define	T_REMOVED	2
#define	T_COPIED	3
#define	T_PREFIX	4
#define	T_ARGCNT	5
#define	T_OCTAL		6
#define	T_WRITTEN	7

#define	E_EXEC_MACRO	0
#define	E_BEG_BUFFER	1
#define	E_END_BUFFER	2
#define	E_OPENING	4
#define	E_CLOSING	5
#define	E_SET_MARK	6
#define	E_UNDEF_CMD	7
#define	E_BAD_OCTAL	8

#define INSERT_STRING	0
#define DELETE_STRING	1

#if defined(__STDC__) || defined(__cplusplus)
#define _PROTO(x)	x
#else
#define _PROTO(x)	()
#endif

typedef struct {
	unsigned char*	a_src;		/* ce qu'on remplace */
	unsigned char*	a_dst;		/* ce qui est remplace */
} alias;

typedef struct _Trans {
	struct _Trans*	prefix;	/* est-ce un prefixe: 0: non, sinon @ table */
	XtActionProc	proc;	/* l'action associee */
} Trans;

alias*		CvtStringToAlias _PROTO((unsigned char *));
char*		WixCopyBuffer _PROTO((Widget));
XtActionProc	WixGetUndo _PROTO((Widget));
Widget		XmCreateScrolledWix _PROTO((Widget, char*,ArgList,int));
unsigned char*	WixGetEndOfBuffer _PROTO((Widget));

typedef struct {
	int	reason;
	int	pos;
	char*	string;
	int	length;
	int	doit;
} VerifyCallbackStruct;

typedef void	(*WixMsgProc) _PROTO((Widget,int,int));
typedef int	(*WixCmdFunc) _PROTO((Widget,int,XtPointer));

typedef struct {
	char*		string;
	XtActionProc	proc;
	int		(*function)();
	char*		help_string;
} WixCommandRec;

typedef struct _WixCommand {
	WixCmdFunc	function;
	int	count;
	XtPointer	arg;
} Command;

#undef _PROTO

#ifndef XmNcolumnNumber
#define XmNcolumnNumber               "columnNumber"
#endif 

#ifndef XmCColumnNumber
#define XmCColumnNumber               "ColumnNumber"
#endif

#ifndef XmNkeyTable
#define	XmNkeyTable		"keyTable"
#endif
#ifndef XmCKeyTable
#define	XmCKeyTable		"KeyTable"
#endif

#ifndef XmNvalue
#define XmNvalue		"value"
#endif
#ifndef XtCValue
#define XtCValue		"Value"
#endif

#ifndef XmNnoCursor
#define XmNnoCursor		"noCursor"
#endif
#ifndef XtCNoCursor
#define XtCNoCursor		"NoCursor"
#endif

#ifndef XmNblockCursor
#define XmNblockCursor		"blockCursor"
#endif
#ifndef XtCBlockCursor
#define XtCBlockCursor		"BlockCursor"
#endif

#ifndef XmNmotionCursor
#define XmNmotionCursor		"motionCursor"
#endif
#ifndef XmNcursor
#define XmNcursor		"cursor"
#endif
#ifndef XmCCursor
#define XmCCursor		"Cursor"
#endif

#ifndef XmNbinaryEdit
#define XmNbinaryEdit		"binaryEdit"
#endif
#ifndef XmCBinaryEdit
#define XmCBinaryEdit		"BinaryEdit"
#endif

#ifndef XmNmonoLine
#define XmNmonoLine		"monoLine"
#endif
#ifndef XmCMonoLine
#define XmCMonoLine		"MonoLine"
#endif

#ifndef XmNreadOnly
#define	XmNreadOnly		"readOnly"
#endif
#ifndef XtCReadOnly
#define	XtCReadOnly		"ReadOnly"
#endif

#ifndef XmNwrap
#define XmNwrap			"wrap"
#endif
#ifndef XtCWrap
#define XtCWrap			"Wrap"
#endif

#ifndef XmNwrapColumn
#define XmNwrapColumn		"wrapColumn"
#endif
#ifndef XtCWrapColumn
#define XtCWrapColumn		"WrapColumn"
#endif

#ifndef XmNcurrentLineNumber
#define XmNcurrentLineNumber	"currentLineNumber"
#endif
#ifndef XmNbufferLineNumber
#define XmNbufferLineNumber	"bufferLineNumber"
#endif

#ifndef XmNfont
#define XmNfont			"font"
#endif
#ifndef XmNsliderMax
#define	XmNsliderMax		"sliderMax"
#endif

#ifndef XmNverifyModifyCallback
#define XmNverifyModifyCallback	"verifyModifyCallback"
#endif
#ifndef XmNbufferModifiedCallback
#define XmNbufferModifiedCallback	"bufferModifiedCallback"
#endif
#ifndef XmNaliasTable
#define XmNaliasTable		"aliasTable"
#endif
#ifndef XmNhScrollPage
#define XmNhScrollPage		"hScrollPage"
#endif
#ifndef XmNbufferModified
#define	XmNbufferModified	"bufferModified"
#endif
#ifndef XmNvScrollSize
#define XmNvScrollSize		"vScrollSize"
#endif
#ifndef XmNvScrollPosition
#define XmNvScrollPosition	"vScrollPosition"
#endif
#ifndef XmNvScrollSizeCallback
#define XmNvScrollSizeCallback	"vScrollSizeCallback"
#endif
#ifndef XmNvScrollPositionCallback
#define XmNvScrollPositionCallback	"vScrollPositionCallback"
#endif
#ifndef XmNhScrollSizeCallback
#define XmNhScrollSizeCallback	"hScrollSizeCallback"
#endif
#ifndef XmNhScrollPositionCallback
#define XmNhScrollPositionCallback	"hScrollPositionCallback"
#endif
#ifndef XmNinnerBorder
#define XmNinnerBorder		"innerBorder"
#endif
#ifndef XmNlineNum
#define XmNlineNum		"lineNum"
#endif
#ifndef XmNtabsize
#define XmNtabsize		"tabsize"
#endif

#ifndef XmNactivateCallback
#define XmNactivateCallback	"activateCallback"
#endif

#ifndef XmNdefaultActionCallback
#define	XmNdefaultActionCallback	"defaultActionCallback"
#endif

#ifndef XtCSliderMax
#define	XtCSliderMax		"SliderMax"
#endif
#ifndef XtCAliasTable
#define XtCAliasTable		"AliasTable"
#endif
#ifndef XtCHScrollPage
#define XtCHScrollPage		"HScrollPage"
#endif
#ifndef XtCBufferModified
#define	XtCBufferModified	"BufferModified"
#endif
#ifndef XtCScroll
#define	XtCScroll		"Scroll"
#endif
#ifndef XtCInnerBorder
#define XtCInnerBorder		"InnerBorder"
#endif
#ifndef XtCLineNum
#define XtCLineNum		"LineNum"
#endif
#ifndef XtCEditCursor
#define XtCEditCursor		"EditCursor"
#endif
#define XtCTabsize		"Tabsize"

#endif /* ! _Xnsl_Wix_h */
