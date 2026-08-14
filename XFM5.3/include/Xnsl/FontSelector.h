#ifndef _FONTSELECTOR_H_
#define _FONTSELECTOR_H_

#ifndef _XNSL_REASONS_H_
#include <Xnsl/Reasons.h>
#define _XNSL_REASONS_H_
#endif /* _XNSL_REASONS_H_ */

#ifndef XnslNfontSelectorCallback
#define XnslNfontSelectorCallback "fontSelectorCallback"
#endif
#ifndef XnslCFontSelectorCallback
#define XnslCFontSelectorCallback "FontSelectorCallback"
#endif
#ifndef XtRCallback
#define XtRCallback "Callback"
#endif

#ifndef XnslNsetNameAndFont
#define XnslNsetNameAndFont "setNameAndFont"
#endif
#ifndef XnslCSetNameAndFont
#define XnslCSetNameAndFont "SetNameAndFont"
#endif
#ifndef XtRBoolean
#define XtRBoolean "Boolean"
#endif

#ifndef XnslNexampleString
#define XnslNexampleString "exampleString"
#endif
#ifndef XnslCExampleString
#define XnslCExampleString "ExampleString"
#endif
#ifndef XtRString
#define XtRString "String"
#endif

#ifndef XnslNfontName
#define XnslNfontName "fontName"
#endif
#ifndef XnslCFontName
#define XnslCFontName "FontName"
#endif
#ifndef XtRString
#define XtRString "String"
#endif

#ifndef XnslNfontTitle
#define XnslNfontTitle "fontTitle"
#endif
#ifndef XnslCFontTitle
#define XnslCFontTitle "FontTitle"
#endif
#ifndef XtRString
#define XtRString "String"
#endif

#ifndef XnslNfontScaleLabel
#define XnslNfontScaleLabel "fontScaleLabel"
#endif
#ifndef XnslCFontScaleLabel
#define XnslCFontScaleLabel "FontScaleLabel"
#endif
#ifndef XtRString
#define XtRString "String"
#endif

#ifndef XnslNfontFamilyLabel
#define XnslNfontFamilyLabel "fontFamilyLabel"
#endif
#ifndef XnslCFontFamilyLabel
#define XnslCFontFamilyLabel "FontFamilyLabel"
#endif
#ifndef XtRString
#define XtRString "String"
#endif

#ifndef XnslNfontWeightLabel
#define XnslNfontWeightLabel "fontWeightLabel"
#endif
#ifndef XnslCFontWeightLabel
#define XnslCFontWeightLabel "FontWeightLabel"
#endif
#ifndef XtRString
#define XtRString "String"
#endif

#ifndef XnslNfontPixelLabel
#define XnslNfontPixelLabel "fontPixelLabel"
#endif
#ifndef XnslCFontPixelLabel
#define XnslCFontPixelLabel "FontPixelLabel"
#endif
#ifndef XtRString
#define XtRString "String"
#endif

#ifndef XnslNfontSetwidthLabel
#define XnslNfontSetwidthLabel "fontSetwidthLabel"
#endif
#ifndef XnslCFontSetwidthLabel
#define XnslCFontSetwidthLabel "FontSetwidthLabel"
#endif
#ifndef XtRString
#define XtRString "String"
#endif

#ifndef XnslNfontSlantLabel
#define XnslNfontSlantLabel "fontSlantLabel"
#endif
#ifndef XnslCFontSlantLabel
#define XnslCFontSlantLabel "FontSlantLabel"
#endif
#ifndef XtRString
#define XtRString "String"
#endif

#ifndef XnslNfontOtherLabel
#define XnslNfontOtherLabel "fontOtherLabel"
#endif
#ifndef XnslCFontOtherLabel
#define XnslCFontOtherLabel "FontOtherLabel"
#endif
#ifndef XtRString
#define XtRString "String"
#endif

extern WidgetClass xnslFontSelectorWidgetClass;

typedef struct _XnslFontSelectorClassRec *XnslFontSelectorWidgetClass;

typedef struct _XnslFontSelectorRec *XnslFontSelectorWidget;

extern Widget XnslFontGetChild(
#if NeedFunctionPrototypes
XnslFontSelectorWidget w, int child);
#else
);
#endif
#define XnslFONTSELECTOR_TEXT 1
#define XnslFONTSELECTOR_MESSAGE_BOX 2

extern Widget FmCreateFontSelector(
#if NeedFunctionPrototypes
String name, Widget parent, Arg* args, Cardinal num_args);
#else
);
#endif

#if defined(_XFM) || defined(XFM)
extern int _FmAddFontSelectorWidgetClass(
#if NeedFunctionPrototypes
struct _FmFunctionsVector* vect);
#else
);
#endif
#endif

#ifdef XFM
extern int FmAddFontSelectorWidgetClass(
#if NeedFunctionPrototypes
#if !defined(__cplusplus) && !defined(c_plusplus)
void
#endif
);
#else
);
#endif
#endif

typedef struct {
int reason;
XEvent *event;
String font_name;
} XnslFontSelectorCallbackStruct;

#endif /* _FONTSELECTOR_H_ */
