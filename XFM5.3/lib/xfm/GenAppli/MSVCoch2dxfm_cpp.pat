//## 					begin pattern interface
//## // Utility functions for programming the XRT/graph from FACE scripts.
//## //
//## 					end pattern interface

/*
 * $Id: MSVCoch2dxfm_cpp.pat 313 2006-11-28 14:18:18Z bt $
 */

#include <stdio.h>
#include "stdafx.h"
#include "xfmwin.h"
#include <och2dmfc.cpp>
#include "och2dxfm.h"
#include <errno.h>
#include <io.h>

#define __STDC__

#ifdef __STDC__
#include <stdarg.h>
#else /* __STDC__ */
#include <varargs.h>
#endif /* __STDC__ */

#define GETH(w)	(HXRT2D)(((CChart2D*)w)->m_hChart)

#ifdef XrtGetDataType
#undef XrtGetDataType
#endif

#ifdef XrtArrDataAppendPts
#undef XrtArrDataAppendPts
#endif

XrtDataType
XrtGetDataType (
XrtData	*d
)
{
	return d->g.type;
}

int
XrtGetNumberOfSets (
XrtData	*d
)
{
	if (d->a.type == XRT_ARRAY)
		return d->arr_nsets;
	else
		return d->gen_nsets;
}

int
XrtGetNumberOfPoints (
XrtData	*d,
int	n
)
{
	if (d->a.type == XRT_ARRAY)
		return d->arr_npoints;
	else
		return d->gen_npoints(n);
}

float
XrtGetXValue (
XrtData	*d,
int	set,
int	point
)
{
	if (d->a.type == XRT_ARRAY)
		return (float) d->arr_xel (point);
	else
		return (float) d->gen_xel (set,point);
}

float
XrtGetYValue (
XrtData	*d,
int	set,
int	point
)
{
	if (d->a.type == XRT_ARRAY)
		return (float) d->arr_yel (set,point);
	else
		return (float) d->gen_yel (set,point);
}

int
XrtSetXValue (
XrtData	*d,
int	set,
int	point,
double	value
)
{
	int	okay = 0;

	if (d->a.type == XRT_ARRAY) {
		if (point >= 0 && point < d->arr_npoints) {
			d->arr_xel (point) = (float)value;
			okay = 1;
		}
	} else {
		if (set >= 0 && set < d->arr_nsets &&
		    point >= 0 && point < d->arr_npoints) {
			d->gen_xel (set,point) = (float)value;
			okay = 1;
		}
	}
	return okay;
}

int
#ifdef __STDC__
XrtSetYValue (XrtData *d,int set,int point,...)
#else /* __STDC__ */
XrtSetYValue (va_alist)
va_dcl
#endif /* __STDC__ */
{
#ifndef __STDC__
	XrtData *d;
	int	set;
	int	point;
#endif /* __STDC__ */

	va_list	a;
	int	okay = 0;

#ifdef __STDC__
	va_start (a,point);
#else /* __STDC__ */
	va_start (a);
	d = va_arg (a,XrtData *);
	set = va_arg (a,int);
	point = va_arg (a,int);
#endif /* __STDC__ */

	if (d->a.type == XRT_ARRAY) {
		if (point >= 0 && point < d->arr_npoints) {
			if (set == -1) {
				int	i;

				for (i = 0; i < d->arr_nsets; i++)
					d->arr_yel(i,point) = (float)va_arg (a,double);
				okay = 1;
			} else if (set >= 0 && set < d->arr_nsets) {
				d->arr_yel(set,point) = (float)va_arg (a,double);
				okay = 1;
			}
		}
	} else {
		if (set >= 0 && set < d->gen_nsets &&
		    point >= 0 && point < d->gen_npoints(set)) {
			d->gen_yel(set,point) = (float)va_arg (a,double);
			okay = 1;
		}
	}
	va_end (a);

	return okay;
}

