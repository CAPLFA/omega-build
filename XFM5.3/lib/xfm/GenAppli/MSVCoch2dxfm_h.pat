//## 					begin pattern interface
//## // Utility functions for programming the XRT/graph from FACE scripts.
//## //
//## 					end pattern interface

#ifndef _Xnsl_XrtGraphFm_h /* whole file */
#define _Xnsl_XrtGraphFm_h 1

#define XtRXrtAttachType	"XrtAttachType"
#define XtRXrtArrayData		"XrtArrayData"
#define XtRXrtDataType		"XrtDataType"
#define XtRXrtDsGroup		"XrtDsGroup"
#define XtRXrtFillPattern	"XrtFillPattern"
#define XtRXrtFocus		"XrtFocus"
#define XtRXrtGeneralData	"XrtGeneralData"
#define XtRXrtLinePattern	"XrtLinePattern"
#define XtRXrtMapResult		"XrtMapResult"
#define XtRXrtPickResult	"XrtPickResult"
#define XtRXrtRegion		"XrtRegion"
#define XtRXrtTextDesc		"XrtTextDesc"
#define XtRXrtTextHandle	"XrtTextHandle"
#define XtRXrtXLabel		"XrtXLabel"
#define XtRXrtPoint		"XrtPoint"

#define XRT_POINTFOCUS		(XRT_XFOCUS | XRT_YFOCUS)

/*
 * NSL provides these macros because XFaceMaker assumes the macro
 * naming convention used by OSF/Motif, which is not followed by
 * the XRT/graph widget.
 */
#define _XRT_ADJUSTCENTER	 XRT_ADJUST_CENTER
#define _XRT_ADJUSTLEFT		 XRT_ADJUST_LEFT
#define _XRT_ADJUSTRIGHT	 XRT_ADJUST_RIGHT
#define _XRT_ALIGNHORIZONTAL	 XRT_ALIGN_HORIZONTAL
#define _XRT_ALIGNVERTICAL	 XRT_ALIGN_VERTICAL
#define _XRT_ANCHORBEST		 XRT_ANCHOR_BEST
#define _XRT_ANCHOREAST		 XRT_ANCHOR_EAST
#define _XRT_ANCHORHOME		 XRT_ANCHOR_HOME
#define _XRT_ANCHORNORTH	 XRT_ANCHOR_NORTH
#define _XRT_ANCHORNORTHEAST	 XRT_ANCHOR_NORTHEAST
#define _XRT_ANCHORNORTHWEST	 XRT_ANCHOR_NORTHWEST
#define _XRT_ANCHORSOUTH	 XRT_ANCHOR_SOUTH
#define _XRT_ANCHORSOUTHEAST	 XRT_ANCHOR_SOUTHEAST
#define _XRT_ANCHORSOUTHWEST	 XRT_ANCHOR_SOUTHWEST
#define _XRT_ANCHORWEST		 XRT_ANCHOR_WEST
#define _XRT_TEXTATTACHDATA	 XRT_TEXT_ATTACH_DATA
#define _XRT_TEXTATTACHDATAVALUE XRT_TEXT_ATTACH_DATA_VALUE
#define _XRT_TEXTATTACHPIXEL	 XRT_TEXT_ATTACH_PIXEL
#define _XRT_TEXTATTACHVALUE	 XRT_TEXT_ATTACH_VALUE
#define _XRT_BORDER3DIN		 XRT_BORDER_3D_IN
#define _XRT_BORDER3DOUT	 XRT_BORDER_3D_OUT
#define _XRT_BORDERNONE		 XRT_BORDER_NONE
#define _XRT_BORDERPLAIN	 XRT_BORDER_PLAIN
#define _XRT_BORDERSHADOW	 XRT_BORDER_SHADOW
#define _XRT_PIEPERCENTILE	 XRT_PIE_PERCENTILE
#define _XRT_PIESLICECUTOFF	 XRT_PIE_SLICE_CUTOFF
#define _XRT_PIEORDERASCENDING	 XRT_PIEORDER_ASCENDING
#define _XRT_PIEORDERDATAORDER	 XRT_PIEORDER_DATA_ORDER
#define _XRT_PIEORDERDESCENDING	 XRT_PIEORDER_DESCENDING
#define _XRT_ROTATENONE		 XRT_ROTATE_NONE
#define _XRT_ROTATE90		 XRT_ROTATE_90
#define _XRT_ROTATE270		 XRT_ROTATE_270
#define _XRT_TMUNITSECONDS	 XRT_TMUNIT_SECONDS
#define _XRT_TMUNITMINUTES	 XRT_TMUNIT_MINUTES
#define _XRT_TMUNITHOURS	 XRT_TMUNIT_HOURS
#define _XRT_TMUNITDAYS		 XRT_TMUNIT_DAYS
#define _XRT_TMUNITWEEKS	 XRT_TMUNIT_WEEKS
#define _XRT_TMUNITMONTHS	 XRT_TMUNIT_MONTHS
#define _XRT_TMUNITYEARS	 XRT_TMUNIT_YEARS
#define _XRT_TYPEAREA		 XRT_TYPE_AREA
#define _XRT_TYPEBAR		 XRT_TYPE_BAR
#define _XRT_TYPEPIE		 XRT_TYPE_PIE
#define _XRT_TYPEPLOT		 XRT_TYPE_PLOT
#define _XRT_TYPESTACKINGBAR	 XRT_TYPE_STACKING_BAR
#define _XRT_XMETHODPOINTLABELS	 XRT_XMETHOD_POINT_LABELS
#define _XRT_XMETHODXLABELS	 XRT_XMETHOD_XLABELS
#define _XRT_XMETHODXVALUES	 XRT_XMETHOD_XVALUES

