//## 					begin pattern options
//## 						//## 
//## 						//## Set options as global variables.
//## 						//## 
//## 						set global XFMWIN_VERSION = VERSION_NUMBER
//## 						set global XFMWIN_REVISION = REVISION_NUMBER
//## 						set global XFMWIN_PATCHLEVEL = PATCH_LEVEL
//## 						set global XFMWIN_VERSIONSTRING = "VERSION_STRING"
//## 						set global XFONTS = `'
//## 						set global WFONTS = `'
//## 						set local I = 1
//## 						set local FONT = [ FONTS [ I ]
//## 						begin while [ FONT != "" ]
//## 							set local XFONT = [ upper (FONT left "=") ]
//## 							set local WFONT = [ FONT right "=" ]
//## 							set global XFONTS = XFONTS XFONT
//## 							set global WFONTS = WFONTS WFONT
//## 							set local I = [ I + 1 ]
//## 							set local FONT = [ FONTS [ I ]
//## 						end while
//## 						set global DEFAULT_FONT_FAMILY = DEFAULT_FONT_FAMILY
//## 						set global FONTS_HEIGHT_SIGN = FONTS_HEIGHT_SIGN
//## 						set global FONTS_OUT_PRECISION = FONTS_OUT_PRECISION
//## 						set global FONTS_CLIP_PRECISION = FONTS_CLIP_PRECISION
//## 						set global FONTS_QUALITY = FONTS_QUALITY
//## 						set global FONTS_PITCH_AND_FAMILY = FONTS_PITCH_AND_FAMILY
//## 						
//## 						set global WFONTWEIGHTS = FW_THIN FW_EXTRALIGHT FW_ULTRALIGHT FW_LIGHT FW_NORMAL FW_REGULAR FW_MEDIUM FW_SEMIBOLD FW_DEMIBOLD FW_BOLD FW_EXTRABOLD FW_ULTRABOLD FW_BLACK FW_HEAVY
//## 						set global WSTOCKFONTS = ANSI_FIXED_FONT ANSI_VAR_FONT DEVICE_DEFAULT_FONT OEM_FIXED_FONT SYSTEM_FONT SYSTEM_FIXED_FONT
//## 					end pattern options

//## 					begin pattern cmodule
//## 						//## 
//## 						//## Initialization of global variables:
//## 						//##  - module name:
//## 						//## 
//## 						set global MODNAME = INAME
//## 						set global TOPCLASS = CXfm`MODNAME'
//## 						//##  - include file names
//## 						//## 
//## 						set local LAST = MAINFILENAME
//## 						set local R = [ LAST right "/" ]
//## 						begin while [ R != "" ]
//## 							set local LAST = R
//## 							set local R = [ LAST right "/" ]
//## 						end while
//## 						begin if [ LAST == "" ]
//## 							set local LAST = MAINFILENAME
//## 						end if
//## 						begin if [ SHORTNAMES ]
//## 							set local APPINCLUDE = [ (lower (LAST left ".")) left 5 ]
//## 							set local XFMINCLUDE = [ (lower MODNAME) left 5 ]
//## 						ifelse
//## 							set local APPINCLUDE = [ LAST left "." ]
//## 							set local XFMINCLUDE = [ MODNAME ]
//## 						end if
//## 						//## 
//## 						//##  - Globals used in FACE scripts
//## 						//## 
//## 						set global BINARYOPS = `+' `-' `*' `/' `&&' `||' `<=' `>=' `<' `>' `==' `!=' 
//## 						set global UNARYOPS = `+' `-' `!'
//## 						set global DECLAREDGLOBALS = `'
//## 						set global REMOTEAVS = `'
//## 						set global REMOTEAVTYPES = `'
//## 						//## 
//## 						//##  - verbose mode ?
//## 						//## 
//## 						set global VERBOSE = 0
//## 						//## 
//## 						//## bitmap file counter.
//## 						//## 
//## 						set global BMPFILECOUNT = 1
//## 						//## 
//## /////////////////////////////////////////////////////////////////
//## /////////////////////////////////////////////////////////////////
//## //
//## // 	Implementation of class CXfm`MODNAME'.
//## //
//## /////////////////////////////////////////////////////////////////
//## /////////////////////////////////////////////////////////////////
//## 
//## #include "stdafx.h"
//## #define XFM_DEFAULT_FONT_FAMILY DEFAULT_FONT_FAMILY
//## #include <xfmwin.h>
//## #include "`APPINCLUDE'Res.h"
//## #include "`XFMINCLUDE'Xfm.h"
//## #include "`APPINCLUDE'App.h"
//## 
//## 					end pattern cmodule

//## 					begin define print
//## 						begin if [ VERBOSE ]
//## 							begin oneline
//## 								begin message
//## (PRINTMSG)...
//## 								end message
//## 							end oneline
//## 						end if
//## 					end define print

//## 					begin define get_font
//## 						call include MSVCfonts.pat
//## 					end define get_font

//## 					begin define get_title
//## 						begin if [ defined MFC_TITLE ]
//## 							set local TITLE = MFC_TITLE
//## 						ifelse
//## 							set local TITLE = NAME
//## 						end if
//## 					end define get_title

//## 					begin define set_attachments
//## 						begin if [ CLASS == CXfmMenuBar ]
//## 							stop pattern
//## 						end if
//## 						set local AVLIST = allvalues MFC_A_
//## 						set local I = 1
//## 						set local AVNAME = [ AVLIST [ I ]
//## 						begin while [ AVNAME != "" ]
//## 							set local RESNAME = [ (AVNAME right _) right _ ]
//## 							set local RESVAL = [ value AVNAME ]
//## 							begin if [ (AVNAME right 6) == "Widget" ]
//## 	FmWSetActiveValue((CWnd*)MEMBERNAME, "RESNAME", (CXfmVariable)FmWGetWidget((CWnd*)MEMBERNAME, 1, "RESVAL"));
//## 							ifelse
//## 	FmWSetActiveValue((CWnd*)MEMBERNAME, "RESNAME", (CXfmVariable)RESVAL);
//## 							end if
//## 							set local I = [ I + 1 ]
//## 							set local AVNAME = [ AVLIST [ I ]
//## 						end while
//## 					end define set_attachments

//## 					begin define set_resources
//## 						set local AVLIST = allvalues MFC_R_
//## 						set local I = 1
//## 						set local AVNAME = [ AVLIST [ I ]
//## 						begin while [ AVNAME != "" ]
//## 							set local RESNAME = [ (AVNAME right _) right _ ]
//## 							set local RESVAL = [ value AVNAME ]
//## 							begin if [ RESNAME right 8 == "Callback" ]
//## 	FmWSetActiveValue((CWnd*)MEMBERNAME, "RESNAME", CXfmVariable(new CXfmCallback((FmCallbackProc)(&CXfm`MODNAME'::`NAME'_`INDEX'_`RESVAL'), this)));
//## 							elseif [ RESVAL left 1 == `\"' ]
//## 								set local _V = [ cstring RESVAL ]
//## 	FmWSetValue((CWnd*)MEMBERNAME, "RESNAME", CXfmVariable(_V));
//## 							ifelse
//## 	FmWSetValue((CWnd*)MEMBERNAME, "RESNAME", CXfmVariable(RESVAL));
//## 							end if
//## 							set local I = [ I + 1 ]
//## 							set local AVNAME = [ AVLIST [ I ]
//## 						end while
//## 					end define set_resources

//## 					begin define set_post_resources
//## 						set local AVLIST = allvalues MFC_PR_
//## 						set local I = 1
//## 						set local AVNAME = [ AVLIST [ I ]
//## 						begin while [ AVNAME != "" ]
//## 							set local RESNAME = [ (AVNAME right _) right _ ]
//## 							set local RESVAL = [ value AVNAME ]
//## 							begin if [ RESNAME right 8 == "Callback" ]
//## 	FmWSetActiveValue((CWnd*)MEMBERNAME, "RESNAME", CXfmVariable(new CXfmCallback((FmCallbackProc)(&CXfm`MODNAME'::`NAME'_`INDEX'_`RESVAL'), this)));
//## 							elseif [ RESVAL left 1 == `\"' ]
//## 								set local _V = [ cstring RESVAL ]
//## 	FmWSetValue((CWnd*)MEMBERNAME, "RESNAME", CXfmVariable(_V));
//## 							ifelse
//## 	FmWSetValue((CWnd*)MEMBERNAME, "RESNAME", CXfmVariable(RESVAL));
//## 							end if
//## 							set local I = [ I + 1 ]
//## 							set local AVNAME = [ AVLIST [ I ]
//## 						end while
//## 					end define set_post_resources

//## 					begin define set_callbacks
//## 						set local AVLIST = allvalues MFC_C_
//## 						set local I = 1
//## 						set local AVNAME = [ AVLIST [ I ]
//## 						begin while [ AVNAME != "" ]
//## 							set local RESNAME = [ (AVNAME right _) right _ ]
//## 							set local RESVAL = [ value AVNAME ]
//## 	FmWSetValue((CWnd*)MEMBERNAME, "RESNAME", CXfmVariable(new CXfmCallback((FmCallbackProc)(&CXfm`MODNAME'::`NAME'_`INDEX'_`RESVAL'), this)));
//## 							set local I = [ I + 1 ]
//## 							set local AVNAME = [ AVLIST [ I ]
//## 						end while
//## 					end define set_callbacks

//## 					begin define create_avs
//## 						begin if [ defined GETPROC ]
//## 							set local GETSCRIPT = `__NAME'_`__INDEX'_get_`NAME'
//## 							set local GETSCRIPT = &CXfm`MODNAME'::GETSCRIPT
//## 							set local GETSCRIPT = [ GETSCRIPT ]
//## 						ifelse
//## 							set local GETSCRIPT = 0
//## 						end if
//## 						begin if [ defined SETPROC ]
//## 							set local SETSCRIPT = `__NAME'_`__INDEX'_set_`NAME'
//## 							set local SETSCRIPT = &CXfm`MODNAME'::SETSCRIPT
//## 							set local SETSCRIPT = [ SETSCRIPT ]
//## 						ifelse
//## 							set local SETSCRIPT = 0
//## 						end if
//## 						begin if [ ! defined TYPE ]
//## 							set local TYP = 0
//## 						ifelse
//## 							set local TYP = "TYPE"
//## 						end if
//## 						begin if [ ! defined STORAGE ]
//## 							set local STORAG = 0
//## 						ifelse
//## 							set local STORAG = STORAGE
//## 						end if
//## 						begin if [ ! defined SCOPE ]
//## 							set local SCOP = 0
//## 						ifelse
//## 							set local SCOP = SCOPE
//## 						end if
//## 						begin if [ ! defined IMMEDIATE ]
//## 							set local IMMEDIAT = 0
//## 						ifelse
//## 							set local IMMEDIAT = IMMEDIATE
//## 						end if
//## 						begin if [ ! defined AUTOMATIC ]
//## 							set local AUTOMATI = 0
//## 						ifelse
//## 							set local AUTOMATI = AUTOMATIC
//## 						end if
//## 						begin if [ ! defined FLAGS ]
//## 							set local FLAG = 0
//## 						ifelse
//## 							set local FLAG = FLAGS
//## 						end if
//## 	FmCreateValue("NAME", (FmActiveValueProc)GETSCRIPT, (FmActiveValueProc)SETSCRIPT, TYP, STORAG, SCOP, IMMEDIAT, AUTOMATI, FLAG, __MEMBERNAME, this, 0, 0);
//## 						begin if [ STORAG == 0 ]
//## 							set global REMOTEAVS = REMOTEAVS NAME
//## 							set local TYP = [ TYP ]
//## 							set global REMOTEAVTYPES = REMOTEAVTYPES TYP
//## 						end if
//## 					end define create_avs