int
#ifdef __STDC__
XrtSetPoint (XrtData *d,int set,int point,...)
#else /* __STDC__ */
XrtSetPoint (va_alist)
va_dcl
#endif /* __STDC__ */
{
#ifndef __STDC__
	XrtData *d;
	int	set;
	int	point;
#endif /* __STDC__ */

	va_list	a;
	int	okay = 0;

#ifdef __STDC__
	va_start (a,point);
#else /* __STDC__ */
	va_start (a);
	d = va_arg (a,XrtData *);
	set = va_arg (a,int);
	point = va_arg (a,int);
#endif /* __STDC__ */

	if (d->a.type == XRT_ARRAY) {
		if (point >= 0 && point < d->arr_npoints) {
			if (set == -1) {
				int	i;

				d->arr_xel(point) = (float)va_arg (a,double);
				for (i = 0; i < d->arr_nsets; i++)
					d->arr_yel(i,point) = (float)va_arg (a,double);
				okay = 1;
			} else if (set >= 0 && set < d->arr_nsets) {
				d->arr_xel(point) = (float)va_arg (a,double);
				d->arr_yel(set,point) = (float)va_arg (a,double);
				okay = 1;
			}
		}
	} else {
		if (set >= 0 && set < d->gen_nsets &&
		    point >= 0 && point < d->gen_npoints(set)) {
			d->gen_xel(set,point) = (float)va_arg (a,double);
			d->gen_yel(set,point) = (float)va_arg (a,double);
			okay = 1;
		}
	}
	va_end (a);

	return okay;
}

int
#ifdef __STDC__
XrtAppendPoint (XrtData *d,int set,double xval,...)
#else /* __STDC__ */
XrtAppendPoint (va_alist)
va_dcl
#endif /* __STDC__ */
{
#ifndef __STDC__
	XrtData *d;
	int	set;
	double	xval;
#endif /* __STDC__ */

	va_list	a;
	int	okay = 0;

#ifdef __STDC__
	va_start (a,xval);
#else /* __STDC__ */
	va_start (a);
	d = va_arg (a,XrtData *);
	set = va_arg (a,int);
	xval = va_arg (a,double);
#endif /* __STDC__ */

	if (d->a.type == XRT_ARRAY) {
		double	*ylist;
		double	*y;
		int	i;

		ylist = (double *) XtMalloc (d->arr_nsets);
		y = ylist;
		for (i = 0; i < d->arr_nsets; i++)
			*y++ = (double)va_arg (a,double);
		okay = XrtArrDataAppendPts (d,xval,ylist);
	} else {
		double	yval;

		yval = (double)va_arg (a,double);
		okay = XrtGenDataAppendPt (d,set,xval,yval);
	}
	va_end (a);
	return okay;
}

Boolean
XrtOutputData (
XrtData	*d,
String	name,
int	overwrite
)
{
	FILE	*out;
	int	s;
	int	p;

	out = _XrtFmOpenOutput (name,overwrite);
	if (out == NULL)
		return False;

	if (d->a.type == XRT_ARRAY) {
		fprintf (out,"ARRAY %d %d\n",d->arr_nsets,d->arr_npoints);
		for (p = 0; p < d->arr_npoints; p++) {
			if (p > 0)
				fprintf (out," ");
			fprintf (out,"%g",d->arr_xel(p));
		}
		fprintf (out,"\n");
		for (s = 0; s < d->arr_nsets; s++) {
			for (p = 0; p < d->arr_npoints; p++) {
				if (p > 0)
					fprintf (out," ");
				fprintf (out,"%g",d->arr_yel(s,p));
			}
			fprintf (out,"\n");
		}
	} else {
		int	npoints = 0;

		for (s = 0; s < d->gen_nsets; s++)
			if (npoints < d->gen_npoints(s))
				npoints = d->gen_npoints(s);
		fprintf (out,"GENERAL %d %d\n",d->gen_nsets,npoints);
		for (s = 0; s < d->gen_nsets; s++) {
			npoints = d->gen_npoints(s);
			fprintf (out,"%d\n",npoints);
			for (p = 0; p < npoints; p++) {
				if (p > 0)
					fprintf (out," ");
				fprintf (out,"%g",d->gen_xel(s,p));
			}
			fprintf (out,"\n");
			for (p = 0; p < npoints; p++) {
				if (p > 0)
					fprintf (out," ");
				fprintf (out,"%g",d->gen_yel(s,p));
			}
			fprintf (out,"\n");
		}
	}
	fclose (out);
	return True;
}

static XrtMapResult	defaultmap;

XrtMapResult *
XrtCreateMapResult() {
	return (XrtMapResult *) XtMalloc (sizeof (XrtMapResult));
}

void
XrtFreeMapResult (
XrtMapResult	*r
)
{
	XtFree ((char *) r);
}

