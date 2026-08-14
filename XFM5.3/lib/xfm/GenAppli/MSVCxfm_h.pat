//## 					begin pattern options
//## 						//## 
//## 						//## Set options as global variables.
//## 						//## 
//## 						//## set global XFONTS = XFONTS
//## 						//## set global WFONTS = WFONTS
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
//## 						set global WFONTWEIGHTS = FW_THIN FW_EXTRALIGHT FW_ULTRALIGHT FW_LIGHT FW_NORMAL FW_REGULAR FW_MEDIUM FW_SEMIBOLD FW_DEMIBOLD FW_BOLD FW_EXTRABOLD FW_ULTRABOLD FW_BLACK FW_HEAVY
//## 					end pattern options

//## 					begin pattern cmodule
//## 						//## 
//## 						//## Initialization of global variables:
//## 						//##  - module name:
//## 						//## 
//## 						set global MODNAME = INAME
//## 						//## 
//## 						//##  - FACE scripts actually called
//## 						//## 
//## 						set global CALLEDSCRIPTS = `'
//## 						//## 
//## 						//##  - verbose mode ?
//## 						//## 
//## 						set global VERBOSE = 0
//## 						//## 
//## /////////////////////////////////////////////////////////////////
//## /////////////////////////////////////////////////////////////////
//## //
//## // 	Declarations for class CXfm`MODNAME'.
//## //
//## /////////////////////////////////////////////////////////////////
//## /////////////////////////////////////////////////////////////////
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

//## 					begin define children
//## 	CLASS* MEMBERNAME;
//## 						call pattern children widget
//## 					end define children

//## 					begin define afx_handlers
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
//## 						set local CLICK = 0
//## 						begin while [ AVNAME != "" ]
//## 							//## Is there a callback defined for this
//## 							//## message ?
//## 							//## 
//## 							begin if [ value AVNAME != "" ]
//## 								set local HNAME = [ AVNAME right "MFC_N_" ]
//## 								begin if [ HNAME left 3 != "WM_ ]
//## 									set local HNAME = `HNAME'_`NAME'_`INDEX'
//## 									set local HNAME = [ HNAME ]
//## 								end if
//## 								begin if [ ! (HNAME { HANDLERS) ]
//## 									set global HANDLERS = HANDLERS HNAME
//## 									begin if [ (value AVNAME) left 1 == "#" ]
//## 										//## There is a prototype specified: use it.
//## 										//## 
//## 										set local PROTOTYPE = [ (value AVNAME) right "#" ]
//## 										set local PROTOTYPE = [ PROTOTYPE left "#" ]
//## 										set local PROTOL = [ PROTOTYPE left "::" ]
//## 										set local PROTOR = [ PROTOTYPE right "::" ]
//## 										set local HPROTO = `PROTOL'`PROTOR'
//## 									ifelse
//## 										set local HPROTO = [ (AVNAME right "MFC_N_") right "_" ]
//## 										set local HPROTOL = [ upper (HPROTO left 1) ]
//## 										set local HPROTOR = [ lower (HPROTO right ((length HPROTO) - 1)) ]
//## 										set local HPROTO = `void On'`HPROTOL'`HPROTOR'_`NAME'_`INDEX'()
//## 									end if
//## 									set local HPROTO = [ HPROTO ]
//## 									set global HANDLERPROTOS = HANDLERPROTOS HPROTO
//## 								end if
//## 							end if
//## 							set local I = [ I + 1 ]
//## 							set local AVNAME = [ AVLIST [ I ]
//## 						end while
//## 						//## For auto-unmanage buttons, declare a click handler
//## 						//## if there is not already one.
//## 						//## 
//## 						begin if [ MFC_AUTO_UNMANAGE == true && !(defined(MFC_N_BN_CLICKED) && MFC_N_BN_CLICKED != "") ]
//## 							set local HNAME = BN_CLICKED_`NAME'_`INDEX'
//## 							set local HNAME = [ HNAME ]
//## 							set local HPROTO = `void OnClicked_'`NAME'_`INDEX'()
//## 							set local HPROTO = [ HPROTO ]
//## 							begin if [ ! (HNAME { HANDLERS) ]
//## 								set global HANDLERS = HANDLERS HNAME
//## 								set global HANDLERPROTOS = HANDLERPROTOS HPROTO
//## 							end if
//## 						end if
//## 						call pattern afx_handlers widget [ ! defined SUBCLASS ]
//## 					end define afx_handlers

