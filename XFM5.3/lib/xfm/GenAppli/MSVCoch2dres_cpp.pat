//## 					begin pattern interface
//## // XFaceMaker/Win support for XRT/Graph resources
//## //
//## 					end pattern interface

#include "stdafx.h"
#include <xfmwin.h>
#include <och2dmfc.h>

/////////////////////////////////////////////////
/////////////////////////////////////////////////
// XRT/Graph resources.
/////////////////////////////////////////////////
/////////////////////////////////////////////////

/////////////////////////////////////////////////
// Booleans.
/////////////////////////////////////////////////

class CXfmXrtBoolean : public CXfmBoolean
{
public:
	CXfmXrtBoolean(char* name, int property)
		: CXfmBoolean(name, RUNTIME_CLASS(CChart2D))
			{ m_property = property; }
	virtual BOOL SetValue(CWnd* w, CXfmVariable v);
	virtual BOOL GetValue(CWnd* w, CXfmVariable& v);
protected:
	int m_property;
};

BOOL CXfmXrtBoolean::SetValue(CWnd* w, CXfmVariable v)
{
	XrtSetValues(((CChart2D*)w)->m_hChart, m_property, (XtArgVal)v, 0);
	return(TRUE);
}

BOOL CXfmXrtBoolean::GetValue(CWnd* w, CXfmVariable& v)
{
	BOOL val;
	XrtGetValues(((CChart2D*)w)->m_hChart, m_property, &val, 0);
	v = CXfmVariable((XtArgVal)val, m_type);
	return(TRUE);
}