XrtRegion
XrtMapEvent (
Widget	w,
XrtDsGroup	yaxis,
XEvent	*ev,
XrtMapResult	*map
)
{
	POINT point;
	
	if(!::GetCursorPos(&point))
		return XRT_NOWHERE;
	::ScreenToClient(XrtGetWindow(GETH(w)), &point);
	
	int	x = point.x;
	int	y = point.y;
	
	if (map == 0)
		map = &defaultmap;
	return XrtMap (GETH(w),yaxis,x,y,map);
}

int
XrtMapXPixel (
XrtMapResult	*map
)
{
	if (map == 0)
		return defaultmap.pix_x;
	return map->pix_x;
}

int
XrtMapYPixel (
XrtMapResult	*map
)
{
	if (map == 0)
		return defaultmap.pix_y;
	return map->pix_y;
}

XrtDsGroup
XrtMapYAxis (
XrtMapResult	*map
)
{
	if (map == 0)
		return defaultmap.yaxis;
	return map->yaxis;
}

float
XrtMapXValue (
XrtMapResult	*map
)
{
	if (map == 0)
		return (float) defaultmap.x;
	return (float) map->x;
}

float
XrtMapYValue (
XrtMapResult	*map
)
{
	if (map == 0)
		return (float) defaultmap.y;
	return (float) map->y;
}

static XrtPickResult	defaultpick;

XrtPickResult *
XrtCreatePickResult() {
	return (XrtPickResult *) XtMalloc (sizeof (XrtPickResult));
}

void
XrtFreePickResult (
XrtPickResult	*r
)
{
	XtFree ((char *) r);
}

XrtRegion
XrtPickEvent (
Widget	w,
XrtDsGroup	group,
XEvent	*ev,
XrtPickResult	*pick,
XrtFocus	focus
)
{
	POINT point;
	
	if(!::GetCursorPos(&point))
		return XRT_NOWHERE;
	::ScreenToClient(XrtGetWindow(GETH(w)), &point);
	
	int	x = point.x;
	int	y = point.y;
	
	if (pick == 0)
		pick = &defaultpick;
	return XrtPick (GETH(w),group,x,y,pick,focus);
}

int
XrtPickXPixel (
XrtPickResult	*pick
)
{
	if (pick == 0)
		return defaultpick.pix_x;
	return pick->pix_x;
}

int
XrtPickYPixel (
XrtPickResult	*pick
)
{
	if (pick == 0)
		return defaultpick.pix_y;
	return pick->pix_y;
}

XrtDsGroup
XrtPickDataSet (
XrtPickResult	*pick
)
{
	if (pick == 0)
		return defaultpick.dataset;
	return pick->dataset;
}

int
XrtPickSet (
XrtPickResult	*pick
)
{
	if (pick == 0)
		return defaultpick.set;
	return pick->set;
}

int
XrtPickPoint (
XrtPickResult	*pick
)
{
	if (pick == 0)
		return defaultpick.point;
	return pick->point;
}

int
XrtPickDistance (
XrtPickResult	*pick
)
{
	if (pick == 0)
		return defaultpick.distance;
	return pick->distance;
}

XrtTextDesc *
XrtCreateTextDesc()
{
	XrtTextDesc	*text;

	text = (XrtTextDesc *) XtMalloc (sizeof (XrtTextDesc));
	text->position.pixel.type = XRT_TEXT_ATTACH_PIXEL;
	text->position.pixel.x = 0;
	text->position.pixel.y = 0;
	text->strings = (String *) XtMalloc (sizeof (char *));
	*(text->strings) = 0;
	text->anchor = XRT_BEST;
	text->offset = 10;
	text->connected = True;
	text->adjust = XRT_CENTER;
	text->fore_color =  0;
	text->back_color =  0;
	text->border = XRT_BORDER_SHADOW;
	text->border_width = 2;
	text->font = 0;
#ifdef notdef
	text->psfont = "Helvetica-Bold";
	text->psfont_size = 0;
#endif
	return text;
}

void
XrtFreeTextDesc (
XrtTextDesc	*text
)
{
	XtFree ((char *) text);
}