//## 					begin define override_handlers
//## 						//## ``Override'' messages are Windows messages
//## 						//## that are handled directly by the MFC through
//## 						//## virtual functions. They are identified by
//## 						//## attributes named `MFC_ON_<message>'.
//## 						//## 
//## 						set local AVLIST = allvalues MFC_ON_
//## 						set local I = 1
//## 						set local AVNAME = [ AVLIST [ I ]
//## 						begin while [ AVNAME != "" ]
//## 							//## Is there a callback defined for this
//## 							//## message ?
//## 							//## 
//## 							begin if [ value AVNAME != "" ]
//## 								begin if [ (value AVNAME) left 1 == "#" ]
//## 									//## There is a prototype specified: use it.
//## 									//## 
//## 									set local PROTOTYPE = [ (value AVNAME) right "#" ]
//## 									set local PROTOTYPE = [ PROTOTYPE left "#" ]
//## 									set local PROTOL = [ PROTOTYPE left "::" ]
//## 									set local PROTOR = [ PROTOTYPE right "::" ]
//## 									set local HPROTO = `PROTOL'`PROTOR'
//## 								ifelse
//## 									set local HPROTO = [ AVNAME right "MFC_ON_" ]
//## 									set local HPROTO = On`HPROTO'()
//## 								end if
//## 								set local HNAME = [ AVNAME right "MFC_ON_" ]
//## 								set local HPROTO = [ HPROTO ]
//## 								begin if [ ! (HNAME { HANDLERS) ]
//## 									set global HANDLERS = HANDLERS HNAME
//## 									set global HANDLERPROTOS = HANDLERPROTOS HPROTO
//## 								end if
//## 							end if
//## 							set local I = [ I + 1 ]
//## 							set local AVNAME = [ AVLIST [ I ]
//## 						end while
//## 						call pattern override_handlers widget [ ! defined SUBCLASS ]
//## 					end define override_handlers

//## 					begin define define_translation
//## 						//## define translations handler
//## 						//## They are identified by
//## 						//## attributes named `MFC_TRANS_<message>'.
//## 						//## 
//## 						set local AVLIST = allvalues MFC_TRANS_
//## 						set local I = 1
//## 						set local AVNAME = [ AVLIST [ I ]
//## 						begin while [ AVNAME != "" ]
//## 							//## Is there a callback defined for this
//## 							//## message ?
//## 							//## 
//## 							begin if [ value AVNAME != "" ]
//## 								begin if [ (value AVNAME) left 1 == "#" ]
//## 									//## There is a prototype specified: use it.
//## 									//## 
//## 									set local PROTOTYPE = [ (value AVNAME) right "#" ]
//## 									set local PROTOTYPE = [ PROTOTYPE left "#" ]
//## 									set local PROTOL = [ PROTOTYPE left "::" ]
//## 									set local PROTOR = [ PROTOTYPE right "::" ]
//## 									set local HPROTO = `PROTOL'`PROTOR'
//## 								ifelse
//## 									set local HPROTO = [ AVNAME right "MFC_TRANS_" ]
//## 									set local HPROTO = On`HPROTO'()
//## 								end if
//## 								set local HNAME = [ AVNAME right "MFC_TRANS_" ]
//## 								set local HPROTO = [ HPROTO ]
//## 								begin if [ ! (HNAME { HANDLERS) ]
//## 									set global HANDLERS = HANDLERS HNAME
//## 									set global HANDLERPROTOS = HANDLERPROTOS HPROTO
//## 								end if
//## 							end if
//## 							set local I = [ I + 1 ]
//## 							set local AVNAME = [ AVLIST [ I ]
//## 						end while
//## 						call pattern define_translation widget
//## 					end define define_translation