static CXfmXrtBoolean RxrtDoubleBuffer("xrtDoubleBuffer", XRT_DOUBLE_BUFFER);
static CXfmXrtBoolean RxrtLegendShow("xrtLegendShow", XRT_LEGEND_SHOW);
static CXfmXrtBoolean RxrtXAxisShow("xrtXAxisShow", XRT_XAXIS_SHOW);
static CXfmXrtBoolean RxrtYAxisShow("xrtYAxisShow", XRT_YAXIS_SHOW);
static CXfmXrtBoolean RxrtY2AxisShow("xrtY2AxisShow", XRT_Y2AXIS_SHOW);
static CXfmXrtBoolean RxrtInvertOrientation("xrtInvertOrientation", XRT_INVERT_ORIENTATION);
static CXfmXrtBoolean RxrtTransposeData("xrtTransposeData", XRT_TRANSPOSE_DATA);
static CXfmXrtBoolean RxrtXMarkerShow("xrtXMarkerShow", XRT_XMARKER_SHOW);
static CXfmXrtBoolean RxrtYMarkerShow("xrtYMarkerShow", XRT_YMARKER_SHOW);
static CXfmXrtBoolean RxrtAxisBoundingBox("xrtAxisBoundingBox", XRT_AXIS_BOUNDING_BOX);
static CXfmXrtBoolean RxrtXAxisLogarithmic("xrtXAxisLogarithmic", XRT_XAXIS_LOGARITHMIC);
static CXfmXrtBoolean RxrtYAxisLogarithmic("xrtYAxisLogarithmic", XRT_YAXIS_LOGARITHMIC);
static CXfmXrtBoolean RxrtY2AxisLogarithmic("xrtY2AxisLogarithmic", XRT_Y2AXIS_LOGARITHMIC);
static CXfmXrtBoolean RxrtXAxisReversed("xrtXAxisReversed", XRT_XAXIS_REVERSED);
static CXfmXrtBoolean RxrtYAxisReversed("xrtYAxisReversed", XRT_YAXIS_REVERSED);
static CXfmXrtBoolean RxrtY2AxisReversed("xrtY2AxisReversed", XRT_Y2AXIS_REVERSED);
static CXfmXrtBoolean RxrtDebug("xrtDebug", XRT_DEBUG);
#ifdef notdef
static CXfmXrtBoolean RxrtUsePropertyEditor("xrtUsePropertyEditor", XRT_USE_PROPERTY_EDITOR);
#endif
static CXfmXrtBoolean RxrtRepaint("xrtRepaint", XRT_REPAINT);
static CXfmXrtBoolean RxrtGraphXUseDefault("xrtGraphXUseDefault", XRT_GRAPH_X_USE_DEFAULT);
static CXfmXrtBoolean RxrtGraphYUseDefault("xrtGraphYUseDefault", XRT_GRAPH_Y_USE_DEFAULT);
static CXfmXrtBoolean RxrtGraphWidthUseDefault("xrtGraphWidthUseDefault", XRT_GRAPH_WIDTH_USE_DEFAULT);
static CXfmXrtBoolean RxrtGraphHeightUseDefault("xrtGraphHeightUseDefault", XRT_GRAPH_HEIGHT_USE_DEFAULT);
static CXfmXrtBoolean RxrtHeaderXUseDefault("xrtHeaderXUseDefault", XRT_HEADER_X_USE_DEFAULT);
static CXfmXrtBoolean RxrtHeaderYUseDefault("xrtHeaderYUseDefault", XRT_HEADER_Y_USE_DEFAULT);
static CXfmXrtBoolean RxrtFooterXUseDefault("xrtFooterXUseDefault", XRT_FOOTER_X_USE_DEFAULT);
static CXfmXrtBoolean RxrtFooterYUseDefault("xrtFooterYUseDefault", XRT_FOOTER_Y_USE_DEFAULT);
static CXfmXrtBoolean RxrtLegendXUseDefault("xrtLegendXUseDefault", XRT_LEGEND_X_USE_DEFAULT);
static CXfmXrtBoolean RxrtLegendYUseDefault("xrtLegendYUseDefault", XRT_LEGEND_Y_USE_DEFAULT);
static CXfmXrtBoolean RxrtXMaxUseDefault("xrtXMaxUseDefault", XRT_XMAX_USE_DEFAULT);
static CXfmXrtBoolean RxrtYMaxUseDefault("xrtYMaxUseDefault", XRT_YMAX_USE_DEFAULT);
static CXfmXrtBoolean RxrtY2MaxUseDefault("xrtY2MaxUseDefault", XRT_Y2MAX_USE_DEFAULT);
static CXfmXrtBoolean RxrtXMinUseDefault("xrtXMinUseDefault", XRT_XMIN_USE_DEFAULT);
static CXfmXrtBoolean RxrtYMinUseDefault("xrtYMinUseDefault", XRT_YMIN_USE_DEFAULT);
static CXfmXrtBoolean RxrtY2MinUseDefault("xrtY2MinUseDefault", XRT_Y2MIN_USE_DEFAULT);
static CXfmXrtBoolean RxrtXTickUseDefault("xrtXTickUseDefault", XRT_XTICK_USE_DEFAULT);
static CXfmXrtBoolean RxrtYTickUseDefault("xrtYTickUseDefault", XRT_YTICK_USE_DEFAULT);
static CXfmXrtBoolean RxrtY2TickUseDefault("xrtY2TickUseDefault", XRT_Y2TICK_USE_DEFAULT);
static CXfmXrtBoolean RxrtXNumUseDefault("xrtXNumUseDefault", XRT_XNUM_USE_DEFAULT);
static CXfmXrtBoolean RxrtYNumUseDefault("xrtYNumUseDefault", XRT_YNUM_USE_DEFAULT);
static CXfmXrtBoolean RxrtY2NumUseDefault("xrtY2NumUseDefault", XRT_Y2NUM_USE_DEFAULT);
static CXfmXrtBoolean RxrtXOriginUseDefault("xrtXOriginUseDefault", XRT_XORIGIN_USE_DEFAULT);
static CXfmXrtBoolean RxrtYOriginUseDefault("xrtYOriginUseDefault", XRT_YORIGIN_USE_DEFAULT);
static CXfmXrtBoolean RxrtDataStylesUseDefault("xrtDataStylesUseDefault", XRT_DATA_STYLES_USE_DEFAULT);
static CXfmXrtBoolean RxrtDataStyles2UseDefault("xrtDataStyles2UseDefault", XRT_DATA_STYLES2_USE_DEFAULT);
static CXfmXrtBoolean RxrtOtherDataStyleUseDefault("xrtOtherDataStyleUseDefault", XRT_OTHER_DATA_STYLE_USE_DEFAULT);
static CXfmXrtBoolean RxrtMarkerDataStyleUseDefault("xrtMarkerDataStyleUseDefault", XRT_MARKER_DATA_STYLE_USE_DEFAULT);
static CXfmXrtBoolean RxrtXGridDataStyleUseDefault("xrtXGridDataStyleUseDefault", XRT_XGRID_DATA_STYLE_USE_DEFAULT);
static CXfmXrtBoolean RxrtYGridDataStyleUseDefault("xrtYGridDataStyleUseDefault", XRT_YGRID_DATA_STYLE_USE_DEFAULT);
static CXfmXrtBoolean RxrtXGridUseDefault("xrtXGridUseDefault", XRT_XGRID_USE_DEFAULT);
static CXfmXrtBoolean RxrtYGridUseDefault("xrtYGridUseDefault", XRT_YGRID_USE_DEFAULT);
static CXfmXrtBoolean RxrtXPrecisionUseDefault("xrtXPrecisionUseDefault", XRT_XPRECISION_USE_DEFAULT);
static CXfmXrtBoolean RxrtYPrecisionUseDefault("xrtYPrecisionUseDefault", XRT_YPRECISION_USE_DEFAULT);
static CXfmXrtBoolean RxrtY2PrecisionUseDefault("xrtY2PrecisionUseDefault", XRT_Y2PRECISION_USE_DEFAULT);
static CXfmXrtBoolean RxrtGraphMarginBottomUseDefault("xrtGraphMarginBottomUseDefault", XRT_GRAPH_MARGIN_BOTTOM_USE_DEFAULT);
static CXfmXrtBoolean RxrtGraphMarginLeftUseDefault("xrtGraphMarginLeftUseDefault", XRT_GRAPH_MARGIN_LEFT_USE_DEFAULT);
static CXfmXrtBoolean RxrtGraphMarginRightUseDefault("xrtGraphMarginRightUseDefault", XRT_GRAPH_MARGIN_RIGHT_USE_DEFAULT);
static CXfmXrtBoolean RxrtGraphMarginTopUseDefault("xrtGraphMarginTopUseDefault", XRT_GRAPH_MARGIN_TOP_USE_DEFAULT);
static CXfmXrtBoolean RxrtXAxisMaxUseDefault("xrtXAxisMaxUseDefault", XRT_XAXIS_MAX_USE_DEFAULT);
static CXfmXrtBoolean RxrtYAxisMaxUseDefault("xrtYAxisMaxUseDefault", XRT_YAXIS_MAX_USE_DEFAULT);
static CXfmXrtBoolean RxrtY2AxisMaxUseDefault("xrtY2AxisMaxUseDefault", XRT_Y2AXIS_MAX_USE_DEFAULT);
static CXfmXrtBoolean RxrtXAxisMinUseDefault("xrtXAxisMinUseDefault", XRT_XAXIS_MIN_USE_DEFAULT);
static CXfmXrtBoolean RxrtYAxisMinUseDefault("xrtYAxisMinUseDefault", XRT_YAXIS_MIN_USE_DEFAULT);
static CXfmXrtBoolean RxrtY2AxisMinUseDefault("xrtY2AxisMinUseDefault", XRT_Y2AXIS_MIN_USE_DEFAULT);
static CXfmXrtBoolean RxrtTimeFormatUseDefault("xrtTimeFormatUseDefault", XRT_TIME_FORMAT_USE_DEFAULT);

