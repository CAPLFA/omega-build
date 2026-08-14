#ifndef _COLORSBP_H_
#define _COLORSBP_H_

#include <Xnsl/ColorSB.h>
#include <Xm/FormP.h>

typedef struct {
	int empty;
} XnslColorSelectionBoxClassPart;

typedef struct _XnslColorSelectionBoxClassRec {
  	CoreClassPart      core_class;
	CompositeClassPart composite_class;
	ConstraintClassPart	constraint_class;
	XmManagerClassPart	manager_class;
	XmBulletinBoardClassPart bulletin_board_class;
	XmFormClassPart form_class;
	XnslColorSelectionBoxClassPart xnslColorSelectionBox_class;
} XnslColorSelectionBoxClassRec;

extern XnslColorSelectionBoxClassRec xnslColorSelectionBoxClassRec;

typedef struct _XnslColorSelectionBoxPart {
	Widget widget_table[5];
	XtArgVal title;
	XtArgVal colorTable;
	XtArgVal selectedColor;
	XtArgVal columns;
	XtArgVal cellsize;
	XtArgVal okCallback;
	XtArgVal cancelCallback;
	XtArgVal selectCallback;
	XtArgVal selectedColorName;
	XtArgVal colorFile;
} XnslColorSelectionBoxPart;

typedef struct _XnslColorSelectionBoxRec {
	CorePart 	core;
	CompositePart 	composite;
	ConstraintPart		constraint;
	XmManagerPart		manager;
	XmBulletinBoardPart	bulletin_board;
	XmFormPart	form;
	XnslColorSelectionBoxPart xnslColorSelectionBox;
} XnslColorSelectionBoxRec;

typedef struct color {
	XrmQuark qname;
	XColor xcolor;
	Boolean alloced;
} color;

typedef struct colortable {
	color*  colors;
	int num_colors;
	int max_colors;
	int x, y, width, height;
} colortable;


extern int _XnslCSBResizeColors(
#if NeedFunctionPrototypes
Widget wid, Widget widget, colortable *table, int cellsize
#endif
);

extern void ClassInitialize();

extern void SetRbgFile(
#if NeedFunctionPrototypes
Widget w
#endif
);

extern colortable *_XnslCSBListColors(
#if NeedFunctionPrototypes
Widget widget, Colormap colormap, char *colorfile
#endif
);

extern String GetColorFile(
#if NeedFunctionPrototypes
Widget w, char *s
#endif
);

extern void _XnslEnsureVisible(
#if NeedFunctionPrototypes
Widget sc, Widget widget, colortable *table
#endif
);

extern void _XnslCSBDrawColors(
#if NeedFunctionPrototypes
Widget widget, colortable *table, int selected, int columns, int cellsize, XExposeEvent *event
#endif
);

extern char *_XnslCSBGetColorName(
#if NeedFunctionPrototypes
Widget widget, colortable *table, int columns, XMotionEvent *ev, int cellsize
#endif
);

extern int _XnslCSBSelectColor(
#if NeedFunctionPrototypes
Widget widget, colortable *table, int selected, int columns, char *name, int cellsize
#endif
);

#endif /* _COLORSBP_H_ */