void
#ifdef __STDC__
XrtSetTextPosition (XrtTextDesc *text,...)
#else /* __STDC__ */
XrtSetTextPosition (va_alist)
va_dcl
#endif /* __STDC__ */
{
#ifndef __STDC__
	XrtTextDesc	*text;
#endif /* __STDC__ */

	va_list	a;

#ifdef __STDC__
	va_start (a,text);
#else /* __STDC__ */
	va_start (a);
	text = va_arg (a,XrtTextDesc *);
#endif /* __STDC__ */

	text->position.pixel.type = (XrtAttachType)va_arg (a,int);

	switch (text->position.pixel.type) {
	case XRT_TEXT_ATTACH_PIXEL:
		text->position.pixel.x = va_arg (a,int);
		text->position.pixel.y = va_arg (a,int);
		break;

	case XRT_TEXT_ATTACH_VALUE:
		text->position.value.dataset = va_arg (a,int);
		text->position.value.x = (float)va_arg (a,double);
		text->position.value.y = (float)va_arg (a,double);
		break;

	case XRT_TEXT_ATTACH_DATA:
		text->position.data.dataset = va_arg (a,int);
		text->position.data.set = va_arg (a,int);
		text->position.data.point = va_arg (a,int);
		break;

	case XRT_TEXT_ATTACH_DATA_VALUE:
		text->position.data_value.dataset = va_arg (a,int);
		text->position.data_value.set = va_arg (a,int);
		text->position.data_value.point = va_arg (a,int);
		text->position.data_value.y = (float)va_arg (a,double);
		break;
	}
	va_end (a);
}

void
XrtSetTextPixel (
XrtTextDesc	*text,
int	x,
int	y
)
{
	if (text->position.pixel.type == XRT_TEXT_ATTACH_PIXEL) {
		text->position.pixel.x = x;
		text->position.pixel.y = y;
	}
}

void
XrtSetTextValue (
XrtTextDesc	*text,
XrtDsGroup	group,
double	x,
double	y
)
{
	if (text->position.value.type == XRT_TEXT_ATTACH_VALUE) {
		text->position.value.dataset = group;
		text->position.value.x = (float)x;
		text->position.value.y = (float)y;
	}
}

void
XrtSetTextData (
XrtTextDesc	*text,
XrtDsGroup	group,
int	set,
int	point
)
{
	if (text->position.data.type == XRT_TEXT_ATTACH_DATA) {
		text->position.data.dataset = group;
		text->position.data.set = set;
		text->position.data.point = point;
	}
}

void
XrtSetTextDataValue (
XrtTextDesc	*text,
XrtDsGroup	group,
int	set,
int	point,
double	y
)
{
	if (text->position.data_value.type == XRT_TEXT_ATTACH_DATA_VALUE) {
		text->position.data_value.dataset = group;
		text->position.data_value.set = set;
		text->position.data_value.point = point;
		text->position.data_value.y = (float)y;
	}
}

XrtAttachType
XrtGetTextPositionType (
XrtTextDesc	*text
)
{
	return text->position.pixel.type;
}

int
XrtGetTextPixelX (
XrtTextDesc	*text
)
{
	if (text->position.pixel.type == XRT_TEXT_ATTACH_PIXEL)
		return text->position.pixel.x;
	return -1;
}

int
XrtGetTextPixelY (
XrtTextDesc	*text
)
{
	if (text->position.pixel.type != XRT_TEXT_ATTACH_PIXEL)
		return text->position.pixel.y;
	return -1;
}

float
XrtGetTextValueX (
XrtTextDesc	*text
)
{
	if (text->position.value.type != XRT_TEXT_ATTACH_VALUE)
		return (float)text->position.value.x;
	return (float)0.0;
}

float
XrtGetTextValueY (
XrtTextDesc	*text
)
{
	switch (text->position.data.type) {
	case XRT_TEXT_ATTACH_VALUE:
		return (float)text->position.value.y;
	case XRT_TEXT_ATTACH_DATA_VALUE:
		return (float)text->position.data_value.y;
	}
	return (float)0.0;
}

XrtDsGroup
XrtGetTextDataSet (
XrtTextDesc	*text
)
{
	switch (text->position.value.type) {
	case XRT_TEXT_ATTACH_VALUE:
		return text->position.value.dataset;
	case XRT_TEXT_ATTACH_DATA:
		return text->position.data.dataset;
	case XRT_TEXT_ATTACH_DATA_VALUE:
		return text->position.data_value.dataset;
	}
	return -1;
}

int
XrtGetTextSet (
XrtTextDesc	*text
)
{
	switch (text->position.data.type) {
	case XRT_TEXT_ATTACH_DATA:
		return text->position.data.set;
	case XRT_TEXT_ATTACH_DATA_VALUE:
		return text->position.data_value.set;
	}
	return -1;
}