//## 					begin define message_map
//## protected:
//## 	//{{AFX_MSG(SUBCLASS)
//## 						begin if [ APPSHELL == 1 || POPUP == 1 ]
//## 		afx_msg void OnClose();
//## 		afx_msg void OnSize(UINT, int, int);
//## 		afx_msg BOOL OnEraseBkgnd(CDC* dc);
//## 		afx_msg HBRUSH OnCtlColor(CDC* dc, CWnd* w, UINT color);
//## 		afx_msg void OnPaint();
//## 							begin if [ MAINCLASS == 1 ]
//## 		afx_msg void OnSysColorChange();
//## 							end if
//## 						end if
//## 						begin if [ MFC_MIN_WIDTH != 0 || MFC_MIN_HEIGHT != 0 || MFC_MAX_WIDTH != 0 || MFC_MAX_HEIGHT != 0 ]
//## 		afx_msg void OnGetMinMaxInfo(MINMAXINFO FAR* lp);
//## 						end if
//## 						set global HANDLERS = `'
//## 						set global HANDLERPROTOS = `'
//## 						call define afx_handlers
//## 						set local _I = 2
//## 						set local _H = [ HANDLERS [ _I ]
//## 						begin while [ _H != "" ]
//## 							set local _HP = [ HANDLERPROTOS [ _I ]
//## 		afx_msg _HP;
//## 							set local _I = [ _I + 1 ]
//## 							set local _H = [ HANDLERS [ _I ]
//## 						end while
//## 	//}}AFX_MSG
//## 	DECLARE_MESSAGE_MAP()
//## 						set global HANDLERS = `'
//## 						set global HANDLERPROTOS = `'
//## 						call define override_handlers
//## 						set local _I = 2
//## 						set local _H = [ HANDLERS [ _I ]
//## 						begin while [ _H != "" ]
//## 							set local _HP = [ HANDLERPROTOS [ _I ]
//## 	_HP;
//## 							set local _I = [ _I + 1 ]
//## 							set local _H = [ HANDLERS [ _I ]
//## 						end while
//## 						begin if [ MAINCLASS == 1 ]
//## 							set global HANDLERS = `'
//## 							set global HANDLERPROTOS = `'
//## 							call define define_translation
//## 							set local _I = 2
//## 							set local _H = [ HANDLERS [ _I ]
//## 							begin while [ _H != "" ]
//## 								set local _HP = [ HANDLERPROTOS [ _I ]
//## 	_HP;
//## 								set local _I = [ _I + 1 ]
//## 								set local _H = [ HANDLERS [ _I ]
//## 							end while
//## 						end if
//## 
//## 					end define message_map

//## 					begin define beginning_of_class
//## 						set local PRINTMSG = `class 'CLASS
//## 						call define print
//## 						//## Output the declaration of the MFC-based class
//## 						//## corresponding to the current widget.
//## 						//## 
//## ////////////////////////////////////////
//## // Class SUBCLASS
//## ////////////////////////////////////////
//## 
//## class SUBCLASS : public SUPERCLASS {
//## 						begin if [ SUPERCLASS == CXfmPane ]
//## DECLARE_DYNCREATE(SUBCLASS)
//## 
//## 						end if
//## public:
//## 	// Constructor(s):
//## 	//
//## 						begin if [ SUPERCLASS == CXfmFileDialog ]
//## 	SUBCLASS(CWnd* parent);
//## 						ifelse
//## 	SUBCLASS();
//## 						end if
//## 						begin if [ MAINCLASS == 1 ]
//## 							begin if [ SUPERCLASS != CXfmFileDialog ]
//## 	SUBCLASS(CWnd* parent);
//## 							end if
//## 
//## 	// Creator:
//## 	//
//## 	Create(CWnd* parent);
//## 
//## 	// Destructor:
//## 	//
//## 	~SUBCLASS();
//## 
//## 						end if
//## 	// Message handlers:
//## 	//
//## 	virtual LRESULT WindowProc(UINT, WPARAM, LPARAM);
//## 	virtual BOOL PreTranslateMessage(MSG*);
//## 
//## 						call define message_map
//## 					end define beginning_of_class

//## 					begin define end_of_class
//## };
//## 
//## 					end define end_of_class

//## 					begin define dialog_classes
//## 						call pattern dialog_classes widget
//## 						begin if [ defined SUBCLASS ]
//## 							call define beginning_of_class
//## 							call define end_of_class
//## 						end if
//## 					end define dialog_classes

