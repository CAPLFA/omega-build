#ifndef _COLORBOX_H_
#define _COLORBOX_H_

#ifndef XnslNtitle
#define XnslNtitle "title"
#endif
#ifndef XnslCTitle
#define XnslCTitle "Title"
#endif
#ifndef XtRString
#define XtRString "String"
#endif

#ifndef XnslNpixel
#define XnslNpixel "pixel"
#endif
#ifndef XnslCPixel
#define XnslCPixel "Pixel"
#endif
#ifndef XtRPixel
#define XtRPixel "Pixel"
#endif

#ifndef XnslNred
#define XnslNred "red"
#endif
#ifndef XnslCRed
#define XnslCRed "Red"
#endif
#ifndef XtRInt
#define XtRInt "Int"
#endif

#ifndef XnslNgreen
#define XnslNgreen "green"
#endif
#ifndef XnslCGreen
#define XnslCGreen "Green"
#endif
#ifndef XtRInt
#define XtRInt "Int"
#endif

#ifndef XnslNblue
#define XnslNblue "blue"
#endif
#ifndef XnslCBlue
#define XnslCBlue "Blue"
#endif
#ifndef XtRInt
#define XtRInt "Int"
#endif

#ifndef XnslNhue
#define XnslNhue "hue"
#endif
#ifndef XnslCHue
#define XnslCHue "Hue"
#endif
#ifndef XtRInt
#define XtRInt "Int"
#endif

#ifndef XnslNsaturation
#define XnslNsaturation "saturation"
#endif
#ifndef XnslCSaturation
#define XnslCSaturation "Saturation"
#endif
#ifndef XtRInt
#define XtRInt "Int"
#endif

#ifndef XnslNintensity
#define XnslNintensity "intensity"
#endif
#ifndef XnslCIntensity
#define XnslCIntensity "Intensity"
#endif
#ifndef XtRInt
#define XtRInt "Int"
#endif

#ifndef XnslNcolorName
#define XnslNcolorName "colorName"
#endif
#ifndef XnslCColorName
#define XnslCColorName "ColorName"
#endif
#ifndef XtRString
#define XtRString "String"
#endif

#ifndef XnslNokCallback
#define XnslNokCallback "okCallback"
#endif
#ifndef XnslCOkCallback
#define XnslCOkCallback "OkCallback"
#endif
#ifndef XtRCallback
#define XtRCallback "Callback"
#endif

#ifndef XnslNcancelCallback
#define XnslNcancelCallback "cancelCallback"
#endif
#ifndef XnslCCancelCallback
#define XnslCCancelCallback "CancelCallback"
#endif
#ifndef XtRCallback
#define XtRCallback "Callback"
#endif

extern WidgetClass xnslColorBoxWidgetClass;

typedef struct _XnslColorBoxClassRec *XnslColorBoxWidgetClass;

typedef struct _XnslColorBoxRec *XnslColorBoxWidget;

extern Widget FmCreateColorBox(
#if NeedFunctionPrototypes
String name, Widget parent, Arg* args, Cardinal num_args);
#else
);
#endif

#if defined(_XFM) || defined(XFM)
extern int _FmAddColorBoxWidgetClass(
#if NeedFunctionPrototypes
struct _FmFunctionsVector* vect);
#else
);
#endif
#endif

#ifdef XFM
extern int FmAddColorBoxWidgetClass(
#if NeedFunctionPrototypes
#if !defined(__cplusplus) && !defined(c_plusplus)
void
#endif
);
#else
);
#endif
#endif

#endif /* _COLORBOX_H_ */