int
XrtGetTextPoint (
XrtTextDesc	*text
)
{
	switch (text->position.data.type) {
	case XRT_TEXT_ATTACH_DATA:
		return text->position.data.point;
	case XRT_TEXT_ATTACH_DATA_VALUE:
		return text->position.data_value.point;
	}
	return -1;
}

void
#ifdef __STDC__
XrtSetTextStrings (XrtTextDesc *text,...)
#else /* __STDC__ */
XrtSetTextStrings (va_alist)
va_dcl
#endif /* __STDC__ */
{
#ifndef __STDC__
	XrtTextDesc	*text;
#endif /* __STDC__ */

	va_list	a;
	int	n;
	char	**p;

#ifdef __STDC__
	va_start (a,text);
#else /* __STDC__ */
	va_start (a);
	text = va_arg (a,XrtTextDesc *);
#endif /* __STDC__ */
	for (n = 0; va_arg (a,String) != 0; n++)
		;
	va_end (a);
	text->strings = (char **) XtMalloc (sizeof (char *) * (n + 1));

#ifdef __STDC__
	va_start (a,text);
#else /* __STDC__ */
	va_start (a);
	(void) va_arg (a,XrtTextDesc *);
#endif /* __STDC__ */
	p = text->strings;
	for (;;) {
		char	*s;

		s = va_arg (a,String);
		if (s == 0)
			break;
		*p++ = XtNewString (s);
	}
	*p = 0;
	va_end (a);
}

void
XrtSetTextStringList (
XrtTextDesc	*text,
String	*list
)
{
	text->strings = list;
}

String *
XrtGetTextStringList (
XrtTextDesc	*text
)
{
	return text->strings;
}

void
XrtSetTextAnchor (
XrtTextDesc	*text,
XrtAnchor	anchor
)
{
	text->anchor = anchor;
}

XrtAnchor
XrtGetTextAnchor (
XrtTextDesc	*text
)
{
	return text->anchor;
}

void
XrtSetTextOffset (
XrtTextDesc	*text,
int	offset
)
{
	text->offset = offset;
}

int
XrtGetTextOffset (
XrtTextDesc	*text
)
{
	return text->offset;
}

void
XrtSetTextConnected (
XrtTextDesc	*text,
int	okay
)
{
	text->connected = okay;
}

Boolean
XrtGetTextConnected (
XrtTextDesc	*text
)
{
	return text->connected;
}

void
XrtSetTextAdjust (
XrtTextDesc	*text,
XrtAdjust	adjust
)
{
	text->adjust = adjust;
}

XrtAdjust
XrtGetTextAdjust (
XrtTextDesc	*text
)
{
	return text->adjust;
}

void
XrtSetTextColors (
XrtTextDesc	*text,
String	fg,
String	bg
)
{
	text->fore_color = (COLORREF)FaceConvertString(0, fg, "Pixel");
	text->back_color = (COLORREF)FaceConvertString(0, bg, "Pixel");
}

String
XrtGetTextForeground (
XrtTextDesc	*text
)
{
	char buf[16];
	sprintf(buf, "rgb:%03d/%03d/%03d",
			GetRValue(text->fore_color),
			GetGValue(text->fore_color),
			GetBValue(text->fore_color));
	return XtNewString(buf);
}

String
XrtGetTextBackground (
XrtTextDesc	*text
)
{
	char buf[16];
	sprintf(buf, "rgb:%03d/%03d/%03d",
			GetRValue(text->back_color),
			GetGValue(text->back_color),
			GetBValue(text->back_color));
	return XtNewString(buf);
}

void
XrtSetTextBorder (
XrtTextDesc	*text,
XrtBorder	border,
int	width
)
{
	text->border = border;
	text->border_width = width;
}

XrtBorder
XrtGetTextBorderType (
XrtTextDesc	*text
)
{
	return text->border;
}

int
XrtGetTextBorderWidth (
XrtTextDesc	*text
)
{
	return text->border_width;
}

void
XrtSetTextFont (
XrtTextDesc	*text,
Font	fid
)
{
	text->font = fid;
}


Font
XrtGetTextFont (
XrtTextDesc	*text
)
{
	return text->font;
}

void
XrtSetTextPsFont (
XrtTextDesc	*text,
String	name,
int	size
)
{
#ifdef notdef
	text->psfont = XtNewString (name);
	text->psfont_size = size;
#endif
}