//## 					begin define init_avs
//## 						begin if [ DEFTYPE == String ]
//## 							begin if [ TYPE == String || TYPE == XmString ]
//## 								set local INITVAL = "DEFVALUE"
//## 								set local INITTYPE = String
//## 							elseif [ TYPE == Boolean ]
//## 								begin if [ DEFVALUE == True || DEFVALUE == true || DEFVALUE == TRUE ]
//## 									set local INITVAL = TRUE
//## 								ifelse
//## 									set local INITVAL = FALSE
//## 								end if
//## 								set local INITTYPE = Int
//## 							elseif [ defined INITIALVALUE ]
//## 								set local INITVAL = INITIALVALUE
//## 								set local INITTYPE = TYPE
//## 							ifelse
//## 								set local INITVAL = "DEFVALUE"
//## 								set local INITTYPE = String
//## 							end if
//## 						end if
//## 						begin if [ defined INITVAL ]
//## 	FmWInitValue(__MEMBERNAME, "NAME", CXfmVariable((XtArgVal)INITVAL, "INITTYPE"));
//## 						end if
//## 					end define init_avs

//## 					begin define create
//## 						begin if [ DOBASICPANE == true ]
//## 	CXfmPane* `MEMBERNAME'_pane = new CXfmPane();
//## 	`MEMBERNAME'_pane->Create(0, "`MEMBERNAME'_pane", WS_CHILD|WS_VISIBLE, CRect(X, Y, R, B), __MEMBERNAME, 1234);
//## 	`MEMBERNAME'_pane->SetChild(MEMBERNAME);
//## 						ifelse
//## 							begin if [ defined MFC_SPLITTER_ROW ]
//## 	__MEMBERNAME->CreateView(MFC_SPLITTER_ROW, 0, RUNTIME_CLASS(CXfm`NAME'`INDEX'Pane), CSize(MFC_W, MFC_H), 0);
//## 	CXfm`NAME'`INDEX'Pane* `MEMBERNAME'_pane = (CXfm`NAME'`INDEX'Pane*)__MEMBERNAME->GetPane(MFC_SPLITTER_ROW, 0);
//## 	`MEMBERNAME'_pane->SetChild(MEMBERNAME);
//## 							end if
//## 							begin if [ MFC_SCROLLED_CHILD == true ]
//## 	CXfm`NAME'`INDEX'Pane* `MEMBERNAME'_pane = new CXfm`NAME'`INDEX'Pane();
//## 	`MEMBERNAME'_pane->Create(0, "`MEMBERNAME'_pane", WS_CHILD|WS_VISIBLE, CRect(X, Y, R, B), __MEMBERNAME, 1234);
//## 	`MEMBERNAME'_pane->SetChild(MEMBERNAME);
//## 							end if
//## 						end if
//## 						begin if [ APPSHELL == 1 || SUPERCLASS == CFrameWnd]
//## 							begin if [ defined MFC_TITLE ]
//## 								set local TITLE = MFC_TITLE
//## 							ifelse
//## 								set local TITLE = NAME
//## 							end if
//## 	m_bAutoMenuEnable = False;
//## 							begin if [ APPSHELL == 1 ]
//## 	MEMBERNAME->`SUPCREATE'Create(0, "TITLE");
//## 							ifelse
//## 	MEMBERNAME->`SUPCREATE'Create(0, "TITLE", WS_OVERLAPPEDWINDOW|WS_POPUP, CFrameWnd::rectDefault, PARENTWND);
//## 							end if
//## 	MEMBERNAME->LoadAccelTable(RID);
//## 	::SetClassLong(MEMBERNAME->m_hWnd, GCL_HICON, (LONG)(AfxGetApp()->LoadIcon(RID)));
//## 	CRect `MEMBERNAME'_r(X, Y, R, B);
//## 	AdjustWindowRect(&`MEMBERNAME'_r, MEMBERNAME->GetStyle(), (MEMBERNAME->GetMenu() ? TRUE : FALSE));
//## 	if(`MEMBERNAME'_r.left < 0){
//## 		`MEMBERNAME'_r.right -= `MEMBERNAME'_r.left;
//## 		`MEMBERNAME'_r.left = 0;
//## 	}
//## 	if(`MEMBERNAME'_r.top < 0){
//## 		`MEMBERNAME'_r.bottom -= `MEMBERNAME'_r.top;
//## 		`MEMBERNAME'_r.top = 0;
//## 	}
//## 	MEMBERNAME->SetWindowPos(&wndTop, `MEMBERNAME'_r.left, `MEMBERNAME'_r.top, `MEMBERNAME'_r.Width(), `MEMBERNAME'_r.Height(), SWP_NOZORDER);
//## 						elseif   [ POPUP == 1 ]
//## 							begin if [ SUPERCLASS != CXfmFileDialog ]
//## 	MEMBERNAME->`SUPCREATE'Create(RID, PARENTWND);
//## 	CRect `MEMBERNAME'_r(X, Y, R, B);
//## 	AdjustWindowRect(&`MEMBERNAME'_r, MEMBERNAME->GetStyle(), (MEMBERNAME->GetMenu() ? TRUE : FALSE));
//## 	if(`MEMBERNAME'_r.left < 0){
//## 		`MEMBERNAME'_r.right -= `MEMBERNAME'_r.left;
//## 		`MEMBERNAME'_r.left = 0;
//## 	}
//## 	if(`MEMBERNAME'_r.top < 0){
//## 		`MEMBERNAME'_r.bottom -= `MEMBERNAME'_r.top;
//## 		`MEMBERNAME'_r.top = 0;
//## 	}
//## 	MEMBERNAME->SetWindowPos(&wndTop, `MEMBERNAME'_r.left, `MEMBERNAME'_r.top, `MEMBERNAME'_r.Width(), `MEMBERNAME'_r.Height(), SWP_NOZORDER);
//## 							end if
//## 						elseif   [ CLASS == CXfmMenuBar ]
//## 	CMenu* `MEMBERNAME'_menu = new CMenu();
//## 	`MEMBERNAME'_menu->LoadMenu(TOPRID);
//## 							begin if [ SHELLWND == "" ]
//## 	CWnd* `MEMBERNAME'_shell;
//## 	for(`MEMBERNAME'_shell = PARENTWND; `MEMBERNAME'_shell; `MEMBERNAME'_shell = `MEMBERNAME'_shell->GetParent())
//## 		if(`MEMBERNAME'_shell->IsKindOf(RUNTIME_CLASS(CFrameWnd))
//## 		|| `MEMBERNAME'_shell->IsKindOf(RUNTIME_CLASS(CDialog)))
//## 			break;
//## 	if(`MEMBERNAME'_shell)
//## 		`MEMBERNAME'_shell->SetMenu(`MEMBERNAME'_menu);
//## 							ifelse
//## 	SHELLWND->SetMenu(`MEMBERNAME'_menu);
//## 							end if
//## 	MEMBERNAME->`SUPCREATE'Create(`MEMBERNAME'_menu, PARENTWND);
//## 							set local PARENTMENU = MEMBERNAME
//## 							set local MENUPOSITION = 0
//## 						elseif   [ CLASS == "CXfmPulldownMenu" ]
//## 							begin if [ defined __PARENTMENU ]
//## 	MEMBERNAME->`SUPCREATE'Create(__PARENTMENU, __MENUPOSITION);
//## 							ifelse
//## 								begin message
//## XFaceMaker/Win error: pulldown menu NAME has no parent:
//## 			maybe it is a submenu of an option menu ?
//## 			(XFaceMaker/Win cannot translate that -- sorry)
//## 								end message
//## 								stop all
//## 							end if
//## 							set local PARENTMENU = MEMBERNAME
//## 							set local __LASTPULLDOWNMENU = MEMBERNAME
//## 							set local MENUPOSITION = 0
//## 						elseif   [ CLASS == CXfmPopupMenu ]
//## 	CMenu* `MEMBERNAME'_menu = new CMenu();
//## 	`MEMBERNAME'_menu->LoadMenu(RID);
//## 	CXfmMenuBar* `MEMBERNAME'_menubar = new CXfmMenuBar();
//## 	`MEMBERNAME'_menubar->Create(`MEMBERNAME'_menu, PARENTWND);
//## 	MEMBERNAME->`SUPCREATE'Create(`MEMBERNAME'_menubar, 0, __MEMBERNAME);
//## 							set local PARENTMENU = MEMBERNAME
//## 							set local __LASTPULLDOWNMENU = MEMBERNAME
//## 							set local MENUPOSITION = 0
//## 						elseif   [ CLASS == "CXfmMenuItem" ]
//## 	MEMBERNAME->`SUPCREATE'Create(__PARENTMENU, __MENUPOSITION);
//## 							set local __MENUPOSITION = [ __MENUPOSITION + 1 ]
//## 						elseif   [ CLASS == "CXfmMenuCascade" ]
//## 							begin if [ defined __LASTPULLDOWNMENU && __LASTPULLDOWNMENU != "" ]
//## 								set local PULLDOWN = __LASTPULLDOWNMENU
//## 								set local __LASTPULLDOWNMENU = `'
//## 							ifelse
//## 								set local PULLDOWN = 0
//## 							end if
//## 	MEMBERNAME->`SUPCREATE'Create(__PARENTMENU, __MENUPOSITION, PULLDOWN);
//## 							set local __LASTPULLDOWNMENU = `'
//## 							set local __MENUPOSITION = [ __MENUPOSITION + 1 ]
//## 						elseif   [ CLASS == CSplitterWnd ]
//## 	MEMBERNAME->`SUPCREATE'CreateStatic(PARENTWND, MFC_SPLITTER_ROWS, MFC_SPLITTER_COLUMNS);
//## 						elseif   [ CLASS == CXfmWidget ]
//## 	MEMBERNAME->`SUPCREATE'Create(PARENTWND);
//## 							begin if [ MFC_ISCOMBOBOXITEM == true ]
//## 								begin if [ MFC_CAPTION == "_xfm_win_empty_caption_" ]
//## 									set local CAPTION = ""
//## 								ifelse
//## 									set local CAPTION = [ cstring MFC_CAPTION ]
//## 								end if
//## 	FmWSetActiveValue(MEMBERNAME, "labelString", (CXfmVariable)CAPTION);
//## 							end if
//## 							begin if [ defined MFC_PACKING ]
//## 	FmWSetActiveValue(MEMBERNAME, "packing", (CXfmVariable)MFC_PACKING);
//## 	FmWSetActiveValue(MEMBERNAME, "numColumns", (CXfmVariable)MFC_NUM_COLUMNS);
//## 	FmWSetActiveValue(MEMBERNAME, "orientation", (CXfmVariable)MFC_ORIENTATION);
//## 	FmWSetActiveValue(MEMBERNAME, "adjustLast", (CXfmVariable)MFC_ADJUST_LAST);
//## 							end if
//## 						elseif   [ MAINCLASS == 1 && SUPERCLASS == CXfmWidget ]
//## 							//## Nothing...
//## 						ifelse
//## 							//## Windows controls
//## 							//## 
//## 							begin if [ defined MFC_CAPTION ]
//## 								begin if [ MFC_CAPTION == "_xfm_win_empty_caption_" ]
//## 									set local CAPTION = ""
//## 								ifelse
//## 									set local CAPTION = [ cstring MFC_CAPTION ]
//## 								end if
//## 							end if
//## 							set local STYLES = WS_CHILD
//## 							begin if [ MAPPED == 1 ]
//## 								set local STYLES = STYLES|WS_VISIBLE
//## 							end if
//## 							set local AVLIST = allvalues MFC_S_
//## 							set local I = 1
//## 							set local AVNAME = [ AVLIST [ I ]
//## 							begin while [ AVNAME != "" ]
//## 								begin if [ value AVNAME == true ]
//## 									set local STYLEKW = [ AVNAME right ((length AVNAME) - 6) ]
//## 									begin if [ STYLES == 0 ]
//## 										set local STYLES = STYLEKW
//## 									ifelse
//## 										set local STYLES = STYLES|STYLEKW
//## 									end if
//## 									begin if [ STYLEKW == BS_DEFPUSHBUTTON ]
//## 										set local ISDEFPUSHBUTTON = true
//## 									end if
//## 								end if
//## 								set local I = [ I + 1 ]
//## 								set local AVNAME = [ AVLIST [ I ]
//## 							end while
//## 							begin if [ defined CAPTION ]
//## 	MEMBERNAME->`SUPCREATE'Create(CAPTION, STYLES, CRect(X, Y, R, B), PARENTWND, RID);
//## 							ifelse
//## 	MEMBERNAME->`SUPCREATE'Create(STYLES, CRect(X, Y, R, B), PARENTWND, RID);
//## 							end if
//## 							begin if [ ISDIALOG == true && ISDEFPUSHBUTTON == true ]
//## 	SetDefID(RID);
//## 							end if
//## 							begin if [ CLASS == CScrollBar ]
//## 	MEMBERNAME->SetScrollRange(MFC_MINIMUM, MFC_MAXIMUM, FALSE);
//## 								begin if [ MFC_POS > 0 ]
//## 	MEMBERNAME->SetScrollPos(MFC_POS, FALSE);
//## 								end if
//## 							end if
//## 							begin if [ FONTVARNAME != "" ]
//## 								begin if [ ! ( FONTVARNAME { CREATEDFONTS ) ]
//## 	FONTVARNAME = new CFont();
//## 									begin if [ FONTFAMILY { WSTOCKFONTS ]
//## 	FONTVARNAME->CreateStockObject(FONTFAMILY);
//## 									ifelse
//## 	FONTVARNAME->CreateFont(`FONTS_HEIGHT_SIGN'FONTSIZE, 0, 0, 0, FONTWEIGHT, FONTITALIC,
//## 		0, 0, DEFAULT_CHARSET, FONTS_OUT_PRECISION, FONTS_CLIP_PRECISION,
//## 		FONTS_QUALITY, FONTS_PITCH_AND_FAMILY,
//## 		FmWCheckFont(MEMBERNAME, "FONTFAMILY", XFM_DEFAULT_FONT_FAMILY));
//## 									end if
//## 									set global CREATEDFONTS = CREATEDFONTS FONTVARNAME
//## 								end if
//## 	MEMBERNAME->SetFont(FONTVARNAME, FALSE);
//## 							end if
//## 							begin if [ MFC_CENTERTEXT == true ]
//## 	FmWAdjustText(MEMBERNAME);
//## 							end if
//## 						end if
//## 					end define create

