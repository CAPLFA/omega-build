#ifndef _COLORSB_H_
#define _COLORSB_H_

#ifndef XnslNtitle
#define XnslNtitle "title"
#endif
#ifndef XnslCTitle
#define XnslCTitle "Title"
#endif
#ifndef XtRString
#define XtRString "String"
#endif

#ifndef XnslNcolorTable
#define XnslNcolorTable "colorTable"
#endif
#ifndef XnslCColorTable
#define XnslCColorTable "ColorTable"
#endif
#ifndef XnslRColorTable
#define XnslRColorTable "ColorTable"
#endif

#ifndef XnslNselectedColor
#define XnslNselectedColor "selectedColor"
#endif
#ifndef XnslCSelectedColor
#define XnslCSelectedColor "SelectedColor"
#endif
#ifndef XtRInt
#define XtRInt "Int"
#endif

#ifndef XnslNcolumns
#define XnslNcolumns "columns"
#endif
#ifndef XnslCColumns
#define XnslCColumns "Columns"
#endif
#ifndef XtRInt
#define XtRInt "Int"
#endif

#ifndef XnslNcellsize
#define XnslNcellsize "cellsize"
#endif
#ifndef XnslCCellsize
#define XnslCCellsize "Cellsize"
#endif
#ifndef XtRInt
#define XtRInt "Int"
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

#ifndef XnslNselectCallback
#define XnslNselectCallback "selectCallback"
#endif
#ifndef XnslCSelectCallback
#define XnslCSelectCallback "SelectCallback"
#endif
#ifndef XtRCallback
#define XtRCallback "Callback"
#endif

#ifndef XnslNselectedColorName
#define XnslNselectedColorName "selectedColorName"
#endif
#ifndef XnslCSelectedColorName
#define XnslCSelectedColorName "SelectedColorName"
#endif
#ifndef XtRString
#define XtRString "String"
#endif

#ifndef XnslNcolorFile
#define XnslNcolorFile "colorFile"
#endif
#ifndef XnslCColorFile
#define XnslCColorFile "ColorFile"
#endif
#ifndef XnslRColorFile
#define XnslRColorFile "ColorFile"
#endif

extern WidgetClass xnslColorSelectionBoxWidgetClass;

typedef struct _XnslColorSelectionBoxClassRec *XnslColorSelectionBoxWidgetClass;

typedef struct _XnslColorSelectionBoxRec *XnslColorSelectionBoxWidget;

extern Widget FmCreateColorSelectionBox(
#if NeedFunctionPrototypes
String name, Widget parent, Arg* args, Cardinal num_args);
#else
);
#endif

#if defined(_XFM) || defined(XFM)
extern int _FmAddColorSelectionBoxWidgetClass(
#if NeedFunctionPrototypes
struct _FmFunctionsVector* vect);
#else
);
#endif
#endif

#ifdef XFM
extern int FmAddColorSelectionBoxWidgetClass(
#if NeedFunctionPrototypes
#if !defined(__cplusplus) && !defined(c_plusplus)
void
#endif
);
#else
);
#endif
#endif

#endif /* _COLORSB_H_ */