String
XrtGetTextPsFontName (
XrtTextDesc	*text
)
{
#ifdef notdef
	return text->psfont;
#else
	return("");
#endif
}

int
XrtGetTextPsFontSize (
XrtTextDesc	*text
)
{
#ifdef notdef
	return text->psfont_size;
#else
	return(0);
#endif
}

int
XrtGetTextCoordX (
XrtTextDesc	*text
)
{
	return text->coords.x;
}

int
XrtGetTextCoordY (
XrtTextDesc	*text
)
{
	return text->coords.y;
}

int
XrtGetTextCoordWidth (
XrtTextDesc	*text
)
{
	return text->coords.width;
}

int
XrtGetTextCoordHeight (
XrtTextDesc	*text
)
{
	return text->coords.height;
}


char	_XrtFmErrorMessage[100];

FILE *
_XrtFmOpenOutput (
char	*name,
Boolean	overwrite
)
{
	FILE	*out;
	extern int	sys_nerr;
	extern char	*sys_errlist[];

	if (!overwrite && _access (name,0) == 0) {
		strcpy (_XrtFmErrorMessage,sys_errlist[EEXIST]);
		return NULL;
	}

	errno = 0;
	out = fopen (name,"w");
	if (out == NULL) {
		if (errno > 0 && errno <= sys_nerr && sys_errlist[errno] != 0)
			strcpy (_XrtFmErrorMessage,sys_errlist[errno]);
		else
			strcpy (_XrtFmErrorMessage,"cannot open file");
	}
	return out;
}

String
XrtGetError () {
	return _XrtFmErrorMessage;
}

#ifdef XFMWIN_XRT_DRAW_AS_EMF
#define DRAW_FORMAT 	XRT_DRAW_ENHMETAFILE
#define DRAW_NAME 	"EMF"
#define DRAW_SUFFIX 	".emf"
#else
#ifdef XFMWIN_XRT_DRAW_AS_WMF
#define DRAW_FORMAT 	XRT_DRAW_HMETAFILE
#define DRAW_NAME 	"WMF"
#define DRAW_SUFFIX 	".wmf"
#else
#define DRAW_FORMAT 	XRT_DRAW_BITMAP
#define DRAW_NAME 	"BMP"
#define DRAW_SUFFIX 	".bmp"
#endif
#endif

Boolean
XrtFmDrawPS (
Widget	w,
String	name,
int	overwrite
)
{
	char* drawfile = (char*)XtMalloc(strlen(name) + 5);
	strcpy(drawfile, name);
	char* dot = strrchr(drawfile, '.');
	if(!dot)
		dot = drawfile + strlen(drawfile);
	strcpy(dot, DRAW_SUFFIX);
	TRACE("XrtFmDrawPS: drawing to %s file '%s' instead of PostScript file '%s'.\n",
			DRAW_NAME, drawfile, name);
	FILE* out = _XrtFmOpenOutput(drawfile, overwrite);
	if(!out){
		TRACE("XrtFmDrawPS(%s): %s\n", drawfile, XrtGetError());
		return(False);
	}
	fclose(out);
	Boolean ok = XrtDrawToFile(GETH(w), drawfile, /*NULL,*/ DRAW_FORMAT);
	XtFree(drawfile);
	return(ok);
}

int
XrtArrDataAppendPtsFloats(XrtData *d, double x, float *yf)
{
	if(yf == 0 || d->a.nsets <= 0)
		return(0);
	double *yd = (double*)malloc(d->a.nsets*sizeof(double));
	for(int i = 0; i < d->a.nsets; i++)
		yd[i] = (double)yf[i];
	int result = XrtArrDataAppendPts(d, x, yd);
	free((char*)yd);
	return(result);
}

Boolean		XtIsXrtGraph		(Widget w)
{
	return(w->IsKindOf(RUNTIME_CLASS(CChart2D)));
}

/*
 * XRT/Graph functions, overloaded with 'Widget' arguments instead of HXRT2D.
 */

int 		XrtArrCheckAxisBounds 	(Widget w, int a1, int a2)
{
	return(XrtArrCheckAxisBounds(GETH(w), a1, a2));
}

int 		XrtArrDataFastUpdate 	(Widget w, int a1, int a2)
{
	return(XrtArrDataFastUpdate(GETH(w), a1, a2));
}

int 		XrtGenCheckAxisBounds 	(Widget w, int a1, int a2, int a3)
{
	return(XrtGenCheckAxisBounds(GETH(w), a1, a2, a3));
}