/////////////////////////////////////////////////
// Shorts.
/////////////////////////////////////////////////

class CXfmXrtShort : public CXfmInteger
{
public:
	CXfmXrtShort(char* name, int property)
		: CXfmInteger(name, RUNTIME_CLASS(CChart2D), "Short")
			{ m_property = property; }
	virtual BOOL SetValue(CWnd* w, CXfmVariable v);
	virtual BOOL GetValue(CWnd* w, CXfmVariable& v);
protected:
	int m_property;
};

BOOL CXfmXrtShort::SetValue(CWnd* w, CXfmVariable v)
{
	XrtSetValues(((CChart2D*)w)->m_hChart, m_property, (XtArgVal)v, 0);
	return(TRUE);
}

BOOL CXfmXrtShort::GetValue(CWnd* w, CXfmVariable& v)
{
	short val;
	XrtGetValues(((CChart2D*)w)->m_hChart, m_property, &val, 0);
	v = CXfmVariable((XtArgVal)val, m_type);
	return(TRUE);
}

static CXfmXrtShort RxrtGraphX("xrtGraphX", XRT_GRAPH_X);
static CXfmXrtShort RxrtGraphY("xrtGraphY", XRT_GRAPH_Y);
static CXfmXrtShort RxrtGraphWidth("xrtGraphWidth", XRT_GRAPH_WIDTH);
static CXfmXrtShort RxrtGraphHeight("xrtGraphHeight", XRT_GRAPH_HEIGHT);
static CXfmXrtShort RxrtHeaderX("xrtHeaderX", XRT_HEADER_X);
static CXfmXrtShort RxrtHeaderY("xrtHeaderY", XRT_HEADER_Y);
static CXfmXrtShort RxrtHeaderWidth("xrtHeaderWidth", XRT_HEADER_WIDTH);
static CXfmXrtShort RxrtHeaderHeight("xrtHeaderHeight", XRT_HEADER_HEIGHT);
static CXfmXrtShort RxrtFooterX("xrtFooterX", XRT_FOOTER_X);
static CXfmXrtShort RxrtFooterY("xrtFooterY", XRT_FOOTER_Y);
static CXfmXrtShort RxrtFooterWidth("xrtFooterWidth", XRT_FOOTER_WIDTH);
static CXfmXrtShort RxrtFooterHeight("xrtFooterHeight", XRT_FOOTER_HEIGHT);
static CXfmXrtShort RxrtLegendX("xrtLegendX", XRT_LEGEND_X);
static CXfmXrtShort RxrtLegendY("xrtLegendY", XRT_LEGEND_Y);
static CXfmXrtShort RxrtLegendWidth("xrtLegendWidth", XRT_LEGEND_WIDTH);
static CXfmXrtShort RxrtLegendHeight("xrtLegendHeight", XRT_LEGEND_HEIGHT);
static CXfmXrtShort RxrtXPrecision("xrtXPrecision", XRT_XPRECISION);
static CXfmXrtShort RxrtYPrecision("xrtYPrecision", XRT_YPRECISION);
static CXfmXrtShort RxrtY2Precision("xrtY2Precision", XRT_Y2PRECISION);
static CXfmXrtShort RxrtPieMinSlices("xrtPieMinSlices", XRT_PIE_MIN_SLICES);
static CXfmXrtShort RxrtXMarkerSet("xrtXMarkerSet", XRT_XMARKER_SET);
static CXfmXrtShort RxrtXMarkerPoint("xrtXMarkerPoint", XRT_XMARKER_POINT);
static CXfmXrtShort RxrtHeaderBorderWidth("xrtHeaderBorderWidth", XRT_HEADER_BORDER_WIDTH);
static CXfmXrtShort RxrtFooterBorderWidth("xrtFooterBorderWidth", XRT_FOOTER_BORDER_WIDTH);
static CXfmXrtShort RxrtGraphBorderWidth("xrtGraphBorderWidth", XRT_GRAPH_BORDER_WIDTH);
static CXfmXrtShort RxrtLegendBorderWidth("xrtLegendBorderWidth", XRT_LEGEND_BORDER_WIDTH);
static CXfmXrtShort RxrtBarClusterOverlap("xrtBarClusterOverlap", XRT_BAR_CLUSTER_OVERLAP);
static CXfmXrtShort RxrtBarClusterWidth("xrtBarClusterWidth", XRT_BAR_CLUSTER_WIDTH);
static CXfmXrtShort RxrtGraphDepth("xrtGraphDepth", XRT_GRAPH_DEPTH);
static CXfmXrtShort RxrtGraphRotation("xrtGraphRotation", XRT_GRAPH_ROTATION);
static CXfmXrtShort RxrtGraphInclination("xrtGraphInclination", XRT_GRAPH_INCLINATION);
static CXfmXrtShort RxrtGraphMarginBottom("xrtGraphMarginBottom", XRT_GRAPH_MARGIN_BOTTOM);
static CXfmXrtShort RxrtGraphMarginLeft("xrtGraphMarginLeft", XRT_GRAPH_MARGIN_LEFT);
static CXfmXrtShort RxrtGraphMarginRight("xrtGraphMarginRight", XRT_GRAPH_MARGIN_RIGHT);
static CXfmXrtShort RxrtGraphMarginTop("xrtGraphMarginTop", XRT_GRAPH_MARGIN_TOP);
static CXfmXrtShort RxrtBorderWidth("xrtBorderWidth", XRT_BORDER_WIDTH);
static CXfmXrtShort RxrtMarkerDataset("xrtMarkerDataset", XRT_MARKER_DATASET);

/////////////////////////////////////////////////
// Integers.
/////////////////////////////////////////////////

class CXfmXrtInteger : public CXfmInteger
{
public:
	CXfmXrtInteger(char* name, int property)
		: CXfmInteger(name, RUNTIME_CLASS(CChart2D), "Integer")
			{ m_property = property; }
	virtual BOOL SetValue(CWnd* w, CXfmVariable v);
	virtual BOOL GetValue(CWnd* w, CXfmVariable& v);
protected:
	int m_property;
};