//## 					begin define set_translations
//## 						begin if [ defined MFC_TRANSLATIONS ]
//## 							set local TT = MFC_TRANSLATIONS
//## 							begin while [ TT != "" ]
//## 								set local T = [ TT left "|" ]
//## 								set local TT = [ TT right "|" ]
//## 								set local MES = [ T left "," ]
//## 								set local T = [ T right "," ]
//## 								set local MOD = [ T left "," ]
//## 								set local T = [ T right "," ]
//## 								set local DET = [ T left "," ]
//## 								set local T = [ T right "," ]
//## 								set local FCT = [ T left "," ]
//## 								set local T = [ T right "," ]
//## 								set local AUG = [ T left "," ]
//## 								set local T = [ T right "," ]
//## 								begin if [ FCT left 2 == "::" ]
//## 									set local MEM = [ FCT right "::" ]
//## 								ifelse
//## 									set local MEM = `NAME'_`INDEX'_`FCT'
//## 								end if
//## 	FmWAddTranslation(this, TRANSWND, MEMBERNAME, MES, MOD, DET, (FmActionProc)(&`TOPCLASS'::`MEM'), AUG);
//## 							end while
//## 						end if
//## 					end define set_translations

//## 					begin define children
//## 	//
//## 	// Creation of widget NAME
//## 	//
//## 						begin if [ MAINCLASS != 1 ]
//## 							begin if [ SUPERCLASS == CXfmFileDialog ]
//## 	MEMBERNAME = new CLASS(PARENTWND);
//## 							elseif   [ CLASS == CButton ]
//## 	MEMBERNAME = new CXfmButton();
//## 							ifelse
//## 	MEMBERNAME = new CLASS();
//## 							end if
//## 						end if
//## 						begin if [ CLASS == CXfmWidget || CLASS == CXfmMenuBar || CLASS == CComboBox ]
//## 	FmWAddWidget(MEMBERNAME, __MEMBERNAME, "NAME", CRect(X, Y, R, B));
//## 						elseif [ MAINCLASS == 1 ]
//## 	FmWAddWidget(MEMBERNAME, parent, "NAME");
//## 						ifelse
//## 	FmWAddWidget(MEMBERNAME, __MEMBERNAME, "NAME");
//## 						end if
//## 						call define create
//## 						call define set_translations
//## 						call define set_resources
//## 						call define set_callbacks
//## 						call pattern create_avs active_value
//## 						begin if [ POPUP == 1 ]
//## 							set local OLDTOPRID = TOPRID
//## 							set global TOPRID = RID
//## 						end if
//## 						call pattern children widget
//## 						begin if [ CLASS == CXfmWidget && (MAPPED != 1 || MENUPULLDOWN == 1) ]
//## 	FmHideWidget(MEMBERNAME);
//## 						end if
//## 						call pattern set_attachments widget
//## 						call define set_post_resources
//## 						begin if [ POPUP == 1 ]
//## 							set global TOPRID = OLDTOPRID
//## 						end if
//## 						call pattern init_avs active_value
//## 						begin if [ defined CREATEPROC ]
//## 	CREATEPROC(MEMBERNAME, (XtPointer)0);
//## 						end if
//## 						begin if [ POPUP == 1 && MAPPED == 1 && MAINCLASS != 1 ]
//## 	FmShowWidget(MEMBERNAME);
//## 						end if
//## 						begin if [ (MAINCLASS == 1 || POPUP == 1) && SUPERCLASS != CXfmFileDialog ]
//## 	FmWDoLayout(MEMBERNAME);
//## 						elseif [ CLASS == CSplitterWnd ]
//## 	MEMBERNAME->SetWindowPos(&wndTop, X, Y, W, H, SWP_NOZORDER);
//## 						elseif [ CLASS == CXfmScrolledWnd ]
//## 	MEMBERNAME->SetSize();
//## 						end if
//## 					end define children

//## 					begin define map_afx_handlers
//## 						//## Windows message handlers are identified by
//## 						//## attributes named MFC_N_<message-name>, for
//## 						//## example: MFC_N_BN_CLICKED. We list all the
//## 						//## attributes of this form using the `allvalues'
//## 						//## operator.
//## 						//##  The value of the attribute is the name of the
//## 						//## corresponding Motif callback if one is defined,
//## 						//## otherwise the value is empty.
//## 						//## 
//## 						set local AVLIST = allvalues MFC_N_
//## 						set local I = 1
//## 						set local AVNAME = [ AVLIST [ I ]
//## 						begin while [ AVNAME != "" ]
//## 							//## Is there a callback defined for this
//## 							//## message ?
//## 							//## 
//## 							begin if [ value AVNAME != "" ]
//## 								set local MSGNAME = [ AVNAME right "MFC_N_" ]
//## 								set local HNAME = MSGNAME
//## 								begin if [ (HNAME left 3) != "WM_" ]
//## 									set local HNAME = `HNAME'_`NAME'_`INDEX'
//## 									set local HNAME = [ HNAME ]
//## 								end if
//## 								begin if [ ! (HNAME { HANDLERS) ]
//## 									set global HANDLERS = HANDLERS HNAME
//## 									begin if [ HNAME left 3 == "WM_" ]
//## 										set local HMAP = ON_`HNAME'()
//## 									ifelse
//## 										begin if [ (value AVNAME) left 1 == "#" ]
//## 											//## There is a prototype specified: use it.
//## 											//## 
//## 											set local PROTOTYPE = [ (value AVNAME) right "#" ]
//## 											set local PROTOTYPE = [ PROTOTYPE left "(" ]
//## 											set local HPROTO = [ PROTOTYPE right "::" ]
//## 										ifelse
//## 											set local HPROTO = [ (AVNAME right "MFC_N_") right "_" ]
//## 											set local HPROTOL = [ upper (HPROTO left 1) ]
//## 											set local HPROTOR = [ lower (HPROTO right ((length HPROTO) - 1)) ]
//## 											set local HPROTO = On`HPROTOL'`HPROTOR'_`NAME'_`INDEX'
//## 										end if
//## 										begin if [ MFC_ISMENUITEM ]
//## 											set local MACRONAME = COMMAND
//## 										ifelse
//## 											set local MACRONAME = MSGNAME
//## 										end if
//## 										set local HMAP = ON_`MACRONAME'(RID`, 'HPROTO)
//## 									end if
//## 									set local HMAP = [ HMAP ]
//## 									set global HANDLERMAPS = HANDLERMAPS HMAP
//## 								end if
//## 							end if
//## 							set local I = [ I + 1 ]
//## 							set local AVNAME = [ AVLIST [ I ]
//## 						end while
//## 						//## For auto-unmanage buttons, define a click handler
//## 						//## if there is not already one.
//## 						//## 
//## 						begin if [ MFC_AUTO_UNMANAGE == true && !(defined(MFC_N_BN_CLICKED) && MFC_N_BN_CLICKED != "") ]
//## 							set local HNAME = BN_CLICKED_`NAME'_`INDEX'
//## 							set local HNAME = [ HNAME ]
//## 							begin if [ ! (HNAME { HANDLERS) ]
//## 								set global HANDLERS = HANDLERS HNAME
//## 								set local HMAP = ON_BN_CLICKED(RID`, 'OnClicked_`NAME'_`INDEX')
//## 								set local HMAP = [ HMAP ]
//## 								set global HANDLERMAPS = HANDLERMAPS HMAP
//## 							end if
//## 						end if
//## 						call pattern map_afx_handlers widget [ ! defined SUBCLASS ]
//## 					end define map_afx_handlers

