#ifndef _COLORBOXP_H_
#define _COLORBOXP_H_

#include <Xnsl/ColorBox.h>
#include <Xm/FormP.h>

typedef struct {
	int empty;
} XnslColorBoxClassPart;

typedef struct _XnslColorBoxClassRec {
  	CoreClassPart      core_class;
	CompositeClassPart composite_class;
	ConstraintClassPart	constraint_class;
	XmManagerClassPart	manager_class;
	XmBulletinBoardClassPart bulletin_board_class;
	XmFormClassPart form_class;
	XnslColorBoxClassPart xnslColorBox_class;
} XnslColorBoxClassRec;

extern XnslColorBoxClassRec xnslColorBoxClassRec;

typedef struct _XnslColorBoxPart {
	Widget widget_table[11];
	XtArgVal title;
	XtArgVal pixel;
	XtArgVal red;
	XtArgVal green;
	XtArgVal blue;
	XtArgVal hue;
	XtArgVal saturation;
	XtArgVal intensity;
	XtArgVal colorName;
	XtArgVal okCallback;
	XtArgVal cancelCallback;
} XnslColorBoxPart;

typedef struct _XnslColorBoxRec {
	CorePart 	core;
	CompositePart 	composite;
	ConstraintPart		constraint;
	XmManagerPart		manager;
	XmBulletinBoardPart	bulletin_board;
	XmFormPart	form;
	XnslColorBoxPart xnslColorBox;
} XnslColorBoxRec;

#endif /* _COLORBOXP_H_ */