#define _PROTO(x) x

/*
 * XRT/Graph functions, overloaded with 'Widget' arguments instead of HXRT2D.
 */
extern Boolean		XtIsXrtGraph		_PROTO((Widget));
extern int 		XrtArrCheckAxisBounds 	_PROTO((Widget, int, int));
extern int 		XrtArrDataFastUpdate 	_PROTO((Widget, int, int));
extern int 		XrtGenCheckAxisBounds 	_PROTO((Widget, int, int, int));
extern int 		XrtGenDataFastUpdate 	_PROTO((Widget, int, int, int));
extern XrtDataStyle* 	XrtGetNthDataStyle 	_PROTO((Widget, int));
extern XrtDataStyle* 	XrtGetNthDataStyle2 	_PROTO((Widget, int));
extern String 		XrtGetNthPointLabel 	_PROTO((Widget, int));
extern String 		XrtGetNthPointLabel2 	_PROTO((Widget, int));
extern String 		XrtGetNthSetLabel 	_PROTO((Widget, int));
extern String 		XrtGetNthSetLabel2 	_PROTO((Widget, int));
extern int 		XrtGetTextHandles 	_PROTO((Widget, XrtTextHandle**));
extern XrtValueLabel* 	XrtGetValueLabel 	_PROTO((Widget, XrtAxis, XrtValueLabel*));
extern XrtRegion 	XrtMap 			_PROTO((Widget, int, int, int, XrtMapResult*));
extern XrtRegion 	XrtPick 		_PROTO((Widget, XrtDsGroup, int, int, XrtPickResult*, XrtFocus));
extern void 		XrtSetNthDataStyle 	_PROTO((Widget, int, XrtDataStyle*));
extern void 		XrtSetNthDataStyle2 	_PROTO((Widget, int, XrtDataStyle*));
extern void 		XrtSetNthPointLabel 	_PROTO((Widget, int, String));
extern void 		XrtSetNthPointLabel2 	_PROTO((Widget, int, String));
extern void 		XrtSetNthSetLabel 	_PROTO((Widget, int, String));
extern void 		XrtSetNthSetLabel2 	_PROTO((Widget, int, String));
extern void 		XrtSetValueLabel 	_PROTO((Widget, XrtAxis, XrtValueLabel*));
extern void 		XrtTextAttach 		_PROTO((Widget, XrtTextHandle));
extern XrtTextHandle 	XrtTextCreate 		_PROTO((Widget, XrtTextDesc*));
extern void 		XrtTextDestroy 		_PROTO((Widget, XrtTextHandle));
extern void 		XrtTextDetach 		_PROTO((Widget, XrtTextHandle));
extern int 		XrtTextDetail 		_PROTO((Widget, XrtTextHandle, XrtTextDesc*));
extern void 		XrtTextUpdate 		_PROTO((Widget, XrtTextHandle, XrtTextDesc*));
extern void 		XrtUnmap 		_PROTO((Widget, int, double, double, XrtMapResult*));
extern void 		XrtUnpick 		_PROTO((Widget, int, int, int, XrtPickResult*));

typedef HFONT Font;

/*
 * XRT/Graph auxiliary functions for FACE
 */
extern int		XrtGetNumberOfSets _PROTO((XrtData *));
extern int		XrtGetNumberOfPoints _PROTO((XrtData *,int));
extern float		XrtGetXValue _PROTO((XrtData *,int,int));
extern float		XrtGetYValue _PROTO((XrtData *,int,int));
extern int		XrtSetXValue _PROTO((XrtData *,int,int,double));
extern int		XrtSetYValue _PROTO((XrtData *,int,int,...));
extern int		XrtSetPoint _PROTO((XrtData *,int,int,...));
extern int		XrtAppendPoint _PROTO((XrtData *,int,double,...));
extern Boolean		XrtOutputData _PROTO((XrtData *,String,int));
extern XrtPickResult	*XrtCreatePickResult _PROTO((void));
extern void		XrtFreePickResult _PROTO((XrtPickResult *));
extern XrtRegion	XrtPickEvent _PROTO((Widget,XrtDsGroup,XEvent *,
				      XrtPickResult *,XrtFocus));