BOOL CXfmXrtInteger::SetValue(CWnd* w, CXfmVariable v)
{
	XrtSetValues(((CChart2D*)w)->m_hChart, m_property, (XtArgVal)v, 0);
	return(TRUE);
}

BOOL CXfmXrtInteger::GetValue(CWnd* w, CXfmVariable& v)
{
	short val;
	XrtGetValues(((CChart2D*)w)->m_hChart, m_property, &val, 0);
	v = CXfmVariable((XtArgVal)val, m_type);
	return(TRUE);
}

static CXfmXrtInteger RxrtTimeBase("xrtTimeBase", XRT_TIME_BASE);
static CXfmXrtInteger RxrtFrontDataset("xrtFrontDataset", XRT_FRONT_DATASET);

/////////////////////////////////////////////////
// Colors.
/////////////////////////////////////////////////

class CXfmXrtPixel : public CXfmPixel
{
public:
	CXfmXrtPixel(char* name, int property)
		: CXfmPixel(name, RUNTIME_CLASS(CChart2D))
			{ m_property = property; }
	virtual BOOL SetValue(CWnd* w, CXfmVariable v);
	virtual BOOL GetValue(CWnd* w, CXfmVariable& v);
protected:
	int m_property;
};

BOOL CXfmXrtPixel::SetValue(CWnd* w, CXfmVariable v)
{
	XrtSetValues(((CChart2D*)w)->m_hChart, m_property, (XtArgVal)v, 0);
	return(TRUE);
}

BOOL CXfmXrtPixel::GetValue(CWnd* w, CXfmVariable& v)
{
	COLORREF val;
	XrtGetValues(((CChart2D*)w)->m_hChart, m_property, &val, 0);
	v = CXfmVariable((XtArgVal)val, m_type);
	return(TRUE);
}

static CXfmXrtPixel RxrtBackgroundColor("xrtBackgroundColor", XRT_BACKGROUND_COLOR);
static CXfmXrtPixel RxrtForegroundColor("xrtForegroundColor", XRT_FOREGROUND_COLOR);
static CXfmXrtPixel RxrtGraphBackgroundColor("xrtGraphBackgroundColor", XRT_GRAPH_BACKGROUND_COLOR);
static CXfmXrtPixel RxrtGraphForegroundColor("xrtGraphForegroundColor", XRT_GRAPH_FOREGROUND_COLOR);
static CXfmXrtPixel RxrtHeaderBackgroundColor("xrtHeaderBackgroundColor", XRT_HEADER_BACKGROUND_COLOR);
static CXfmXrtPixel RxrtHeaderForegroundColor("xrtHeaderForegroundColor", XRT_HEADER_FOREGROUND_COLOR);
static CXfmXrtPixel RxrtFooterBackgroundColor("xrtFooterBackgroundColor", XRT_FOOTER_BACKGROUND_COLOR);
static CXfmXrtPixel RxrtFooterForegroundColor("xrtFooterForegroundColor", XRT_FOOTER_FOREGROUND_COLOR);
static CXfmXrtPixel RxrtLegendBackgroundColor("xrtLegendBackgroundColor", XRT_LEGEND_BACKGROUND_COLOR);
static CXfmXrtPixel RxrtLegendForegroundColor("xrtLegendForegroundColor", XRT_LEGEND_FOREGROUND_COLOR);
static CXfmXrtPixel RxrtDataAreaBackgroundColor("xrtDataAreaBackgroundColor", XRT_DATA_AREA_BACKGROUND_COLOR);

/////////////////////////////////////////////////
// Strings.
/////////////////////////////////////////////////

class CXfmXrtString : public CXfmResource
{
public:
	CXfmXrtString(char* name, int property)
		: CXfmResource(name, RUNTIME_CLASS(CChart2D), "String")
			{ m_property = property; }
	virtual BOOL SetValue(CWnd* w, CXfmVariable v);
	virtual BOOL GetValue(CWnd* w, CXfmVariable& v);
protected:
	int m_property;
};

BOOL CXfmXrtString::SetValue(CWnd* w, CXfmVariable v)
{
	XrtSetValues(((CChart2D*)w)->m_hChart, m_property, (XtArgVal)v, 0);
	return(TRUE);
}

BOOL CXfmXrtString::GetValue(CWnd* w, CXfmVariable& v)
{
	char* val;
	XrtGetValues(((CChart2D*)w)->m_hChart, m_property, &val, 0);
	v = CXfmVariable((XtArgVal)val, m_type);
	return(TRUE);
}

static CXfmXrtString RxrtXTitle("xrtXTitle", XRT_XTITLE);
static CXfmXrtString RxrtYTitle("xrtYTitle", XRT_YTITLE);
static CXfmXrtString RxrtY2Title("xrtY2Title", XRT_Y2TITLE);
static CXfmXrtString RxrtOtherLabel("xrtOtherLabel", XRT_OTHER_LABEL);
static CXfmXrtString RxrtTimeFormat("xrtTimeFormat", XRT_TIME_FORMAT);
static CXfmXrtString RxrtName("xrtName", XRT_NAME);

/////////////////////////////////////////////////
// String tables.
/////////////////////////////////////////////////

class CXfmXrtStringTable : public CXfmStringTable
{
public:
	CXfmXrtStringTable(char* name, int property)
		: CXfmStringTable(name, RUNTIME_CLASS(CChart2D))
			{ m_property = property; }
	virtual BOOL SetValue(CWnd* w, CXfmVariable v);
	virtual BOOL GetValue(CWnd* w, CXfmVariable& v);
protected:
	int m_property;
};