//## 					begin define fonts
//## 						begin if [ FONTVARNAME != "" && ! ( FONTVARNAME { DECLAREDFONTS ) ]
//## 	CFont *FONTVARNAME; // FONTFAMILY FONTSIZE FONTWEIGHT FONTITALIC
//## 							set global DECLAREDFONTS = DECLAREDFONTS FONTVARNAME
//## 						end if
//## 						call pattern fonts widget
//## 					end define fonts

//## 					begin pattern widget
//## 						set local PRINTMSG = `initializing variables'
//## 						call define print
//## 					end pattern widget

//## 					begin pattern widget
//## 						set local MAINCLASS = 1
//## 					end pattern widget

//## 					begin pattern widget
//## 						//## Initialize variables for all widgets
//## 						//## 
//## 						//## - MFC class:
//## 						//## 
//## 						begin if [ APPSHELL == 1 ]
//## 							set local SUPERCLASS = CFrameWnd
//## 						elseif [ MAINCLASS == 1 ]
//## 							begin if [ defined(MFC_CLASS) && MFC_CLASS != "" ]
//## 								set local SUPERCLASS = MFC_CLASS
//## 							ifelse
//## 								set local SUPERCLASS = CXfmWidget
//## 							end if
//## 						elseif [ POPUP == 1 ]
//## 							set local SUPERCLASS = MFC_CLASS
//## 							set local SUBCLASS = CXfm`NAME'`INDEX'
//## 							set local CLASS = CXfm`NAME'`INDEX'
//## 						elseif [ MFC_CLASS == CXfmWnd ]
//## 							set local SUPERCLASS = CXfmWnd
//## 							set local SUBCLASS = CXfm`NAME'`INDEX'Wnd
//## 							set local CLASS = CXfm`NAME'`INDEX'Wnd
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
//## 						//## (call recursively for children).
//## 						//## 
//## 						recursive pattern widget
//## 					end pattern widget

//## 					begin pattern options
//## 						set local HDRLIST = allvalues EXTRA_HDRS_
//## 						set local I = 1
//## 						set local HDRNAME = [ HDRLIST [ I ]
//## 						begin while [ HDRNAME != "" ]
//## 							set local HDRS = [ value HDRNAME ]
//## 							begin while [ HDRS != "" ]
//## 								set local HDR = [ HDRS left "," ]
//## 								set local HDRS = [ HDRS right "," ]
//## #include HDR
//## 							end while
//## 							set local I = [ I + 1 ]
//## 							set local HDRNAME = [ HDRLIST [ I ]
//## 						end while
//## 					end pattern options

//## 					begin pattern widget
//## 						call pattern dialog_classes widget
//## 						set local CLASS = CXfm`MODNAME'
//## 						set local SUBCLASS = CXfm`MODNAME'
//## 						call define beginning_of_class
//## public:
//## 	// Children members:
//## 	//
//## 	CLASS* MEMBERNAME;
//## 						set local PRINTMSG = `child members'
//## 						call define print
//## 						call pattern children widget
//## 
//## public:
//## 	// Fonts:
//## 	//
//## 						set local PRINTMSG = `fonts'
//## 						call define print
//## 						set global DECLAREDFONTS = `'
//## 						call define fonts widget
//## 
//## 	// FACE scripts:
//## 	//
//## 						set local PRINTMSG = `FACE scripts'
//## 						call define print
//## 					end pattern widget
//## 					begin pattern script
//## 	void `WNAME'_`RNAME'(Widget w, XtPointer call_data);
//## 					end pattern script
//## 					begin pattern widget
//## 
//## 	// FACE functions:
//## 	//
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
//## 	TYPE CNAME(Widget ref_widget, XtPointer call_data
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
//## );
//## 						end oneline
//## 					end pattern facefunction
//## 					begin pattern widget
//## 						call define end_of_class
//## ////////////////////////////////////////
//## // XFaceMaker-style creation function:
//## //
//## extern Widget FmCreate`MODNAME'(String name, Widget parent, Arg*, Cardinal);
//## 					end pattern widget
