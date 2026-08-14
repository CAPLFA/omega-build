#ifndef _STEPPERP_H_
#define _STEPPERP_H_

#include <Xnsl/Stepper.h>
#include <Xm/FormP.h>

typedef struct {
	int empty;
} XnslStepperClassPart;

typedef struct _XnslStepperClassRec {
  	CoreClassPart      core_class;
	CompositeClassPart composite_class;
	ConstraintClassPart	constraint_class;
	XmManagerClassPart	manager_class;
	XmBulletinBoardClassPart bulletin_board_class;
	XmFormClassPart form_class;
	XnslStepperClassPart xnslStepper_class;
} XnslStepperClassRec;

extern XnslStepperClassRec xnslStepperClassRec;

typedef struct _XnslStepperPart {
	Widget widget_table[4];
	XtArgVal value;
	XtArgVal autoRepeat;
	XtArgVal repeatDelay;
	XtArgVal repeatInterval;
	XtArgVal increment;
	XtArgVal minimum;
	XtArgVal maximum;
	XtArgVal timeoutId;
	XtArgVal activateCallback;
	XtArgVal valueChangedCallback;
	XtArgVal modifyVerifyCallback;
	XtArgVal arrowPlacement;
	XtArgVal fontList;
} XnslStepperPart;

typedef struct _XnslStepperRec {
	CorePart 	core;
	CompositePart 	composite;
	ConstraintPart		constraint;
	XmManagerPart		manager;
	XmBulletinBoardPart	bulletin_board;
	XmFormPart	form;
	XnslStepperPart xnslStepper;
} XnslStepperRec;

#ifdef __STDC__
#define _PROTO(x)	x
#else
#define _PROTO(x)	()
#endif

Boolean _XnslInitStepper _PROTO((void));
void _XnslStepperAdjust _PROTO((Widget));
void _XnslRealizeStepper _PROTO((CompositeWidget));

#undef _PROTO

#endif /* _STEPPERP_H_ */