BOOL CXfmXrtStringTable::SetValue(CWnd* w, CXfmVariable v)
{
	XrtSetValues(((CChart2D*)w)->m_hChart, m_property, (XtArgVal)v, 0);
	return(TRUE);
}

BOOL CXfmXrtStringTable::GetValue(CWnd* w, CXfmVariable& v)
{
	char** val;
	XrtGetValues(((CChart2D*)w)->m_hChart, m_property, &val, 0);
	v = CXfmVariable((XtArgVal)val, m_type);
	return(TRUE);
}

static CXfmXrtStringTable RxrtSetLabels("xrtSetLabels", XRT_SET_LABELS);
static CXfmXrtStringTable RxrtSetLabels2("xrtSetLabels2", XRT_SET_LABELS2);
static CXfmXrtStringTable RxrtPointLabels("xrtPointLabels", XRT_POINT_LABELS);
static CXfmXrtStringTable RxrtPointLabels2("xrtPointLabels2", XRT_POINT_LABELS2);
static CXfmXrtStringTable RxrtHeaderStrings("xrtHeaderStrings", XRT_HEADER_STRINGS);
static CXfmXrtStringTable RxrtFooterStrings("xrtFooterStrings", XRT_FOOTER_STRINGS);

/////////////////////////////////////////////////
// Floats.
/////////////////////////////////////////////////

class CXfmXrtFloat : public CXfmFloat
{
public:
	CXfmXrtFloat(char* name, int property)
		: CXfmFloat(name, RUNTIME_CLASS(CChart2D))
			{ m_property = property; }
	virtual BOOL SetValue(CWnd* w, CXfmVariable v);
	virtual BOOL GetValue(CWnd* w, CXfmVariable& v);
protected:
	int m_property;
};

BOOL CXfmXrtFloat::SetValue(CWnd* w, CXfmVariable v)
{
	double dv = (double)(float)v;
	XrtSetValues(((CChart2D*)w)->m_hChart, m_property, dv, NULL);
	return(TRUE);
}

BOOL CXfmXrtFloat::GetValue(CWnd* w, CXfmVariable& v)
{
	double val;
	XrtGetValues(((CChart2D*)w)->m_hChart, m_property, &val, 0);
	v = CXfmVariable((float)val);
	return(TRUE);
}

static CXfmXrtFloat RxrtXMin("xrtXMin", XRT_XMIN);
static CXfmXrtFloat RxrtYMin("xrtYMin", XRT_YMIN);
static CXfmXrtFloat RxrtY2Min("xrtY2Min", XRT_Y2MIN);
static CXfmXrtFloat RxrtXMax("xrtXMax", XRT_XMAX);
static CXfmXrtFloat RxrtYMax("xrtYMax", XRT_YMAX);
static CXfmXrtFloat RxrtY2Max("xrtY2Max", XRT_Y2MAX);
static CXfmXrtFloat RxrtXNum("xrtXNum", XRT_XNUM);
static CXfmXrtFloat RxrtYNum("xrtYNum", XRT_YNUM);
static CXfmXrtFloat RxrtY2Num("xrtY2Num", XRT_Y2NUM);
static CXfmXrtFloat RxrtXTick("xrtXTick", XRT_XTICK);
static CXfmXrtFloat RxrtYTick("xrtYTick", XRT_YTICK);
static CXfmXrtFloat RxrtY2Tick("xrtY2Tick", XRT_Y2TICK);
static CXfmXrtFloat RxrtXOrigin("xrtXOrigin", XRT_XORIGIN);
static CXfmXrtFloat RxrtYOrigin("xrtYOrigin", XRT_YORIGIN);
static CXfmXrtFloat RxrtPieThresholdValue("xrtPieThresholdValue", XRT_PIE_THRESHOLD_VALUE);
static CXfmXrtFloat RxrtXMarker("xrtXMarker", XRT_XMARKER);
static CXfmXrtFloat RxrtYMarker("xrtYMarker", XRT_YMARKER);
static CXfmXrtFloat RxrtXGrid("xrtXGrid", XRT_XGRID);
static CXfmXrtFloat RxrtYGrid("xrtYGrid", XRT_YGRID);
static CXfmXrtFloat RxrtXAxisMax("xrtXAxisMax", XRT_XAXIS_MAX);
static CXfmXrtFloat RxrtYAxisMax("xrtYAxisMax", XRT_YAXIS_MAX);
static CXfmXrtFloat RxrtY2AxisMax("xrtY2AxisMax", XRT_Y2AXIS_MAX);
static CXfmXrtFloat RxrtXAxisMin("xrtXAxisMin", XRT_XAXIS_MIN);
static CXfmXrtFloat RxrtYAxisMin("xrtYAxisMin", XRT_YAXIS_MIN);
static CXfmXrtFloat RxrtY2AxisMin("xrtY2AxisMin", XRT_Y2AXIS_MIN);
static CXfmXrtFloat RxrtYAxisMult("xrtYAxisMult", XRT_YAXIS_MULT);
static CXfmXrtFloat RxrtYAxisConst("xrtYAxisConst", XRT_YAXIS_CONST);

/////////////////////////////////////////////////
// XRT/Graph enumerations.
/////////////////////////////////////////////////

class CXfmXrtEnumeration : public CXfmEnumeration
{
public:
	DLLEXPORT CXfmXrtEnumeration(char* name, int property, char* type, ...);
	DLLEXPORT virtual BOOL SetValue(Widget w, CXfmVariable v);
	DLLEXPORT virtual BOOL GetValue(Widget w, CXfmVariable& v);
protected:
	int m_property;
};

CXfmXrtEnumeration::CXfmXrtEnumeration(char* name, int property, char* type, ...)
	: CXfmEnumeration(name, type, RUNTIME_CLASS(CChart2D))
{
	va_list a;
	char* enum_name;
	int enum_value;
	
	Init();
	
	va_start(a, type);
	while(enum_name = va_arg(a, char*)){
		enum_value = va_arg(a, int);
		AddEnumValue(enum_name, enum_value);
	}
	va_end(a);
	
	m_property = property;
}