//## 					begin define substitute_code_trans
//## 						set local _NEWCODE = `'
//## 						begin while [ _SUBSTCODE != "" ]
//## 							set local _C =  [ _SUBSTCODE left "%" ]
//## 							set local _NEWCODE = `_NEWCODE'`_C'
//## 							set local _SUBSTCODE = [ _SUBSTCODE right "%" ]
//## 							begin if [ _SUBSTCODE left 4 == "self" ]
//## 								set local _C =  [ _SUBSTCODE right "self" ]
//## 								set local _SUBSTCODE = `MEMBERNAME'`_C'
//## 							end if
//## 						end while
//## 						set local _SUBSTCODE = _NEWCODE
//## 					end define substitute_code_trans

//## 	//## Dans Drawn le bouton ne s'enfonce pas
//## 	//## 
//## 					begin define translations_handlers
//## 						set local AVLIST = allvalues MFC_TRANS_
//## 						set local I = 1
//## 						set local AVNAME = [ AVLIST [ I ]
//## 						begin while [ AVNAME != "" ]
//## 							begin if [ value AVNAME != "" ]
//## 								set local HNAME = [ (AVNAME right "_") right "_" ]
//## 								set local CALLBACKS = [ value AVNAME ]
//## 								begin if [ ! (HNAME { HANDLERS) ]
//## 									set global HANDLERS = HANDLERS HNAME
//## 									begin if [ CALLBACKS left 1 == "#" ]
//## 										//## There is a prototype specified: use it.
//## 										//## 
//## 										set local PROTOTYPE = [ CALLBACKS right "#" ]
//## 										set local CALLBACKS = [ PROTOTYPE right "#" ]
//## 										set local PROTOTYPE = [ PROTOTYPE left "#" ]
//## 										set local PROTOL = [ PROTOTYPE left "::" ]
//## 										set local PROTOR = [ PROTOTYPE right "::" ]
//## 										set local HPROTO = `PROTOL'PARENTCLASS::`PROTOR'
//## 									end if
//## 									set local HPROTO = [ HPROTO ]
//## 									set global HANDLERPROTOS = HANDLERPROTOS HPROTO
//## 									set local HCODEVAR = `HNAME'_CODE
//## 									seti global HCODEVAR = `'
//## 								elseif [ CALLBACKS left 1 == "#" ]
//## 									set local CALLBACKS = [ (CALLBACKS right "#") right "#" ]
//## 								end if
//## 								begin if [ CALLBACKS left 1 == "$" ]
//## 									set local _SUBSTCODE = [ CALLBACKS right "$" ]
//## 									set local CALLBACKS = [ _SUBSTCODE right "$" ]
//## 									set local _SUBSTCODE = [ _SUBSTCODE left "$" ]
//## 									call define substitute_code_trans
//## 									set local HCODEVAR = `HNAME'_CODE
//## 									set local OLDCODE = [ value HCODEVAR ]
//## 									seti global HCODEVAR = `OLDCODE'`	'_SUBSTCODE\n
//## 								end if
//## 								begin if [ CALLBACKS left 1 == "|" ]
//## 									set local CALLBACKS = [ CALLBACKS right "|" ]
//## 								end if
//## 								begin if [ CALLBACKS != none ]
//## 									begin while [ CALLBACKS != "" ]
//## 										set local CALLBACK = [ CALLBACKS left "|" ]
//## 										set local CALLBACKS = [ CALLBACKS right "|" ]
//## 										set local CONDITION = [ CALLBACK left "?" ]
//## 										begin if [ CONDITION == CALLBACK ]
//## 											set local CONDITION = `'
//## 										ifelse
//## 											set local CALLBACK = [ CALLBACK right "?" ]
//## 										end if
//## 										begin if [ CONDITION != "" ]
//## 											set local _SUBSTCODE = CONDITION
//## 											call define substitute_code_trans
//## 											set local CONDITION = _SUBSTCODE
//## 											set local HCODEVAR = `HNAME'_CODE
//## 											set local OLDCODE = [ value HCODEVAR ]
//## 											seti global HCODEVAR = `OLDCODE'`	'if(CONDITION){\n
//## 											set local INDENT = `	'
//## 										ifelse
//## 											set local INDENT = `'
//## 										end if
//## 										begin if [ CALLBACK left 1 == "$" ]
//## 											set local _SUBSTCODE = [ CALLBACK right "$" ]
//## 											set local CALLBACK = [ _SUBSTCODE right "$" ]
//## 											set local _SUBSTCODE = [ _SUBSTCODE left "$" ]
//## 											call define substitute_code_trans
//## 											set local _PRECALLBACK = _SUBSTCODE
//## 										ifelse
//## 											set local _PRECALLBACK = `'
//## 										end if
//## 										begin if [ _PRECALLBACK != "" ]
//## 											set local HCODEVAR = `HNAME'_CODE
//## 											set local OLDCODE = [ value HCODEVAR ]
//## 											seti global HCODEVAR = `OLDCODE'`	'`INDENT'_PRECALLBACK\n
//## 										end if
//## 										begin if [ CALLBACK != none ]
//## 											set local SCRIPTNAME = `NAME'_`INDEX'_`CALLBACK'
//## 											set local SCRIPTNAME = [ SCRIPTNAME ]
//## 											set local HCODEVAR = `HNAME'_CODE
//## 											set local OLDCODE = [ value HCODEVAR ]
//## 											seti global HCODEVAR = `OLDCODE'`	'`INDENT'`SCRIPTNAME'(`MEMBERNAME'`, call_data');\n
//## 										end if
//## 										begin if [ CONDITION != "" ]
//## 											set local HCODEVAR = `HNAME'_CODE
//## 											set local OLDCODE = [ value HCODEVAR ]
//## 											seti global HCODEVAR = `OLDCODE'`	'}\n
//## 										end if
//## 									end while
//## 								end if
//## 							end if
//## 							set local I = [ I + 1 ]
//## 							set local AVNAME = [ AVLIST [ I ]
//## 						end while
//## 						call pattern translations_handlers widget
//## 					end define translations_handlers

//## 					begin define substitute_code
//## 						set local _NEWCODE = `'
//## 						begin while [ _SUBSTCODE != "" ]
//## 							set local _C =  [ _SUBSTCODE left "%" ]
//## 							set local _NEWCODE = `_NEWCODE'`_C'
//## 							set local _SUBSTCODE = [ _SUBSTCODE right "%" ]
//## 							begin if [ _SUBSTCODE left 4 == "self" ]
//## 								set local _C =  [ _SUBSTCODE right "self" ]
//## 								set local _SUBSTCODE = `PARENT'`MEMBERNAME'`_C'
//## 							elseif [ _SUBSTCODE left 6 == "parent" ]
//## 								set local _C =  [ _SUBSTCODE right "parent" ]
//## 								set local _SUBSTCODE = `PARENT'`__MEMBERNAME'`_C'
//## 							elseif [ _SUBSTCODE left 4 == "name" ]
//## 								set local _C =  [ _SUBSTCODE right "name" ]
//## 								set local _SUBSTCODE = `NAME'_`INDEX'`_C'
//## 							end if
//## 						end while
//## 						set local _SUBSTCODE = _NEWCODE
//## 					end define substitute_code
//## 					
//## 					begin define handlers
//## 						set local AVLIST = allvalues MFC_N_ MFC_ON_
//## 						set local I = 1
//## 						set local AVNAME = [ AVLIST [ I ]
//## 						begin while [ AVNAME != "" ]
//## 							begin if [ value AVNAME != "" ]
//## 								set local HNAME = [ (AVNAME right "_") right "_" ]
//## 								begin if [ (HNAME left 3) != "WM_" ]
//## 									set local HNAME = `HNAME'_`NAME'_`INDEX'
//## 									set local HNAME = [ HNAME ]
//## 								end if
//## 								set local CALLBACKS = [ value AVNAME ]
//## 								begin if [ ! (HNAME { HANDLERS) ]
//## 									set global HANDLERS = HANDLERS HNAME
//## 									begin if [ CALLBACKS left 1 == "#" ]
//## 										//## There is a prototype specified: use it.
//## 										//## 
//## 										set local PROTOTYPE = [ CALLBACKS right "#" ]
//## 										set local CALLBACKS = [ PROTOTYPE right "#" ]
//## 										set local PROTOTYPE = [ PROTOTYPE left "#" ]
//## 										set local PROTOL = [ PROTOTYPE left "::" ]
//## 										set local PROTOR = [ PROTOTYPE right "::" ]
//## 										set local HPROTO = `PROTOL'PARENTCLASS::`PROTOR'
//## 									ifelse
//## 										//## It's a MFC_N_ message type.
//## 										//## MFC_N_BN_CLICKED become
//## 										//## OnClicked....
//## 										//## 
//## 										set local HPROTO = [ (AVNAME right "MFC_N_") right "_" ]
//## 										set local HPROTOL = [ upper (HPROTO left 1) ]
//## 										set local HPROTOR = [ lower (HPROTO right ((length HPROTO) - 1)) ]
//## 										set local HPROTO = `void '`PARENTCLASS'::On`HPROTOL'`HPROTOR'_`NAME'_`INDEX'()
//## 									end if
//## 									set local HPROTO = [ HPROTO ]
//## 									set global HANDLERPROTOS = HANDLERPROTOS HPROTO
//## 									set local HCODEVAR = `HNAME'_CODE
//## 									seti global HCODEVAR = `'
//## 								elseif [ CALLBACKS left 1 == "#" ]
//## 									set local CALLBACKS = [ (CALLBACKS right "#") right "#" ]
//## 								end if
//## 								begin if [ CALLBACKS left 1 == "$" ]
//## 									set local _SUBSTCODE = [ CALLBACKS right "$" ]
//## 									set local CALLBACKS = [ _SUBSTCODE right "$" ]
//## 									set local _SUBSTCODE = [ _SUBSTCODE left "$" ]
//## 									call define substitute_code
//## 									set local HCODEVAR = `HNAME'_CODE
//## 									set local OLDCODE = [ value HCODEVAR ]
//## 									seti global HCODEVAR = `OLDCODE'`	'_SUBSTCODE\n
//## 								end if
//## 								begin if [ CALLBACKS left 1 == "|" ]
//## 									set local CALLBACKS = [ CALLBACKS right "|" ]
//## 								end if
//## 								begin if [ CALLBACKS != none ]
//## 									begin while [ CALLBACKS != "" ]
//## 										set local CALLBACK = [ CALLBACKS left "|" ]
//## 										set local CALLBACKS = [ CALLBACKS right "|" ]
//## 										set local CONDITION = [ CALLBACK left "?" ]
//## 										begin if [ CONDITION == CALLBACK ]
//## 											set local CONDITION = `'
//## 										ifelse
//## 											set local CALLBACK = [ CALLBACK right "?" ]
//## 										end if
//## 										begin if [ CONDITION != "" ]
//## 											set local _SUBSTCODE = CONDITION
//## 											call define substitute_code
//## 											set local CONDITION = _SUBSTCODE
//## 											set local HCODEVAR = `HNAME'_CODE
//## 											set local OLDCODE = [ value HCODEVAR ]
//## 											seti global HCODEVAR = `OLDCODE'`	'if(CONDITION){\n
//## 											set local INDENT = `	'
//## 										ifelse
//## 											set local INDENT = `'
//## 										end if
//## 										begin if [ CALLBACK left 1 == "$" ]
//## 											set local _SUBSTCODE = [ CALLBACK right "$" ]
//## 											set local CALLBACK = [ _SUBSTCODE right "$" ]
//## 											set local _SUBSTCODE = [ _SUBSTCODE left "$" ]
//## 											call define substitute_code
//## 											set local _PRECALLBACK = _SUBSTCODE
//## 										ifelse
//## 											set local _PRECALLBACK = `'
//## 										end if
//## 										begin if [ _PRECALLBACK != "" ]
//## 											set local HCODEVAR = `HNAME'_CODE
//## 											set local OLDCODE = [ value HCODEVAR ]
//## 											seti global HCODEVAR = `OLDCODE'`	'`INDENT'_PRECALLBACK\n
//## 										end if
//## 										begin if [ CALLBACK != none ]
//## 											set local SCRIPTNAME = `NAME'_`INDEX'_`CALLBACK'
//## 											set local SCRIPTNAME = [ SCRIPTNAME ]
//## 											set local HCODEVAR = `HNAME'_CODE
//## 											set local OLDCODE = [ value HCODEVAR ]
//## 											seti global HCODEVAR = `OLDCODE'`	'`INDENT'PARENT`SCRIPTNAME'(`PARENT'`MEMBERNAME'`, call_data');\n
//## 										end if
//## 										begin if [ CONDITION != "" ]
//## 											set local HCODEVAR = `HNAME'_CODE
//## 											set local OLDCODE = [ value HCODEVAR ]
//## 											seti global HCODEVAR = `OLDCODE'`	'}\n
//## 										end if
//## 									end while
//## 								end if
//## 							end if
//## 							set local I = [ I + 1 ]
//## 							set local AVNAME = [ AVLIST [ I ]
//## 						end while
//## 						begin if [ MFC_AUTO_UNMANAGE == true ]
//## 							set local HNAME = BN_CLICKED_`NAME'_`INDEX'
//## 							set local HNAME = [ HNAME ]
//## 							begin if [ ! (HNAME { HANDLERS) ]
//## 								set global HANDLERS = HANDLERS HNAME
//## 								set local HPROTO = `void 'PARENTCLASS::OnClicked_`NAME'_`INDEX'()
//## 								set local HPROTO = [ HPROTO ]
//## 								set global HANDLERPROTOS = HANDLERPROTOS HPROTO
//## 								set local HCODEVAR = `HNAME'_CODE
//## 								seti global HCODEVAR = `'
//## 							end if
//## 							set local HCODEVAR = `HNAME'_CODE
//## 							set local OLDCODE = [ value HCODEVAR ]
//## 							seti global HCODEVAR = `OLDCODE'`	'FmHideWidget(this);\n
//## 						end if
//## 						call pattern handlers widget [ ! defined SUBCLASS ]
//## 					end define handlers