extern int		XrtPickXPixel _PROTO((XrtPickResult *));
extern int		XrtPickYPixel _PROTO((XrtPickResult *));
extern XrtDsGroup	XrtPickDataSet _PROTO((XrtPickResult *));
extern int		XrtPickSet _PROTO((XrtPickResult *));
extern int		XrtPickPoint _PROTO((XrtPickResult *));
extern int		XrtPickDistance _PROTO((XrtPickResult *));
extern XrtMapResult	*XrtCreateMapResult _PROTO((void));
extern void		XrtFreeMapResult _PROTO((XrtMapResult *));
extern XrtRegion 	XrtMapEvent _PROTO((Widget,XrtDsGroup,XEvent *,
					    XrtMapResult *));
extern int		XrtMapXPixel _PROTO((XrtMapResult *));
extern int		XrtMapYPixel _PROTO((XrtMapResult *));
extern XrtDsGroup	XrtMapYAxis _PROTO((XrtMapResult *));
extern float		XrtMapXValue _PROTO((XrtMapResult *));
extern float		XrtMapYValue _PROTO((XrtMapResult *));
extern XrtTextDesc	*XrtCreateTextDesc _PROTO((void));
extern void		XrtFreeTextDesc _PROTO((XrtTextDesc *));
extern void		XrtSetTextPosition _PROTO((XrtTextDesc *,...));
extern void		XrtSetTextPixel _PROTO((XrtTextDesc *,int,int));
extern void		XrtSetTextValue _PROTO((XrtTextDesc *,XrtDsGroup,double,
					 double));
extern void		XrtSetTextData _PROTO((XrtTextDesc *,XrtDsGroup,int,
					       int));
extern void		XrtSetTextDataValue _PROTO((XrtTextDesc *,XrtDsGroup,int,int,
					     double));
extern XrtAttachType	XrtGetTextPositionType _PROTO((XrtTextDesc *));
extern int		XrtGetTextPixelX _PROTO((XrtTextDesc *));
extern int		XrtGetTextPixelY _PROTO((XrtTextDesc *));
extern float		XrtGetTextValueX _PROTO((XrtTextDesc *));
extern float		XrtGetTextValueY _PROTO((XrtTextDesc *));
extern XrtDsGroup	XrtGetTextDataSet _PROTO((XrtTextDesc *));
extern int		XrtGetTextSet _PROTO((XrtTextDesc *));
extern int		XrtGetTextPoint _PROTO((XrtTextDesc *));
extern void		XrtSetTextStrings _PROTO((XrtTextDesc *,...));
extern void		XrtSetTextStringList _PROTO((XrtTextDesc *,String *));
extern String		*XrtGetTextStringList _PROTO((XrtTextDesc *));
extern void		XrtSetTextAnchor _PROTO((XrtTextDesc *,XrtAnchor));
extern XrtAnchor	XrtGetTextAnchor _PROTO((XrtTextDesc *));
extern void		XrtSetTextOffset _PROTO((XrtTextDesc *,int));
extern int		XrtGetTextOffset _PROTO((XrtTextDesc *));
extern void		XrtSetTextConnected _PROTO((XrtTextDesc *,int));
extern Boolean		XrtGetTextConnected _PROTO((XrtTextDesc *));
extern void		XrtSetTextAdjust _PROTO((XrtTextDesc *,XrtAdjust));
extern XrtAdjust	XrtGetTextAdjust _PROTO((XrtTextDesc *));
extern void		XrtSetTextColors _PROTO((XrtTextDesc *,String,String));
extern String		XrtGetTextForeground _PROTO((XrtTextDesc *));
extern String		XrtGetTextBackground _PROTO((XrtTextDesc *));
extern void		XrtSetTextBorder _PROTO((XrtTextDesc *,XrtBorder,int));
extern XrtBorder	XrtGetTextBorderType _PROTO((XrtTextDesc *));
extern int		XrtGetTextBorderWidth _PROTO((XrtTextDesc *));
extern void		XrtSetTextFont _PROTO((XrtTextDesc *,Font));
extern Font		XrtGetTextFont _PROTO((XrtTextDesc *));
extern void		XrtSetTextPsFont _PROTO((XrtTextDesc *,String,int));
extern String		XrtGetTextPsFontName _PROTO((XrtTextDesc *));
extern int		XrtGetTextPsFontSize _PROTO((XrtTextDesc *));
extern int		XrtGetTextCoordX _PROTO((XrtTextDesc *));
extern int		XrtGetTextCoordY _PROTO((XrtTextDesc *));
extern int		XrtGetTextCoordWidth _PROTO((XrtTextDesc *));
extern int		XrtGetTextCoordHeight _PROTO((XrtTextDesc *));

extern char	_XrtFmErrorMessage[100];

extern FILE	*_XrtFmOpenOutput _PROTO((char *,int));
extern Boolean 	XrtFmDrawPS _PROTO((Widget	w, String name, int overwrite));

extern int       XrtArrDataAppendPtsFloats(XrtData *, double, float *);

#undef _PROTO

#undef XrtGetDataType
#define XrtGetDataType(xrt_data)		((xrt_data)->g.type)

#define XrtArrDataAppendPts XrtArrDataAppendPtsFloats

#endif /* _Xnsl_XrtGraphFm_h, whole file */