int 		XrtGenDataFastUpdate 	(Widget w, int a1, int a2, int a3)
{
	return(XrtGenDataFastUpdate(GETH(w), a1, a2, a3));
}

XrtDataStyle* 	XrtGetNthDataStyle 	(Widget w, int a)
{
	return(XrtGetNthDataStyle(GETH(w), a));
}

XrtDataStyle* 	XrtGetNthDataStyle2 	(Widget w, int a)
{
	return(XrtGetNthDataStyle2(GETH(w), a));
}

String 		XrtGetNthPointLabel 	(Widget w, int a)
{
	return(XrtGetNthPointLabel(GETH(w), a));
}

String 		XrtGetNthPointLabel2 	(Widget w, int a)
{
	return(XrtGetNthPointLabel2(GETH(w), a));
}

String 		XrtGetNthSetLabel 	(Widget w, int a)
{
	return(XrtGetNthSetLabel(GETH(w), a));
}

String 		XrtGetNthSetLabel2 	(Widget w, int a)
{
	return(XrtGetNthSetLabel2(GETH(w), a));
}

int 		XrtGetTextHandles 	(Widget w, XrtTextHandle** a)
{
	return(XrtGetTextHandles(GETH(w), a));
}

XrtValueLabel* 	XrtGetValueLabel 	(Widget w, XrtAxis a1, XrtValueLabel* a2)
{
	return(XrtGetValueLabel(GETH(w), a1, a2));
}

XrtRegion 	XrtMap 			(Widget w, int a1, int a2, int a3, XrtMapResult* a4)
{
	return(XrtMap(GETH(w), a1, a2, a3, a4));
}

XrtRegion 	XrtPick 		(Widget w, XrtDsGroup a1, int a2, int a3, XrtPickResult* a4, XrtFocus a5)
{
	return(XrtPick(GETH(w), a1, a2, a3, a4, a5));
}

void 		XrtSetNthDataStyle 	(Widget w, int a1, XrtDataStyle* a2)
{
	XrtSetNthDataStyle(GETH(w), a1, a2);
}

void 		XrtSetNthDataStyle2 	(Widget w, int a1, XrtDataStyle* a2)
{
	XrtSetNthDataStyle2(GETH(w), a1, a2);
}

void 		XrtSetNthPointLabel 	(Widget w, int a1, String a2)
{
	XrtSetNthPointLabel(GETH(w), a1, a2);
}

void 		XrtSetNthPointLabel2 	(Widget w, int a1, String a2)
{
	XrtSetNthPointLabel2(GETH(w), a1, a2);
}

void 		XrtSetNthSetLabel 	(Widget w, int a1, String a2)
{
	XrtSetNthSetLabel(GETH(w), a1, a2);
}

void 		XrtSetNthSetLabel2 	(Widget w, int a1, String a2)
{
	XrtSetNthSetLabel2(GETH(w), a1, a2);
}

void 		XrtSetValueLabel 	(Widget w, XrtAxis a1, XrtValueLabel* a2)
{
	XrtSetValueLabel(GETH(w), a1, a2);
}

void 		XrtTextAttach 		(Widget w, XrtTextHandle a)
{
	XrtTextAttach(GETH(w), a);
}

XrtTextHandle 	XrtTextCreate 		(Widget w, XrtTextDesc* a)
{
	return(XrtTextCreate(GETH(w), a));
}

void 		XrtTextDestroy 		(Widget w, XrtTextHandle a)
{
	XrtTextDestroy(GETH(w), a);
}

void 		XrtTextDetach 		(Widget w, XrtTextHandle a)
{
	XrtTextDetach(GETH(w), a);
}

int 		XrtTextDetail 		(Widget w, XrtTextHandle a1, XrtTextDesc* a2)
{
	return(XrtTextDetail(GETH(w), a1, a2));
}

void 		XrtTextUpdate 		(Widget w, XrtTextHandle a1, XrtTextDesc* a2)
{
	XrtTextUpdate(GETH(w), a1, a2);
}

void 		XrtUnmap 		(Widget w, int a1, float a2, float a3, XrtMapResult* a4)
{
	XrtUnmap(GETH(w), a1, a2, a3, a4);
}

void 		XrtUnpick 		(Widget w, int a1, int a2, int a3, XrtPickResult* a4)
{
	XrtUnpick(GETH(w), a1, a2, a3, a4);
}