BOOL CXfmXrtEnumeration::SetValue(Widget w, CXfmVariable v)
{
	XrtSetValues(((CChart2D*)w)->m_hChart, m_property, (XtArgVal)v, NULL);
	return(TRUE);
}

BOOL CXfmXrtEnumeration::GetValue(Widget w, CXfmVariable& v)
{
	int val;
	XrtGetValues(((CChart2D*)w)->m_hChart, m_property, &val, NULL);
	v = CXfmVariable((XtArgVal)val, m_type);
	return(TRUE);	
}

static CXfmXrtEnumeration RxrtType("xrtType", XRT_TYPE, "XrtType",
		"DataArray", XRT_DATA_ARRAY,
		"DataGeneral", XRT_DATA_GENERAL,
		0);
static CXfmXrtEnumeration RxrtType2("xrtType2", XRT_TYPE2, "XrtType",
		"DataArray", XRT_DATA_ARRAY,
		"DataGeneral", XRT_DATA_GENERAL,
		0);
static CXfmXrtEnumeration RxrtHeaderAdjust("xrtHeaderAdjust", XRT_HEADER_ADJUST, "XrtAdjust",
		"AdjustLeft", XRT_ADJUST_LEFT,
		"AdjustRight", XRT_ADJUST_RIGHT,
		"AdjustCenter", XRT_ADJUST_CENTER,
		0);
static CXfmXrtEnumeration RxrtFooterAdjust("xrtFooterAdjust", XRT_FOOTER_ADJUST, "XrtAdjust",
		"AdjustLeft", XRT_ADJUST_LEFT,
		"AdjustRight", XRT_ADJUST_RIGHT,
		"AdjustCenter", XRT_ADJUST_CENTER,
		0);
static CXfmXrtEnumeration RxrtPieOrder("xrtPieOrder", XRT_PIE_ORDER, "XrtPieOrder",
		"PieorderAscending", XRT_PIEORDER_ASCENDING,
		"PieorderDescending", XRT_PIEORDER_DESCENDING,
		"PieorderDataOrder", XRT_PIEORDER_DATA_ORDER,
		0);
static CXfmXrtEnumeration RxrtPieThresholdMethod("xrtPieThresholdMethod", XRT_PIE_THRESHOLD_METHOD, "XrtPieThresholdMethod",
		"PieSliceCutoff", XRT_PIE_SLICE_CUTOFF,
		"PiePercentile", XRT_PIE_PERCENTILE,
		0);
static CXfmXrtEnumeration RxrtLegendAnchor("xrtLegendAnchor", XRT_LEGEND_ANCHOR, "XrtAnchor",
		"AnchorNorth", XRT_ANCHOR_NORTH,
		"AnchorSouth", XRT_ANCHOR_SOUTH,
		"AnchorEast", XRT_ANCHOR_EAST,
		"AnchorWest", XRT_ANCHOR_WEST,
		"AnchorNortheast", XRT_ANCHOR_NORTHEAST,
		"AnchorNorthwest", XRT_ANCHOR_NORTHWEST,
		"AnchorSoutheast", XRT_ANCHOR_SOUTHEAST,
		"AnchorSouthwest", XRT_ANCHOR_SOUTHWEST,
		"AnchorHome", XRT_ANCHOR_HOME,
		"AnchorBest", XRT_ANCHOR_BEST,
		0);
static CXfmXrtEnumeration RxrtLegendOrientation("xrtLegendOrientation", XRT_LEGEND_ORIENTATION, "XrtAlign",
		"AlignVertical", XRT_ALIGN_VERTICAL,
		"AlignHorizontal", XRT_ALIGN_HORIZONTAL,
		0);
static CXfmXrtEnumeration RxrtHeaderBorder("xrtHeaderBorder", XRT_HEADER_BORDER, "XrtBorder",
		"BorderNone", XRT_BORDER_NONE,
		"Border3dOut", XRT_BORDER_3D_OUT,
		"Border3dIn", XRT_BORDER_3D_IN,
		"BorderShadow", XRT_BORDER_SHADOW,
		"BorderPlain", XRT_BORDER_PLAIN,
		"BorderEtchedIn", XRT_BORDER_ETCHED_IN,
		"BorderEtchedOut", XRT_BORDER_ETCHED_OUT,
		0);
static CXfmXrtEnumeration RxrtFooterBorder("xrtFooterBorder", XRT_FOOTER_BORDER, "XrtBorder",
		"BorderNone", XRT_BORDER_NONE,
		"Border3dOut", XRT_BORDER_3D_OUT,
		"Border3dIn", XRT_BORDER_3D_IN,
		"BorderShadow", XRT_BORDER_SHADOW,
		"BorderPlain", XRT_BORDER_PLAIN,
		"BorderEtchedIn", XRT_BORDER_ETCHED_IN,
		"BorderEtchedOut", XRT_BORDER_ETCHED_OUT,
		0);
static CXfmXrtEnumeration RxrtLegendBorder("xrtLegendBorder", XRT_LEGEND_BORDER, "XrtBorder",
		"BorderNone", XRT_BORDER_NONE,
		"Border3dOut", XRT_BORDER_3D_OUT,
		"Border3dIn", XRT_BORDER_3D_IN,
		"BorderShadow", XRT_BORDER_SHADOW,
		"BorderPlain", XRT_BORDER_PLAIN,
		"BorderEtchedIn", XRT_BORDER_ETCHED_IN,
		"BorderEtchedOut", XRT_BORDER_ETCHED_OUT,
		0);