//## 					begin define message_map
//## BEGIN_MESSAGE_MAP(SUBCLASS, SUPERCLASS)
//## 	//{{AFX_MSG_MAP(SUBCLASS)
//## 						begin if [ APPSHELL == 1 || POPUP == 1 ]
//## 		ON_WM_CLOSE()
//## 		ON_WM_SIZE()
//## 		ON_WM_ERASEBKGND()
//## 		ON_WM_CTLCOLOR()
//## 		ON_WM_PAINT()
//## 							begin if [ MAINCLASS == 1 ]
//## 		ON_WM_SYSCOLORCHANGE()
//## 							end if
//## 						end if
//## 						begin if [ MFC_MIN_WIDTH != 0 || MFC_MIN_HEIGHT != 0 || MFC_MAX_WIDTH != 0 || MFC_MAX_HEIGHT != 0 ]
//## 		ON_WM_GETMINMAXINFO()
//## 						end if
//## 						set global HANDLERS = `'
//## 						set global HANDLERMAPS = `'
//## 						call define map_afx_handlers
//## 						set local _I = 2
//## 						set local _H = [ HANDLERS [ _I ]
//## 						begin while [ _H != "" ]
//## 							set local _HM = [ HANDLERMAPS [ _I ]
//## 		_HM
//## 							set local _I = [ _I + 1 ]
//## 							set local _H = [ HANDLERS [ _I ]
//## 						end while
//## 	//}}AFX_MSG_MAP
//## END_MESSAGE_MAP()
//## 
//## 					end define message_map

//## 					begin define delete_fonts
//## 						begin if [ FONTVARNAME != "" && ( FONTVARNAME { CREATEDFONTS ) && ! ( FONTVARNAME { DELETEDFONTS ) ]
//## 	delete FONTVARNAME;
//## 							set global DELETEDFONTS = DELETEDFONTS FONTVARNAME
//## 						end if
//## 						call pattern delete_fonts widget
//## 					end define delete_fonts

//## 					begin define delete_children
//## 						call pattern delete_children widget
//## 						begin if [ CLASS != CXfmScrolledWnd ]
//## 	delete MEMBERNAME;
//## 						end if
//## 					end define delete_children

//## 					begin define class
//## 						set local PRINTMSG = `class 'CLASS
//## 						call define print
//## 						//## Output the definition of the MFC-based class
//## 						//## corresponding to the current widget.
//## 						//## 
//## ////////////////////////////////////////
//## // Class SUBCLASS
//## ////////////////////////////////////////
//## 
//## 						begin if [ SUPERCLASS == CXfmPane ]
//## IMPLEMENT_DYNCREATE(SUBCLASS, SUPERCLASS)
//## 
//## 						end if
//## 						begin if [ SUPERCLASS == CXfmFileDialog ]
//## SUBCLASS::SUBCLASS(CWnd* parent)
//## 							begin if [ defined MFC_FD_OPEN && MFC_FD_OPEN == false ]
//## 								set local OPEN = FALSE
//## 							ifelse
//## 								set local OPEN = TRUE
//## 							end if
//## 							set local FILTER = `All Files (*.*)|*.*||'
//##  							begin if [ defined MFC_FD_FILTER && MFC_FD_FILTER != "" ]
//##  								set local FILTER = MFC_FD_FILTER` Files ('MFC_FD_FILTER`)|'MFC_FD_FILTER`|'FILTER
//##  							end if
//##  							set local FILTER = "FILTER"
//## 	: CXfmFileDialog(OPEN, NULL, NULL, 0, FILTER, parent)
//## {
//## 							begin if [ MAINCLASS == 1 ]
//## 	Create(parent);
//## 							end if
//## }
//## 						ifelse
//## SUBCLASS::SUBCLASS()
//## {
//## 							begin if [ POPUP == 1 && MFC_ISMODAL == true ]
//## 	m_bModal = TRUE;
//## 							end if
//## }
//## 						end if
//## 
//## 						begin if [ MAINCLASS == 1 ]
//## 							begin if [ SUPERCLASS != CXfmFileDialog ]
//## SUBCLASS::SUBCLASS(CWnd* parent)
//## {
//## 								begin if [ POPUP == 1 && MFC_ISMODAL == true ]
//## 	m_bModal = TRUE;
//## 								end if
//## 	Create(parent);
//## }
//## 							end if
//## 
//## BOOL SUBCLASS::Create(CWnd* parent)
//## {
//## 							set local VERSTR = [ cstring XFMWIN_VERSIONSTRING ]
//## 	FmWCheckVersion(XFMWIN_VERSION, XFMWIN_REVISION, XFMWIN_PATCHLEVEL, VERSTR);
//## 	
//## 	CWnd* parentWnd = parent;
//## 	if(parentWnd){
//## 		while(!parentWnd->m_hWnd){
//## 			parentWnd = XtParent(parentWnd);
//## 			if(!parentWnd){
//## 				TRACE("SUBCLASS::Create: cannot find a windowed ancestor.\\n");
//## 				return(FALSE);
//## 			}
//## 		}
//## 	}
//## 	
//## 	MEMBERNAME = this;
//## 	
//## 							set global TOPRID = RID
//## 							call define children
//## 							call define set_attachments
//## 	return(TRUE);
//## }
//## 
//## extern Widget FmCreate`MODNAME'(String name, Widget parent, Arg*, Cardinal)
//## {
//## 	Widget w = new CXfm`MODNAME'(parent);
//## 							begin if [ MAPPED == 1 ]
//## 	FmShowWidget(w);
//## 							end if
//## 	return(w);
//## }
//## 
//## SUBCLASS::~SUBCLASS()
//## {
//## 							call pattern delete_children widget
//## 	FmWRemoveWidget(this);
//## 							call define delete_fonts
//## }
//## 
//## 						end if
//## 						begin if [ APPSHELL == 1 || POPUP == 1 ]
//## void SUBCLASS::OnClose()
//## {
//## 							begin if [ MFC_ISMODAL == true ]
//## 	FmReturn(this, 0);
//## 							end if
//## 	SUPERCLASS::OnClose();
//## }
//## 
//## void SUBCLASS::OnSize(UINT type, int cx, int cy)
//## {
//## 	if(type == SIZE_MAXIMIZED || type == SIZE_RESTORED)
//## 		FmWDoLayout(this);
//## }
//## 
//## BOOL SUBCLASS::OnEraseBkgnd(CDC* dc)
//## {
//## 	return(FmWPaintBackground(this, this, dc));
//## }
//## 
//## HBRUSH SUBCLASS::OnCtlColor(CDC* dc, CWnd* w, UINT color)
//## {
//## 	return(FmWSetColors(this, dc, w, color));
//## }
//## 
//## void SUBCLASS::OnPaint()
//## {
//## 	FmWDoLayout(this, False, False);
//## 	CPaintDC pdc(this);
//## 	FmWPaintWindow(this, this, &pdc);
//## }
//## 
//## 								begin if [ MAINCLASS == 1 ]
//## void SUBCLASS::OnSysColorChange()
//## {
//## 	FmWSysColorChange();
//## }
//## 
//## 								end if
//## 								begin if [ MFC_MIN_WIDTH != 0 || MFC_MIN_HEIGHT != 0 || MFC_MAX_WIDTH != 0 || MFC_MAX_HEIGHT != 0 ]
//## void SUBCLASS::OnGetMinMaxInfo(MINMAXINFO FAR* lp)
//## {
//## 									begin if [ MFC_MIN_WIDTH != 0 ]
//## 	lp -> ptMinTrackSize.x = MFC_MIN_WIDTH;
//## 									end if
//## 									begin if [ MFC_MIN_HEIGHT != 0 ]
//## 	lp -> ptMinTrackSize.y = MFC_MIN_HEIGHT;
//## 									end if
//## 									begin if [ MFC_MAX_WIDTH != 0 ]
//## 	lp -> ptMaxTrackSize.x = MFC_MAX_WIDTH;
//## 									end if
//## 									begin if [ MFC_MAX_HEIGHT != 0 ]
//## 	lp -> ptMaxTrackSize.y = MFC_MAX_HEIGHT;
//## 									end if
//## }
//## 
//## 								end if
//## 						end if
//## LRESULT SUBCLASS::WindowProc(UINT message, WPARAM wparam, LPARAM lparam)
//## {
//## 	LRESULT result = SUPERCLASS::WindowProc(message, wparam, lparam);
//## 	FmWProcessTranslations(this, (MSG*)GetCurrentMessage());
//## 	return(result);
//## }
//## 
//## BOOL SUBCLASS::PreTranslateMessage(MSG* msg)
//## {
//## 	if(FmWPreTranslateMessage(this, msg))
//## 		return(TRUE);
//## 						begin if [ SUPERCLASS == CFrameWnd ]
//## 	else
//## 	if(::TranslateAccelerator(m_hWnd, m_hAccelTable, msg))
//## 		return(TRUE);
//## 						end if
//## 						begin if [ SUPERCLASS == CXfmDialog || SUPERCLASS == CFrameWnd ]
//## 	else
//## 	if(IsDialogMessage(msg))
//## 		return(TRUE);
//## 						ifelse
//## #ifdef TRAVERSE_ALWAYS
//## 	else
//## 	if(::IsDialogMessage(m_hWnd, msg))
//## 		return(TRUE);
//## #endif
//## 						end if
//## 	else
//## 		return(SUPERCLASS::PreTranslateMessage(msg));
//## }
//## 
//## 						set global HANDLERS = `'
//## 						set global HANDLERPROTOS = `'
//## 						call define handlers
//## 						set local _I = 2
//## 						set local _H = [ HANDLERS [ _I ]
//## 						begin while [ _H != "" ]
//## 							set local _HP = [ HANDLERPROTOS [ _I ]
//## _HP
//## {
//## 	XtPointer call_data = (XtPointer)0;
//## 							set local HCODEVAR = `_H'_CODE
//## 							set local _C = [ value HCODEVAR ]
//## 							set local _L = [ length _C ]
//## 							begin if [ _L > 1 ]
//## 								set local _C = [ _C left (_L - 1) ]
//## 							end if
//## _C
//## }
//## 
//## 							set local _I = [ _I + 1 ]
//## 							set local _H = [ HANDLERS [ _I ]
//## 						end while
//## 
//## 						begin if [ MAINCLASS == 1 ]
//## 							set global HANDLERS = `'
//## 							set global HANDLERPROTOS = `'
//## 							call define translations_handlers
//## 							set local _I = 2
//## 							set local _H = [ HANDLERS [ _I ]
//## 							begin while [ _H != "" ]
//## 								set local _HP = [ HANDLERPROTOS [ _I ]
//## _HP
//## {
//## 	XtPointer call_data = (XtPointer)0;
//## 								set local HCODEVAR = `_H'_CODE
//## 								set local _C = [ value HCODEVAR ]
//## 								set local _L = [ length _C ]
//## 								begin if [ _L > 1 ]
//## 									set local _C = [ _C left (_L - 1) ]
//## 								end if
//## _C
//## }
//## 
//## 								set local _I = [ _I + 1 ]
//## 								set local _H = [ HANDLERS [ _I ]
//## 							end while
//## 						end if
//## 						call define message_map
//## 					end define class

