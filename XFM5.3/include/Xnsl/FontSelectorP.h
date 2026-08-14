#ifndef _FONTSELECTORP_H_
#define _FONTSELECTORP_H_

#include <Xnsl/FontSelector.h>
#include <Xm/FormP.h>

typedef struct {
	int empty;
} XnslFontSelectorClassPart;

typedef struct _XnslFontSelectorClassRec {
  	CoreClassPart      core_class;
	CompositeClassPart composite_class;
	ConstraintClassPart	constraint_class;
	XmManagerClassPart	manager_class;
	XmBulletinBoardClassPart bulletin_board_class;
	XmFormClassPart form_class;
	XnslFontSelectorClassPart xnslFontSelector_class;
} XnslFontSelectorClassRec;

extern XnslFontSelectorClassRec xnslFontSelectorClassRec;

typedef struct _XnslFontSelectorPart {
	Widget widget_table[36];
	XtArgVal fontSelectorCallback;
	XtArgVal setNameAndFont;
	XtArgVal exampleString;
	XtArgVal fontName;
	XtArgVal fontTitle;
	XtArgVal fontScaleLabel;
	XtArgVal fontFamilyLabel;
	XtArgVal fontWeightLabel;
	XtArgVal fontPixelLabel;
	XtArgVal fontSetwidthLabel;
	XtArgVal fontSlantLabel;
	XtArgVal fontOtherLabel;
} XnslFontSelectorPart;

typedef struct _XnslFontSelectorRec {
	CorePart 	core;
	CompositePart 	composite;
	ConstraintPart		constraint;
	XmManagerPart		manager;
	XmBulletinBoardPart	bulletin_board;
	XmFormPart	form;
	XnslFontSelectorPart xnslFontSelector;
} XnslFontSelectorRec;

extern XmString _XnslFontSelCreateXmString(
#if NeedFunctionPrototypes
String s
#endif
);

extern char *_XnslFontSelGetString(
#if NeedFunctionPrototypes
XmString s
#endif
);

extern int _XnslFontSelInit(
#if NeedFunctionPrototypes
Widget w
#endif
);

extern void _XnslFontSetFamily(
#if NeedFunctionPrototypes
Widget w
#endif
);

extern void _XnslFontSetOther(
#if NeedFunctionPrototypes
Widget w
#endif
);

extern void _XnslFontSelSet(
#if NeedFunctionPrototypes
Widget w, char *res, int val
#endif
);

extern void _XnslFontSetPullDown(
#if NeedFunctionPrototypes
Widget slant, Widget weight, Widget pixel, Widget setwidth
#endif
);

extern void _XnslFontSelSetLists(
#if NeedFunctionPrototypes
XtPointer p, Widget fam, Widget other
#endif
);

extern void _XnslFontSelSetSlant(
#if NeedFunctionPrototypes
XtPointer p, Widget popup, Widget option
#endif
);

extern void _XnslFontSelSetWeight(
#if NeedFunctionPrototypes
XtPointer p, Widget popup, Widget option
#endif
);

extern void _XnslFontSelSetPixel(
#if NeedFunctionPrototypes
XtPointer p, Widget popup, Widget option
#endif
);

extern void _XnslFontSelSetSetWidth(
#if NeedFunctionPrototypes
XtPointer p, Widget popup, Widget option
#endif
);

extern void _XnslFontSelFree(
#if NeedFunctionPrototypes
XtPointer p
#endif
);

extern void _XnslFontSelFreeFontList(
#if NeedFunctionPrototypes
Widget w, XtPointer pointer
#endif
);

extern XmFontList _XnslFontSelGetFontList(
#if NeedFunctionPrototypes
Widget w, char *name
#endif
);

extern Boolean _XnslFontSelFontScale(
#if NeedFunctionPrototypes
Widget w, char *name
#endif
);

extern XtPointer _XnslFontSelParse(
#if NeedFunctionPrototypes
Widget w, String str
#endif
);

extern char *_XnslFontSelScaleName(
#if NeedFunctionPrototypes
char *family, char *slant, char *weight, char *setwidth, int pixel_int
#endif
);

extern char *_XnslFontSelBuildName(
#if NeedFunctionPrototypes
char *family, char *slant, char *weight, char *setwidth, char *pixel
#endif
);

extern void _XnslFontSelInitAtt(
#if NeedFunctionPrototypes
String str, Widget slant, Widget weight, Widget pixel, Widget setwidth
#endif
);

#endif /* _FONTSELECTORP_H_ */