static CXfmXrtEnumeration RxrtGraphBorder("xrtGraphBorder", XRT_GRAPH_BORDER, "XrtBorder",
		"BorderNone", XRT_BORDER_NONE,
		"Border3dOut", XRT_BORDER_3D_OUT,
		"Border3dIn", XRT_BORDER_3D_IN,
		"BorderShadow", XRT_BORDER_SHADOW,
		"BorderPlain", XRT_BORDER_PLAIN,
		"BorderEtchedIn", XRT_BORDER_ETCHED_IN,
		"BorderEtchedOut", XRT_BORDER_ETCHED_OUT,
		0);
static CXfmXrtEnumeration RxrtXAnnotationMethod("xrtXAnnotationMethod", XRT_XANNOTATION_METHOD, "XrtAnnoMethod",
		"AnnoValues", XRT_ANNO_VALUES,
		"AnnoPointLabels", XRT_ANNO_POINT_LABELS,
		"AnnoValueLabels", XRT_ANNO_VALUE_LABELS,
		"AnnoTimeLabels", XRT_ANNO_TIME_LABELS,
		0);
static CXfmXrtEnumeration RxrtYAnnotationMethod("xrtYAnnotationMethod", XRT_YANNOTATION_METHOD, "XrtAnnoMethod",
		"AnnoValues", XRT_ANNO_VALUES,
		"AnnoPointLabels", XRT_ANNO_POINT_LABELS,
		"AnnoValueLabels", XRT_ANNO_VALUE_LABELS,
		"AnnoTimeLabels", XRT_ANNO_TIME_LABELS,
		0);
static CXfmXrtEnumeration RxrtY2AnnotationMethod("xrtY2AnnotationMethod", XRT_Y2ANNOTATION_METHOD, "XrtAnnoMethod",
		"AnnoValues", XRT_ANNO_VALUES,
		"AnnoPointLabels", XRT_ANNO_POINT_LABELS,
		"AnnoValueLabels", XRT_ANNO_VALUE_LABELS,
		"AnnoTimeLabels", XRT_ANNO_TIME_LABELS,
		0);
static CXfmXrtEnumeration RxrtXAnnoPlacement("xrtXAnnoPlacement", XRT_XANNO_PLACEMENT, "XrtAnnoPlacement",
		"AnnoAuto", XRT_ANNO_AUTO,
		"AnnoOrigin", XRT_ANNO_ORIGIN,
		"AnnoMin", XRT_ANNO_MIN,
		"AnnoMax", XRT_ANNO_MAX,
		0);
static CXfmXrtEnumeration RxrtYAnnoPlacement("xrtYAnnoPlacement", XRT_YANNO_PLACEMENT, "XrtAnnoPlacement",
		"AnnoAuto", XRT_ANNO_AUTO,
		"AnnoOrigin", XRT_ANNO_ORIGIN,
		"AnnoMin", XRT_ANNO_MIN,
		"AnnoMax", XRT_ANNO_MAX,
		0);
static CXfmXrtEnumeration RxrtXNumMethod("xrtXNumMethod", XRT_XNUM_METHOD, "XrtNumMethod",
		"NumPrecision", XRT_NUM_PRECISION,
		"NumRound", XRT_NUM_ROUND,
		0);
static CXfmXrtEnumeration RxrtYNumMethod("xrtYNumMethod", XRT_YNUM_METHOD, "XrtNumMethod",
		"NumPrecision", XRT_NUM_PRECISION,
		"NumRound", XRT_NUM_ROUND,
		0);
static CXfmXrtEnumeration RxrtY2NumMethod("xrtY2NumMethod", XRT_Y2NUM_METHOD, "XrtNumMethod",
		"NumPrecision", XRT_NUM_PRECISION,
		"NumRound", XRT_NUM_ROUND,
		0);
static CXfmXrtEnumeration RxrtXOriginPlacement("xrtXOriginPlacement", XRT_XORIGIN_PLACEMENT, "XrtOriginPlacement",
		"OriginAuto", XRT_ORIGIN_AUTO,
		"OriginZero", XRT_ORIGIN_ZERO,
		"OriginMin", XRT_ORIGIN_MIN,
		"OriginMax", XRT_ORIGIN_MAX,
		0);
static CXfmXrtEnumeration RxrtYOriginPlacement("xrtYOriginPlacement", XRT_YORIGIN_PLACEMENT, "XrtOriginPlacement",
		"OriginAuto", XRT_ORIGIN_AUTO,
		"OriginZero", XRT_ORIGIN_ZERO,
		"OriginMin", XRT_ORIGIN_MIN,
		"OriginMax", XRT_ORIGIN_MAX,
		0);
static CXfmXrtEnumeration RxrtTimeUnit("xrtTimeUnit", XRT_TIME_UNIT, "XrtTimeUnit",
		"TmunitSeconds", XRT_TMUNIT_SECONDS,
		"TmunitMinutes", XRT_TMUNIT_MINUTES,
		"TmunitHours", XRT_TMUNIT_HOURS,
		"TmunitDays", XRT_TMUNIT_DAYS,
		"TmunitWeeks", XRT_TMUNIT_WEEKS,
		"TmunitMonths", XRT_TMUNIT_MONTHS,
		"TmunitYears", XRT_TMUNIT_YEARS,
		0);
static CXfmXrtEnumeration RxrtXTitleRotation("xrtXTitleRotation", XRT_XTITLE_ROTATION, "XrtRotate",
		"RotateNone", XRT_ROTATE_NONE,
		"Rotate90", XRT_ROTATE_90,
		"Rotate270", XRT_ROTATE_270,
		0);
static CXfmXrtEnumeration RxrtYTitleRotation("xrtYTitleRotation", XRT_YTITLE_ROTATION, "XrtRotate",
		"RotateNone", XRT_ROTATE_NONE,
		"Rotate90", XRT_ROTATE_90,
		"Rotate270", XRT_ROTATE_270,
		0);