//## 					begin define dialog_classes
//## 						call pattern dialog_classes widget
//## 						begin if [ defined SUBCLASS ]
//## 							call define class
//## 						end if
//## 					end define dialog_classes

//## 					begin pattern widget
//## 						set local PRINTMSG = `initializing variables'
//## 						call define print
//## 					end pattern widget

//## 					begin pattern widget
//## 						set local MAINCLASS = 1
//## 					end pattern widget

//## 					begin pattern widget
//## 						//## Initialize variables.
//## 						//## 
//## 						//## - MFC class:
//## 						//## 
//## 						begin if [ APPSHELL == 1 ]
//## 							set local SUPERCLASS = CFrameWnd
//## 							set local SUBCLASS = TOPCLASS
//## 							set local CLASS = TOPCLASS
//## 						elseif [ MAINCLASS == 1 ]
//## 							begin if [ defined(MFC_CLASS) && MFC_CLASS != "" ]
//## 								set local SUPERCLASS = MFC_CLASS
//## 							ifelse
//## 								set local SUPERCLASS = CXfmWidget
//## 							end if
//## 							set local SUBCLASS = TOPCLASS
//## 							set local CLASS = TOPCLASS
//## 						elseif [ POPUP == 1 ]
//## 							set local SUPERCLASS = MFC_CLASS
//## 							set local SUBCLASS = CXfm`NAME'`INDEX'
//## 							set local CLASS = CXfm`NAME'`INDEX'
//## 						elseif [ MFC_CLASS == CXfmWnd ]
//## 							set local SUPERCLASS = CXfmWnd
//## 							set local SUBCLASS = CXfm`NAME'`INDEX'Wnd
//## 							set local CLASS = CXfm`NAME'`INDEX'Wnd
//## 							begin if [ defined MFC_SPLITTER_ROW || MFC_SCROLLED_CHILD == true ]
//## 								set local DOBASICPANE = true
//## 							end if
//## 						elseif [ defined MFC_SPLITTER_ROW || MFC_SCROLLED_CHILD == true ]
//## 							set local SUPERCLASS = CXfmPane
//## 							set local SUBCLASS = CXfm`NAME'`INDEX'Pane
//## 							begin if [ defined(MFC_CLASS) && MFC_CLASS != "" ]
//## 								set local CLASS = MFC_CLASS
//## 							ifelse
//## 								set local CLASS = CXfmWidget
//## 							end if
//## 						elseif [ defined(MFC_CLASS) && MFC_CLASS != "" ]
//## 							set local CLASS = MFC_CLASS
//## 						ifelse
//## 							set local CLASS = CXfmWidget
//## 						end if
//## 						//## 
//## 						//## - Fonts:
//## 						//## 
//## 						call define get_font
//## 						//## 
//## 						//## - Member name:
//## 						//## 
//## 						set local MEMBERNAME = m_`NAME'_`INDEX'
//## 						//## 
//## 						//## - Parent CWnd (passed to Create call):
//## 						//## 
//## 						begin if [ MAINCLASS == 1 ]
//## 							set local PARENTWND = parentWnd
//## 						elseif   [ __MAINCLASS == 1 ]
//## 							set local PARENTWND = this
//## 						elseif   [ __POPUP == 1 ]
//## 							set local PARENTWND = __MEMBERNAME
//## 						elseif   [ SUPERCLASS == CXfmPane || DOBASICPANE == true ]
//## 							set local PARENTWND = `MEMBERNAME'_pane
//## 						elseif   [ __SUPERCLASS == CXfmWnd || __MFC_ISCOMPOSITE == true ]
//## 							set local PARENTWND = __MEMBERNAME
//## 						ifelse
//## 							set local PARENTWND = __PARENTWND
//## 						end if
//## 						//## 
//## 						//## - Translation CWnd (wnd that receives message):
//## 						//## 
//## 						begin if [ SUPERCLASS == CXfmWnd || __MFC_ISCOMPOSITE == true ]
//## 							set local TRANSWND = MEMBERNAME
//## 						ifelse
//## 							set local TRANSWND = PARENTWND
//## 						end if
//## 						//## 
//## 						//## - Shell CWnd:
//## 						//## 
//## 						begin if [ APPSHELL == 1 || POPUP == 1]
//## 							set local SHELLWND = MEMBERNAME
//## 						elseif [ MAINCLASS == 1 ]
//## 							set local SHELLWND = `'
//## 						ifelse
//## 							set local SHELLWND = __SHELLWND
//## 						end if
//## 						//## 
//## 						//## - Resource ID:
//## 						//## 
//## 						begin if [ APPSHELL == 1 || POPUP == 1 || MENUPOPUP == 1 ]
//## 							set local RID = `MODNAME'_`NAME'_`INDEX'
//## 							set local RID = [ upper RID ]
//## 							set local RID = "RID"
//## 						elseif [ MFC_ISMENUITEM ]
//## 							set local RID = IDM_`MODNAME'_`NAME'_`INDEX'
//## 						ifelse
//## 							set local RID = IDC_`MODNAME'_`NAME'_`INDEX'
//## 						end if
//## 						set local RID = [ upper RID ]
//## 						//## 
//## 						//## - Geometry:
//## 						//## 
//## 						set local W = MFC_W
//## 						set local H = MFC_H
//## 						begin if [ POPUP == 1 || APPSHELL == 1 || __SUPERCLASS == CXfmWnd || __MFC_ISCOMPOSITE == true ]
//## 							set local X = MFC_X
//## 							set local Y = MFC_Y
//## 						elseif   [ __APPSHELL == 1 || __POPUP == 1 || SUPERCLASS == CXfmPane || DOBASICPANE == true ]
//## 							set local X = 0
//## 							set local Y = 0
//## 						ifelse
//## 							set local X = [ __X + MFC_X ]
//## 							set local Y = [ __Y + MFC_Y ]
//## 						end if
//## 						begin if [ defined MFC_MENUBARHEIGHT ]
//## 							set local Y = [ Y - MFC_MENUBARHEIGHT ]
//## 						end if
//## 						set local R = [ X + W ]
//## 						set local B = [ Y + H ]
//## 						//## 
//## 						//## - Class names:
//## 						//## 
//## 						begin if [ MAINCLASS == 1 ]
//## 							set local PARENTCLASS = SUBCLASS
//## 							set local GETPARENT = `'
//## 							set local PARENT = `'
//## 						elseif [ SUPERCLASS == CXfmPane || DOBASICPANE == true ]
//## 							set local PARENTCLASS = SUBCLASS
//## 							begin if [ __GETPARENT == "" ]
//## 								set local GETPARENT = GetParent()->GetParent()
//## 							ifelse
//## 								set local GETPARENT = GetParent()->GetParent()->__GETPARENT
//## 							end if
//## 							begin if [ SUPERCLASS == CXfmWnd || __MFC_ISCOMPOSITE == true  ]
//## 								set local GETPARENT = GetParent()->GETPARENT
//## 							end if
//## 							set local PARENT = `(('`TOPCLASS'*)(GETPARENT))->
//## 						elseif [ POPUP == 1 || SUPERCLASS == CXfmWnd || __MFC_ISCOMPOSITE == true  ]
//## 							set local PARENTCLASS = SUBCLASS
//## 							begin if [ __GETPARENT == "" ]
//## 								set local GETPARENT = GetParent()
//## 							ifelse
//## 								set local GETPARENT = GetParent()->__GETPARENT
//## 							end if
//## 							set local PARENT = `(('`TOPCLASS'*)(GETPARENT))->
//## 						ifelse
//## 							set local PARENTCLASS = __PARENTCLASS
//## 							set local GETPARENT = __GETPARENT
//## 							set local PARENT = __PARENT
//## 						end if
//## 						set local PARENTCLASS = [ PARENTCLASS ]
//## 						//## 
//## 						//## - Create method:
//## 						//##   for subclasses (i.e. the main class
//## 						//##   and dialog classes), we must call
//## 						//##   the superclasse's Create, and for
//## 						//##   normal children the normal Create.
//## 						//## 
//## 						begin if [ MAINCLASS == 1 || POPUP == 1 ]
//## 							set local SUPCREATE = `SUPERCLASS'::
//## 						ifelse
//## 							set local SUPCREATE = `'
//## 						end if
//## 						//## 
//## 						//## (call recursively for children).
//## 						//## 
//## 						recursive pattern widget
//## 					end pattern widget

//## 					begin pattern widget
//## 						call pattern dialog_classes widget
//## 						set local CLASS = TOPCLASS
//## 						call define class
//## 					end pattern widget

/////////////////////////////////////////////////////////////////////////////
// scripts

