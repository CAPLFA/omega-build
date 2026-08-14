#ifndef _STEPPER_H_
#define _STEPPER_H_

#ifndef _XNSL_TYPES_H_
#include <Xnsl/Types.h>
#define _XNSL_TYPES_H_
#endif /* _XNSL_TYPES_H_ */

#ifndef XnslNvalue
#define XnslNvalue "value"
#endif
#ifndef XnslCValue
#define XnslCValue "Value"
#endif
#ifndef XtRInt
#define XtRInt "Int"
#endif

#ifndef XnslNautoRepeat
#define XnslNautoRepeat "autoRepeat"
#endif
#ifndef XnslCAutoRepeat
#define XnslCAutoRepeat "AutoRepeat"
#endif
#ifndef XtRBoolean
#define XtRBoolean "Boolean"
#endif

#ifndef XnslNrepeatDelay
#define XnslNrepeatDelay "repeatDelay"
#endif
#ifndef XnslCRepeatDelay
#define XnslCRepeatDelay "RepeatDelay"
#endif
#ifndef XtRInt
#define XtRInt "Int"
#endif

#ifndef XnslNrepeatInterval
#define XnslNrepeatInterval "repeatInterval"
#endif
#ifndef XnslCRepeatInterval
#define XnslCRepeatInterval "RepeatInterval"
#endif
#ifndef XtRInt
#define XtRInt "Int"
#endif

#ifndef XnslNincrement
#define XnslNincrement "increment"
#endif
#ifndef XnslCIncrement
#define XnslCIncrement "Increment"
#endif
#ifndef XtRInt
#define XtRInt "Int"
#endif

#ifndef XnslNminimum
#define XnslNminimum "minimum"
#endif
#ifndef XnslCMinimum
#define XnslCMinimum "Minimum"
#endif
#ifndef XtRInt
#define XtRInt "Int"
#endif

#ifndef XnslNmaximum
#define XnslNmaximum "maximum"
#endif
#ifndef XnslCMaximum
#define XnslCMaximum "Maximum"
#endif
#ifndef XtRInt
#define XtRInt "Int"
#endif

#ifndef XnslNtimeoutId
#define XnslNtimeoutId "timeoutId"
#endif
#ifndef XnslCTimeoutId
#define XnslCTimeoutId "TimeoutId"
#endif
#ifndef XnslRTimeOut
#define XnslRTimeOut "TimeOut"
#endif

#ifndef XnslNactivateCallback
#define XnslNactivateCallback "activateCallback"
#endif
#ifndef XnslCActivateCallback
#define XnslCActivateCallback "ActivateCallback"
#endif
#ifndef XtRCallback
#define XtRCallback "Callback"
#endif

#ifndef XnslNvalueChangedCallback
#define XnslNvalueChangedCallback "valueChangedCallback"
#endif
#ifndef XnslCValueChangedCallback
#define XnslCValueChangedCallback "ValueChangedCallback"
#endif
#ifndef XtRCallback
#define XtRCallback "Callback"
#endif

#ifndef XnslNmodifyVerifyCallback
#define XnslNmodifyVerifyCallback "modifyVerifyCallback"
#endif
#ifndef XnslCModifyVerifyCallback
#define XnslCModifyVerifyCallback "ModifyVerifyCallback"
#endif
#ifndef XtRCallback
#define XtRCallback "Callback"
#endif

#ifndef XnslNarrowPlacement
#define XnslNarrowPlacement "arrowPlacement"
#endif
#ifndef XnslCArrowPlacement
#define XnslCArrowPlacement "ArrowPlacement"
#endif
#ifndef XnslRArrowPlacement
#define XnslRArrowPlacement "ArrowPlacement"
#endif

#ifndef XnslNfontList
#define XnslNfontList "fontList"
#endif
#ifndef XnslCFontList
#define XnslCFontList "FontList"
#endif
#ifndef XmRFontList
#define XmRFontList "FontList"
#endif

#ifndef XnslARROWS_LEFT
#define XnslARROWS_LEFT 0
#endif

#ifndef XnslARROWS_LEFT_RIGHT
#define XnslARROWS_LEFT_RIGHT 1
#endif

#ifndef XnslARROWS_RIGHT
#define XnslARROWS_RIGHT 2
#endif

extern WidgetClass xnslStepperWidgetClass;

typedef struct _XnslStepperClassRec *XnslStepperWidgetClass;

typedef struct _XnslStepperRec *XnslStepperWidget;

extern Widget FmCreateStepper(
#if NeedFunctionPrototypes
String name, Widget parent, Arg* args, Cardinal num_args);
#else
);
#endif

#if defined(_XFM) || defined(XFM)
extern int _FmAddStepperWidgetClass(
#if NeedFunctionPrototypes
struct _FmFunctionsVector* vect);
#else
);
#endif
#endif

#ifdef XFM
extern int FmAddStepperWidgetClass(
#if NeedFunctionPrototypes
#if !defined(__cplusplus) && !defined(c_plusplus)
void
#endif
);
#else
);
#endif
#endif

#endif /* _STEPPER_H_ */