static CXfmXrtEnumeration RxrtY2TitleRotation("xrtY2TitleRotation", XRT_Y2TITLE_ROTATION, "XrtRotate",
		"RotateNone", XRT_ROTATE_NONE,
		"Rotate90", XRT_ROTATE_90,
		"Rotate270", XRT_ROTATE_270,
		0);
static CXfmXrtEnumeration RxrtXAnnotationRotation("xrtXAnnotationRotation", XRT_XANNOTATION_ROTATION, "XrtRotate",
		"RotateNone", XRT_ROTATE_NONE,
		"Rotate90", XRT_ROTATE_90,
		"Rotate270", XRT_ROTATE_270,
		0);
static CXfmXrtEnumeration RxrtYAnnotationRotation("xrtYAnnotationRotation", XRT_YANNOTATION_ROTATION, "XrtRotate",
		"RotateNone", XRT_ROTATE_NONE,
		"Rotate90", XRT_ROTATE_90,
		"Rotate270", XRT_ROTATE_270,
		0);
static CXfmXrtEnumeration RxrtY2AnnotationRotation("xrtY2AnnotationRotation", XRT_Y2ANNOTATION_ROTATION, "XrtRotate",
		"RotateNone", XRT_ROTATE_NONE,
		"Rotate90", XRT_ROTATE_90,
		"Rotate270", XRT_ROTATE_270,
		0);

////////////////////
// XrtData
////////////////////

class CXfmXrtData : public CXfmResource
{
public:
	CXfmXrtData(char* name, CRuntimeClass* wclass)
		: CXfmResource(name, wclass, "XrtData") {}
	virtual BOOL Convert(CWnd* w, CXfmVariable& v);
	virtual BOOL SetValue(CWnd* w, CXfmVariable v);
	virtual BOOL GetValue(CWnd* w, CXfmVariable& v);
};

BOOL CXfmXrtData::Convert(CWnd* w, CXfmVariable& v)
{
	v = CXfmVariable((XtArgVal)XrtMakeDataFromFile((char*)v, NULL), m_type);
	return(TRUE);
}

BOOL CXfmXrtData::SetValue(CWnd* w, CXfmVariable v)
{
	((CChart2D*)w)->SetData((XrtData*)(XtArgVal)v);
	return(TRUE);
}

BOOL CXfmXrtData::GetValue(CWnd* w, CXfmVariable& v)
{
	v = CXfmVariable((XtArgVal)((CChart2D*)w)->GetData(), m_type);
	return(TRUE);
}

static CXfmXrtData RxrtData("xrtData", RUNTIME_CLASS(CChart2D));
static CXfmXrtData RxrtData2("xrtData2", RUNTIME_CLASS(CChart2D));

//////////////////////////////////////////
// String Properties:
// 	These resources are not converted
// 	by the Convert method, they are
// 	passed to XrtSetPropString which
// 	converts them at SetValues time.
//////////////////////////////////////////

class CXfmXrtStringProperty : public CXfmResource
{
public:
	CXfmXrtStringProperty(char* name, int property, char* type);
	virtual BOOL SetValue(CWnd* w, CXfmVariable v);
	virtual BOOL GetValue(CWnd* w, CXfmVariable& v);
protected:
	int m_property;
};

CXfmXrtStringProperty::CXfmXrtStringProperty(char* name, int property, char* type)
	: CXfmResource(name, RUNTIME_CLASS(CChart2D), type)
{
	m_property = property;
}

BOOL CXfmXrtStringProperty::SetValue(CWnd* w, CXfmVariable v)
{
	if(v.m_type == CXfmVariable::QString)
		XrtSetPropString(((CChart2D*)w)->m_hChart, m_property, (char*)v);
	else
		XrtSetValues(((CChart2D*)w)->m_hChart, m_property, (XtArgVal)v, 0);
	return(TRUE);
}

BOOL CXfmXrtStringProperty::GetValue(CWnd* w, CXfmVariable& v)
{
	XtArgVal val;
	XrtGetValues(((CChart2D*)w)->m_hChart, m_property, &val, 0);
	v = CXfmVariable(val, m_type);
	return(TRUE);
}

static CXfmXrtStringProperty RxrtHeaderFont("xrtHeaderFont", XRT_HEADER_FONT, "XrtFont");
static CXfmXrtStringProperty RxrtFooterFont("xrtFooterFont", XRT_FOOTER_FONT, "XrtFont");
static CXfmXrtStringProperty RxrtLegendFont("xrtLegendFont", XRT_LEGEND_FONT, "XrtFont");
static CXfmXrtStringProperty RxrtAxisFont("xrtAxisFont", XRT_AXIS_FONT, "XrtFont");
static CXfmXrtStringProperty RxrtOtherDataStyle("xrtOtherDataStyle", XRT_OTHER_DATA_STYLE, "XrtDataStyle");
static CXfmXrtStringProperty RxrtMarkerDataStyle("xrtMarkerDataStyle", XRT_MARKER_DATA_STYLE, "XrtDataStyle");
static CXfmXrtStringProperty RxrtXGridDataStyle("xrtXGridDataStyle", XRT_XGRID_DATA_STYLE, "XrtDataStyle");
static CXfmXrtStringProperty RxrtYGridDataStyle("xrtYGridDataStyle", XRT_YGRID_DATA_STYLE, "XrtDataStyle");
static CXfmXrtStringProperty RxrtDataStyles("xrtDataStyles", XRT_DATA_STYLES, "XrtDataStyles");
static CXfmXrtStringProperty RxrtDataStyles2("xrtDataStyles2", XRT_DATA_STYLES2, "XrtDataStyles");
static CXfmXrtStringProperty RxrtXLabels("xrtXLabels", XRT_XLABELS, "XrtLabels");
static CXfmXrtStringProperty RxrtYLabels("xrtYLabels", XRT_YLABELS, "XrtLabels");
static CXfmXrtStringProperty RxrtY2Labels("xrtY2Labels", XRT_Y2LABELS, "XrtLabels");