//## 					begin pattern globalvar [ VARNAME != __FaceDevNullVariable__ ]
//## 						begin if [ ! (VARNAME { DECLAREDGLOBALS) ]
//## 							begin if [ VARSTATIC == 2 || VARSTATIC == 3 ]
//## #ifndef VXfm`VARNAME'
//## 								begin if [ VARTYPE == String ]
//## #define VXfm`VARNAME' "VALUE"
//## 								ifelse
//## #define VXfm`VARNAME' VALUE
//## 								end if
//## #endif
//## 							ifelse
//## 								begin if [ VARCNAME == __extern__ ]
//## extern CXfmVariable VXfm`VARNAME';
//## 								ifelse
//## #ifdef _GLOBVAR_VXfm`VARNAME'_`MODNAME'_
//## _GLOBVAR_VXfm`VARNAME'_`MODNAME'_ CXfmVariable VXfm`VARNAME';
//## #else
//## CXfmVariable VXfm`VARNAME';
//## #endif
//## 								end if
//## 							end if
//## 							set global DECLAREDGLOBALS = DECLAREDGLOBALS VARNAME
//## 						end if
//## 					end pattern globalvar

//## 					begin pattern script
//## 						set local SCRIPTNAME = `WNAME'_`RNAME'
//## 						set local SCRIPTNAME = [ SCRIPTNAME ]
//## 						set global DEFINEDSCRIPTS = DEFINEDSCRIPTS SCRIPTNAME
//## 					end pattern script

//## 					begin define facewidget
//## 						begin if [ defined WIDGETVALUE ]
//## 							set local WID = m_`WIDGETVALUE'
//## 						ifelse
//## 							begin if [ VARNAME != "" ]
//## 								set local WREF = VXfm`VARNAME'
//## 							ifelse
//## 								set local WREF = ref_widget
//## 							end if
//## 							begin if [ NAMES == "" && LEVEL == 0 ]
//## 								set local WID = (CWnd*)WREF
//## 							ifelse
//## 								set local WID = FmWGetWidget((CWnd*)WREF`, 'LEVEL`, '"NAMES")
//## 							end if
//## 						end if
//## 					end define facewidget

//## 					begin define facearg
//## 						set local __ARGIDX = [ __ARGIDX + 1 ]
//## 						begin if [ __TYPE == ASSIGN && __ARGIDX == 2 ]
//## 							set local ISLHS = 1
//## 							set local __LHSTYPE = ARGTYPE
//## 						end if
//## 						begin if [ ARGTYPE == STRING ]
//## 							begin if [ __KIND == STRUCT && __ARGIDX < 4 ]
//## 								set local ARGVAL = VALUE
//## 							ifelse
//## 								set local ARGVAL = [ cstring VALUE ]
//## 							end if
//## 							set local ARGVAR = CXfmVariable(ARGVAL)
//## 						elseif [ ARGTYPE == INT ]
//## 							set local ARGVAL = VALUE
//## 							set local ARGVAR = CXfmVariable(ARGVAL)
//## 						elseif [ ARGTYPE == FLOAT ]
//## 							set local ARGVAL = VALUE
//## 							set local ARGVAR = CXfmVariable((float) ARGVAL)
//## 							set local __HASFLOATARG = 1
//## 						elseif [ ARGTYPE == WIDGET ]
//## 							call define facewidget
//## 							set local ARGVAL = WID
//## 							set local ARGVAR = CXfmVariable(ARGVAL)
//## 						elseif [ ARGTYPE == RESOURCE ]
//## 							call define facewidget
//## 							set local ARGVAR = FmWGetValue(WID`, '"NAME")
//## 							set local ARGVAL = (XtArgVal)ARGVAR
//## 							begin if [ ISLHS ]
//## 								set local __LHSWIDGET = WID
//## 								set local __LHSNAME = NAME
//## 							end if
//## 						elseif [ ARGTYPE == IMMEDIATE_OBJECT_AV ]
//## 							call define facewidget
//## 							set local ARGVAR = FmWGetValue(WID`, '"$NAME")
//## 							set local ARGVAL = (XtArgVal)ARGVAR
//## 							begin if [ ISLHS ]
//## 								set local __LHSWIDGET = WID
//## 								set local __LHSNAME = NAME
//## 							end if
//## 						elseif [ ARGTYPE == INDIRECT_OBJECT_AV ]
//## 							call define facewidget
//## 							set local ARGVAR = FmWGetValue(WID`, '"@NAME")
//## 							set local ARGVAL = (XtArgVal)ARGVAR
//## 							begin if [ ISLHS ]
//## 								set local __LHSWIDGET = WID
//## 								set local __LHSNAME = NAME
//## 							end if
//## 						elseif [ ARGTYPE == PROP ]
//## 							call define facewidget
//## 							set local ARGVAR = FmWGetValue(WID`, '"@PROPNAME")
//## 							set local ARGVAL = (XtArgVal)ARGVAR
//## 							begin if [ ISLHS ]
//## 								set local __LHSWIDGET = WID
//## 								set local __LHSNAME = PROPNAME
//## 							end if
//## 						elseif [ ARGTYPE == CALLDATA ]
//## 							begin if [ NAME == "" ]
//## 								begin if [ REMOTEAVNAME != "" ]
//## 									set local ARGVAL = FmWGetAVAddress("REMOTEAVNAME`", 'REMOTEAVTYPE`)'
//## 									begin if [ REMOTEAVTYPE != 0 ]
//## 										set local ARGVAR = CXfmVariable(ARGVAL, REMOTEAVTYPE)
//## 									ifelse
//## 										set local ARGVAR = CXfmVariable(ARGVAL, "Any")
//## 									end if
//## 								ifelse
//## 									set local ARGVAL = (XtArgVal)call_data
//## 									set local ARGVAR = CXfmVariable(ARGVAL, "Any")
//## 								end if
//## 							ifelse
//## 								set local I = [ NAME { REMOTEAVS ]
//## 								begin if [ I ]
//## 									set local T = [ REMOTEAVTYPES [ I ]
//## 									set local ARGVAL = FmWGetAVAddress("NAME"`, 'T)
//## 									begin if [ T != 0 ]
//## 										set local ARGVAR = CXfmVariable(ARGVAL`, 'T)
//## 									ifelse
//## 										set local ARGVAR = CXfmVariable(ARGVAL`, '"Any")
//## 									end if
//## 								ifelse
//## 									set local ARGVAR = FmWGetValue(0`, "$'NAME`")'
//## 									set local ARGVAL = (XtArgVal)ARGVAR
//## 								end if
//## 								begin if [ ISLHS ]
//## 									set local __LHSNAME = NAME
//## 								end if
//## 							end if
//## 						elseif [ ARGTYPE == AV ]
//## 							begin if [ NAME == "" ]
//## 								begin if [ REMOTEAVNAME != "" ]
//## 									set local ARGVAL = FmWGetAVValue("REMOTEAVNAME`", 'REMOTEAVTYPE`, call_data)'
//## 									begin if [ REMOTEAVTYPE != 0 ]
//## 										set local ARGVAR = CXfmVariable(ARGVAL, REMOTEAVTYPE)
//## 									ifelse
//## 										set local ARGVAR = CXfmVariable(ARGVAL, "Any")
//## 									end if
//## 								ifelse
//## 									set local ARGVAL = *(XtArgVal*)call_data
//## 									set local ARGVAR = CXfmVariable(ARGVAL, "Any")
//## 								end if
//## 							ifelse
//## 								set local I = [ NAME { REMOTEAVS ]
//## 								begin if [ I ]
//## 									set local T = [ REMOTEAVTYPES [ I ]
//## 									set local ARGVAL = FmWGetAVValue("NAME"`, 'T, 0)
//## 									begin if [ T != 0 ]
//## 										set local ARGVAR = CXfmVariable(ARGVAL`, 'T)
//## 									ifelse
//## 										set local ARGVAR = CXfmVariable(ARGVAL`, '"Any")
//## 									end if
//## 								ifelse
//## 									set local ARGVAR = FmWGetValue(0`, "@'NAME`")'
//## 									set local ARGVAL = (XtArgVal)ARGVAR
//## 								end if
//## 								begin if [ ISLHS ]
//## 									set local __LHSNAME = NAME
//## 								end if
//## 							end if
//## 						elseif [ ARGTYPE == VAR ]
//## 							set local ARGVAR = VXfm`VARNAME'
//## 							set local ARGVAL = (XtArgVal)ARGVAR
//## 							begin if [ defined VARCTYPE && VARCTYPE != "" ]
//## 								begin if [ VARCTYPEISENUM == 1 ]
//## 									set local ARGVAL = (VARCTYPE)(int)ARGVAL
//## 								elseif [ VARCTYPE == float ]
//## 									set local ARGVAL = (float)(CXfmVariable)(XtArgVal)ARGVAL
//## 									set local __HASFLOATARG = 1
//## 								ifelse
//## 									set local ARGVAL = (VARCTYPE)ARGVAL
//## 								end if
//## 							end if
//## 							begin if [ ISLHS ]
//## 								set local __LHSVAR = VXfm`VARNAME'
//## 							end if
//## 						elseif [ ARGTYPE == PROC ]
//## 							set local BLOCK = `'
//## 							call pattern faceproc proc
//## 							set local ARGBLK = BLOCK
//## 							begin if [ FUNCCTYP == float ]
//## 								set local ARGVAR = CXfmVariable((float)BLOCK)
//## 							ifelse
//## 								set local ARGVAR = CXfmVariable((XtArgVal)BLOCK`, '"FUNCFTYP")
//## 							end if
//## 							begin if [ FUNCCTYP != "" ]
//## 								begin if [ FUNCCTYPISENUM == 1 ]
//## 									set local ARGVAL = (FUNCCTYP)(int)BLOCK
//## 								elseif [ FUNCCTYP == float ]
//## 									set local ARGVAL = (float)(CXfmVariable)BLOCK
//## 									set local __HASFLOATARG = 1
//## 								ifelse
//## 									set local ARGVAL = (FUNCCTYP)BLOCK
//## 								end if
//## 							ifelse
//## 								set local ARGVAL = (XtArgVal)BLOCK
//## 							end if
//## 						end if
//## 						begin if [ (__CNAME == _FaceGetArray || __CNAME == _FaceSetArray || __CNAME == _FaceFirstOfArray || __CNAME == _FaceNextOfArray) && __ARGIDX >= 3 ]
//## 							set local ARGVAL = `(unsigned long)'ARGVAL
//## 						elseif [ defined PROTOCARGTYPE && PROTOCARGTYPE != "" && !(__KIND == STRUCT && __ARGDIX <= 3) ]
//## 							set local ARGVAL = (PROTOCARGTYPE)ARGVAL
//## 						end if
//## 						set local ARGVAR = [ ARGVAR ]
//## 						set local ARGVAL = [ ARGVAL ]
//## 						set local ARGBLK = [ ARGBLK ]
//## 						begin if [ defined __ARGVARS ]
//## 							set local __ARGVARS = __ARGVARS ARGVAR
//## 							set local __ARGVALS = __ARGVALS ARGVAL
//## 							set local __ARGBLKS = __ARGBLKS ARGBLK
//## 						ifelse
//## 							set local __ARGVARS = ARGVAR
//## 							set local __ARGVALS = ARGVAL
//## 							set local __ARGBLKS = ARGBLK
//## 						end if
//## 					end define facearg

//## 					begin define faceproc
//## 						begin if [ defined ____INDENT ]
//## 							set local INDENT = `____INDENT'`	'
//## 						ifelse
//## 							set local INDENT = `	'
//## 						end if
//## 						call pattern facearg arg
//## 						set local ARGVARS = ARGVARS `'
//## 						set local ARGVALS = ARGVALS `'
//## 						set local ARGBLKS = ARGBLKS `'
//## 						begin if [ TYPE == ASSIGN ]
//## 							set local RHSVAR = [ ARGVARS [ 3 ]
//## 							begin if [ LHSTYPE == RESOURCE ]
//## 								begin if [ defined RESOURCETYPE && RESOURCETYPE != "" ]
//## 									set local PROCCODE = FmWSetValue(LHSWIDGET`, '"LHSNAME"`, 'RHSVAR`, '"RESOURCETYPE")
//## 								ifelse
//## 									set local PROCCODE = FmWSetValue(LHSWIDGET`, '"LHSNAME"`, 'RHSVAR)
//## 								end if
//## 							elseif [ LHSTYPE == IMMEDIATE_OBJECT_AV ]
//## 								set local PROCCODE = FmWSetValue(LHSWIDGET`, '"$LHSNAME"`, 'RHSVAR)
//## 							elseif [ LHSTYPE == INDIRECT_OBJECT_AV || LHSTYPE == PROP ]
//## 								set local PROCCODE = FmWSetValue(LHSWIDGET`, '"@LHSNAME"`, 'RHSVAR)
//## 							elseif [ LHSTYPE == AV ]
//## 								begin if [ defined LHSNAME ]
//## 									set local PROCCODE = FmWSetValue(LHSWIDGET`, '"LHSNAME"`, 'RHSVAR)
//## 								ifelse
//## 									begin if [ REMOTEAVNAME != "" ]
//## 										set local PROCCODE = FmWSetAVValue("REMOTEAVNAME"`, 'RHSVAR`, 'call_data)
//## 									ifelse
//## 										set local PROCCODE = *(XtArgVal*)call_data = (XtArgVal)RHSVAR
//## 									end if
//## 								end if
//## 							elseif [ LHSTYPE == VAR ]
//## 								set local PROCCODE = LHSVAR` = 'RHSVAR
//## 							end if
//## 						elseif [ TYPE == IF ]
//## 							set local A1 = [ ARGVALS [ 1 ]
//## 							set local PROCCODE = if(A1){\n
//## 							set local B2 = [ ARGBLKS [ 2 ]
//## 							set local PROCCODE = PROCCODE`B2'
//## 							set local B3 = [ ARGBLKS [ 3 ]
//## 							begin if [ B3 != "" ]
//## 								set local PROCCODE = PROCCODE\n`INDENT'`} else {'\n
//## 								set local PROCCODE = PROCCODE`B3'
//## 							end if
//## 							set local PROCCODE = PROCCODE\n`INDENT'}
//## 						elseif [ TYPE == FOR ]
//## 							set local B1 = [ ARGBLKS [ 1 ]
//## 							set local A2 = [ ARGVALS [ 2 ]
//## 							set local B3 = [ ARGBLKS [ 3 ]
//## 							set local B4 = [ ARGBLKS [ 4 ]
//## 							set local PROCCODE = for(B1`; 'A2`; 'B4){\n
//## 							set local PROCCODE = PROCCODE`B3'
//## 							set local PROCCODE = PROCCODE}\n
//## 						elseif [ TYPE == WHILE ]
//## 							set local A1 = [ ARGVALS [ 1 ]
//## 							set local B2 = [ ARGBLKS [ 2 ]
//## 							set local PROCCODE = while(A1){\n
//## 							set local PROCCODE = PROCCODE`B2'
//## 							set local PROCCODE = PROCCODE}\n
//## 						ifelse
//## 							//## Function call.
//## 							//## 
//## 							begin if [ CNAME { BINARYOPS && NUMARGS == 2 ]
//## 								set local A1 = [ ARGVALS [ 1 ]
//## 								set local A2 = [ ARGVALS [ 2 ]
//## 								begin if [ HASFLOATARG ]
//## 									set local PROCCODE = ((float)A1` 'CNAME` '(float)A2)
//## 								ifelse
//## 									set local PROCCODE = ((int)A1` 'CNAME` '(int)A2)
//## 								end if
//## 							elseif [ CNAME { UNARYOPS && NUMARGS == 1 ]
//## 								set local A1 = [ ARGVALS [ 1 ]
//## 								set local PROCCODE = (CNAME(int)A1)
//## 							elseif [ CNAME == return ]
//## 								set local A1 = [ ARGVALS [ 1 ]
//## 								begin if [ NUMARGS == 0 ]
//## 									set local PROCCODE = return
//## 								ifelse
//## 									set local PROCCODE = return((XtArgVal)A1)
//## 								end if
//## 							elseif [ KIND == STRUCT ]
//## 								begin if [ CNAME == new_struct ]
//## 									begin if [ STRUCTSIZE == 0 ]
//## 										set local PROCCODE = calloc(1, sizeof(*(STRUCTCTYPE)0))
//## 									ifelse
//## 										set local PROCCODE = calloc(1, STRUCTSIZE*sizeof(XtArgVal))
//## 									end if
//## 								ifelse
//## 									set local A2 = [ ARGVALS [ 2 ]
//## 									begin if [ STRUCTSIZE == 0 ]
//## 										set local A3 = [ ARGVALS [ 3 ]
//## 										set local PROCCODE = ((A2)->A3)
//## 									ifelse
//## 										set local PROCCODE = *(((XtArgVal*)A2)+FIELDOFFSET)
//## 									end if
//## 									begin if [ NUMARGS == 4 ]
//## 										set local A4 = [ ARGVALS [ 4 ]
//## 										begin if [ STRUCTSIZE == 0 ]
//## 											set local PROCCODE = PROCCODE` = 'A4
//## 										ifelse
//## 											set local PROCCODE = PROCCODE` = '(XtArgVal)A4
//## 										end if
//## 									end if
//## 								end if
//## 							elseif [ KIND == TYPECASTER ]
//## 								set local A1 = [ ARGVALS [ 1 ]
//## 								set local PROCCODE = (A1)
//## 							ifelse
//## 								begin if [ CNAME == exit ]
//## 									set local FUNCNAME = FmWExit
//## 								elseif [ CNAME == printf ]
//## 									set local FUNCNAME = TRACE
//## 								elseif [ CNAME == Unknown ]
//## 									set local FUNCNAME = FmWUnknownFunction
//## 								elseif [ CNAME == FaceForbiddenFunction ]
//## 									set local FUNCNAME = FmWNotImplemented
//## 								ifelse
//## 									set local FUNCNAME = CNAME
//## 								end if
//## 								set local PROCCODE = FUNCNAME(
//## 								begin if [ FUNCNAME == FmWNotImplemented ]
//## 									set local PROCCODE = PROCCODE"UNIMPLNAME"
//## 									set local COMMA = `, '
//## 								elseif [ KIND == FACE ]
//## 									set local PROCCODE = `PROCCODE'ref_widget`, call_data'
//## 									set local COMMA = `, '
//## 								ifelse
//## 									set local COMMA = `'
//## 								end if
//## 								set local I = 1
//## 								begin while [ I <= NUMARGS ]
//## 									set local A = [ ARGVALS [ I ]
//## 									set local PROCCODE = PROCCODE`COMMA'A
//## 									set local COMMA = `, '
//## 									set local I = [ I + 1 ]
//## 								end while
//## 								set local PROCCODE = PROCCODE)
//## 							end if
//## 							set local __FUNCFTYP = FRETTYPE
//## 							set local __FUNCCTYP = CRETTYPE
//## 							set local __FUNCCTYPISENUM = CRETTYPEISENUM
//## 						end if
//## 						begin if [ (____TYPE == IF && ____ARGIDX != 1) || (____TYPE == FOR && ____ARGIDX == 3) || (____TYPE == WHILE && ____ARGIDX == 2) ]
//## 							set local ISINBLOCK = 1
//## 						end if
//## 						begin if [ !defined __ARGTYPE || __INFACEFUNCTION ]
//## 							set local ISTOPINSTR = 1
//## 						end if
//## 						begin if [ ISINBLOCK || ISTOPINSTR ]
//## 							set local PROCCODE = `INDENT'PROCCODE
//## 							begin if [ TYPE != IF && TYPE != FOR && TYPE != WHILE ]
//## 								set local PROCCODE = PROCCODE;
//## 							end if
//## 						end if
//## 						begin if [ __BLOCK != "" ]
//## 							set local __BLOCK = __BLOCK\n`PROCCODE'
//## 						ifelse
//## 							set local __BLOCK = PROCCODE
//## 						end if
//## 						begin if [ ISTOPINSTR && !ISINBLOCK ]
//## PROCCODE
//## 						end if
//## 					end define faceproc

//## 					begin pattern widget
//## 						set local PRINTMSG = `FACE functions'
//## 						call define print
//## 					end pattern widget

//## 					begin pattern facefunction
//## 						begin oneline
//## 							set local ARGI = 0
//## 							set local NARGS = PROTONUMARGS
//## 							begin if [ FRETTYPE == None ]
//## 								set local TYPE = void
//## 							ifelse
//## 								set local TYPE = XtArgVal
//## 							end if
//## TYPE CXfm`MODNAME'::CNAME(Widget ref_widget, XtPointer call_data
//## 							begin pattern arg
//## 								begin if [ __ARGI == 0 ]
//## `, '
//## 								end if
//## PROTOCARGTYPE _`ARGNAME'
//## 								begin if [ __ARGI < __NARGS - 1 ]
//## `, '
//## 								end if
//## 								set local __ARGI = [ __ARGI + 1 ]
//## 							end pattern arg
//## )
//## 						end oneline
//## {
//## 						begin pattern arg
//## 	CXfmVariable VXfm`ARGNAME'((XtArgVal)_`ARGNAME', "PROTOCARGTYPE");
//## 						end pattern arg
//## 						begin pattern localvar
//## 	CXfmVariable VXfm`VARNAME' = 0;
//## 						end pattern localvar
//## 						begin pattern proc
//## 							begin pattern arg [ ARGTYPE == PROC ]
//## 								set local BLOCK = `'
//## 								set local INFACEFUNCTION = 1
//## 								call pattern faceproc proc
//## 							end pattern arg
//## 						end pattern proc
//## }
//## 
//## 					end pattern facefunction

//## 					begin pattern widget
//## 						set local PRINTMSG = `FACE scripts'
//## 						call define print
//## 					end pattern widget

//## 					begin pattern script
//## void CXfm`MODNAME'::SCRIPTNAME(Widget ref_widget, XtPointer call_data)
//## {
//## 						begin pattern localvar
//## 	static CXfmVariable VXfm`VARNAME';
//## 						end pattern localvar
//## 						set local REMOTEAVNAME = `'
//## 						set local REMOTEAVTYPE = `'
//## 						begin if [ TYPE == avset || TYPE == avget ]
//## 							set local AVNAME = [ RNAME right (length RNAME - 4) ]
//## 							set local I = [ AVNAME { REMOTEAVS ]
//## 							begin if [ I ]
//## 								set local REMOTEAVNAME = AVNAME
//## 								set local REMOTEAVTYPE = [ REMOTEAVTYPES [ I ]
//## 							end if
//## 						end if
//## 						set global REMOTEAVNAME = REMOTEAVNAME
//## 						set global REMOTEAVTYPE = REMOTEAVTYPE
//## 						call pattern faceproc proc
//## }
//## 
//## 					end pattern script
