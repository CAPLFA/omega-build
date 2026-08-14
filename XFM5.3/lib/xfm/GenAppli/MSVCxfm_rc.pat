//## 					begin pattern cmodule
//## 					//## 
//## 					//## Generation of the Windows resource file
//## 					//## for an XFM module.
//## 					//##  The resource file contains the definitions
//## 					//## of menus, accelerator tables and bitmaps.
//## 					//##  It also contains a dialog resource for every
//## 					//## dialog, but the dialogs are empty: the controls
//## 					//## are actually created in the <name>xfm.cpp file.
//## 					//## 
//## 						set global MODNAME = INAME
//## 						set global MODINDEX = INDEX
//## 						set global FONTW = 8
//## 						set global FONTH = 16
//## 						set global FONTSIZE = 8
//## 						set global FONTNAME = `"MS Sans Serif"'
//## 					end pattern cmodule

//## 					begin pattern widget
//## 						set local MAINCLASS = 1
//## 					end pattern widget

////////////////////////////////////////////////////////////////////////////////
//
// Icon
//

//## 					begin define basename
//## 						//## 
//## 						//## extract the base name from FILENAME
//## 						//## returns result in BASENAME
//## 						//## 
//## 						set local SLASH = /
//## 						set local DOT = .
//## 						begin while [ FILENAME != "" ]
//## 							set local BASENAME = FILENAME
//## 							set local FILENAME = [ FILENAME right SLASH ]
//## 						end while
//## 						set local BASENAME = [ BASENAME left DOT ]
//## 					end define basename

//## 					begin pattern widget [ APPSHELL == 1 || MFC_CLASS == CFrameWnd ]
//## 						set local FRID = `MODNAME'_`NAME'_`INDEX'
//## 						set local FRID = [ upper FRID ]
//## 						begin if [ defined MFC_ICON_PIXMAP && MFC_ICON_PIXMAP != "" ]
//## 							set local ICONFILE = MFC_ICON_PIXMAP
//## 							set local FILENAME = MFC_ICON_PIXMAP
//## 							call define basename
//## 							set local BITMAPNAME = BASENAME
//## 						ifelse
//## 							set local ICONFILE = xfmwin_icon
//## 							set local BITMAPNAME = xfmwin
//## 						end if
//## 						set local ICOFILE = BITMAPNAME.ico
//## #ifndef ICON_DEFINED_`BITMAPNAME'_ICON_DEFINED
//## #define ICON_DEFINED_`BITMAPNAME'
//## FRID ICON DISCARDABLE `ICOFILE'
//## #endif
//## 
//## 						call command xfmpix2bmp ICONFILE Windows/`ICOFILE'
//## 					end pattern widget

////////////////////////////////////////////////////////////////////////////////
//
// Bitmap
//

//## 					begin define bitmap
//## 						set local PIXMAPFILE = [ PIXMAPFILE right (length PIXMAPFILE - 1) ]
//## 						set local PIXMAPFILE = [ PIXMAPFILE left (length PIXMAPFILE - 1) ]
//## 						set local FILENAME = PIXMAPFILE
//## 						call define basename
//## 						set local BITMAPNAME = BASENAME
//## 						set local BMPFILE = BITMAPNAME.bmp
//## #ifndef BITMAP_DEFINED_`BITMAPNAME'
//## #define BITMAP_DEFINED_`BITMAPNAME'
//## `BITMAPNAME' 	BITMAP DISCARDABLE `BMPFILE'
//## #endif
//## 						begin if [ defined MFC_R_background && MFC_R_background != "" ]
//## 							set local BG = `-bg 'MFC_R_background
//## 						ifelse
//## 							set local BG = `-bg grey'
//## 						end if
//## 						begin if [ defined MFC_R_foreground && MFC_R_foreground != "" ]
//## 							set local FG = `-fg 'MFC_R_foreground
//## 						ifelse
//## 							set local FG = `'
//## 						end if
//## 						call command xfmpix2bmp FG BG PIXMAPFILE Windows/`BMPFILE'
//## 					end define bitmap

//## 					begin pattern widget
//## 						begin if [ defined MFC_R_labelPixmap && MFC_R_labelPixmap != "" ]
//## 							set local PIXMAPFILE = MFC_R_labelPixmap
//## 							call define bitmap
//## 						end if
//## 						begin if [ defined MFC_R_labelInsensitivePixmap && MFC_R_labelInsensitivePixmap != "" ]
//## 							set local PIXMAPFILE = MFC_R_labelInsensitivePixmap
//## 							call define bitmap
//## 						end if
//## 						recursive pattern widget
//## 					end pattern widget

////////////////////////////////////////////////////////////////////////////////
//
// Menu
//

//## 					begin define menu
//## 						begin if [ MENUBAR == 1 ]
//## 							set local CURMENU = `'
//## 							set local CURMENUSEP = `'
//## 							set local CURINDENT = `	'
//## 							begin if [ defined(MFC_MENUBARHELP) && MFC_MENUBARHELP != "" ]
//## 								set local HELPMENU = MFC_MENUBARHELP
//## 							end if
//## 							call pattern menu widget [ POPUP != 1 ]
//## `RID' MENU PRELOAD DISCARDABLE 
//## BEGIN
//## CURMENU
//## END
//## 
//## 						elseif   [ MENUPOPUP == 1 ]
//## 							set local CURMENU = `'
//## 							set local CURMENUSEP = `'
//## 							set local CURINDENT = `		'
//## 							call pattern menu widget [ POPUP != 1 ]
//## 							set local MENUID = `MODNAME'_`NAME'_`INDEX'
//## 							set local MENUID = [ upper MENUID ]
//## MENUID MENU PRELOAD DISCARDABLE 
//## BEGIN
//## 	POPUP "Popup"
//## 	BEGIN
//## CURMENU
//## 	END
//## END
//## 
//## 						elseif   [ MENUPULLDOWN == 1 ]
//## 							set local CURMENU = `'
//## 							set local CURMENUSEP = `'
//## 							set local CURINDENT = `__CURINDENT'`	'
//## 							call pattern menu widget [ POPUP != 1 ]
//## 							set local __LASTSUBMENU = CURMENU
//## 						ifelse
//## 							set local CASCADE = false
//## 							set local SEPARATOR = false
//## 							set local STRING = `'
//## 							begin if [ defined(MFC_MENUITEMSTRING) && MFC_MENUITEMSTRING != "" ]
//## 								set local STRING = MFC_MENUITEMSTRING
//## 							end if
//## 							begin if [ MFC_ISMENUCASCADE == true ]
//## 								set local CASCADE = true
//## 							end if
//## 							begin if [ MFC_ISMENUSEPARATOR == true ]
//## 								set local SEPARATOR = true
//## 							end if
//## 							begin if [ MFC_CHECKED ]
//## 								set local CHECK = `, CHECKED'
//## 							ifelse
//## 								set local CHECK = `'
//## 							end if
//## 							begin if [ MFC_GRAYED ]
//## 								set local GRAY = `, GRAYED'
//## 							ifelse
//## 								set local GRAY = `'
//## 							end if
//## 							begin if [ CASCADE == true ]
//## 								begin if [ __HELPMENU == `NAME' ]
//## 									set local STRING = `\a'STRING
//## 								end if
//## 								set local __CURMENU = `__CURMENU'`__CURMENUSEP'`__CURINDENT'`POPUP "'STRING"`GRAY'
//## 								set local __CURMENUSEP = \n
//## 								set local __CURMENU = `__CURMENU'`__CURMENUSEP'`__CURINDENT'`BEGIN'
//## 								begin if [ defined __LASTSUBMENU && __LASTSUBMENU != "" ]
//## 									set local SUBMENU = __LASTSUBMENU
//## 									set local __LASTSUBMENU = `'
//## 								ifelse
//## 									set local SUBMENU = `__CURINDENT'`	MENUITEM SEPARATOR'
//## 								end if
//## 								set local __CURMENU = `__CURMENU'`__CURMENUSEP'`SUBMENU'
//## 								set local __CURMENU = `__CURMENU'`__CURMENUSEP'`__CURINDENT'`END'
//## 							elseif   [ SEPARATOR == true ]
//## 								set local __CURMENU = `__CURMENU'`__CURMENUSEP'`__CURINDENT'`MENUITEM SEPARATOR
//## 								set local __CURMENUSEP = \n
//## 							elseif   [ "STRING" != `""' ]
//## 								set local ID = `MODNAME'_`NAME'_`INDEX'
//## 								set local ID = [ upper ID ]
//## 								set local ID = IDM_`ID'
//## 								set local __CURMENU = `__CURMENU'`__CURMENUSEP'`__CURINDENT'`MENUITEM "'STRING`",	'ID`GRAY'`CHECK'
//## 								set local __CURMENUSEP = \n
//## 							ifelse
//## 								call pattern menu widget [ POPUP != 1 ]
//## 							end if
//## 						end if
//## 					end define menu

//## 					begin pattern widget
//## 						begin if [ MAINCLASS == 1 || POPUP == 1 ]
//## 							set global RID = `MODNAME'_`NAME'_`INDEX'
//## 							set global RID = [ upper RID ]
//## 							call define menu
//## 						end if
//## 						recursive pattern widget
//## 					end pattern widget

////////////////////////////////////////////////////////////////////////////////
//
// Accelerator
//

//## 					begin define accelerators
//## 						begin if [ defined MFC_MENUACCELERATOR ]
//## 							set local ACCELERATOR = MFC_MENUACCELERATOR
//## 						ifelse
//## 							set local ACCELERATOR = `'
//## 						end if
//## 						begin if [ ACCELERATOR != "" ]
//## 							set local MODIFIER = `'
//## 							begin if [ ( ACCELERATOR left 4 ) == Ctrl || ( ACCELERATOR left 1 ) == c ]
//## 								set local MODIFIER = ,CONTROL
//## 								set local ACCELERATOR = [ ACCELERATOR right (( length ACCELERATOR ) - 4) ]
//## 							elseif   [ ( ACCELERATOR left 5 ) == Shift || ( ACCELERATOR left 1 ) == s ]
//## 								set local MODIFIER = ,SHIFT
//## 								set local ACCELERATOR = [ ACCELERATOR right (( length ACCELERATOR ) - 5) ]
//## 							elseif   [ ( ACCELERATOR left 3 ) == Alt || ( ACCELERATOR left 1 ) == a ]
//## 								set local MODIFIER = ,ALT
//## 								set local ACCELERATOR = [ ACCELERATOR right (( length ACCELERATOR ) - 3) ]
//## 							end if
//## 							set local ID = `MODNAME'_`NAME'_`INDEX'
//## 							set local ID = [ upper ID ]
//## 							set local ID = IDM_`ID'
//## 							begin if [ (( ACCELERATOR left 9 ) right 8) == `KeyPress' ]
//## 								set local ACCELERATOR = [ ACCELERATOR right ((length ACCELERATOR) - 10) ]
//## 								set local ACCELERATORSPACE = [ ACCELERATOR left 1 ]
//## 								begin while [ (ACCELERATOR != "") && ((ACCELERATORSPACE == " ") || (ACCELERATORSPACE == "	")) ]
//## 									set local ACCELERATOR = [ ACCELERATOR right ((length ACCELERATOR) - 1) ]
//## 									set local ACCELERATORSPACE = [ ACCELERATOR left 1 ]
//## 								end while
//## 							elseif   [ (( ACCELERATOR left 4 ) right 3) == `Key' ]
//## 								set local ACCELERATOR = [ ACCELERATOR right ((length ACCELERATOR) - 5) ]
//## 								set local ACCELERATORSPACE = [ ACCELERATOR left 1 ]
//## 								begin while [ (ACCELERATOR != "") && ((ACCELERATORSPACE == " ") || (ACCELERATORSPACE == "	")) ]
//## 									set local ACCELERATOR = [ ACCELERATOR right ((length ACCELERATOR) - 1) ]
//## 									set local ACCELERATORSPACE = [ ACCELERATOR left 1 ]
//## 								end while
//## 							end if
//## 							set local ACCELERATOR = [ upper ACCELERATOR ]
//## 							begin if [ ACCELERATOR { ABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789 ]
//## 								set local ACCELERATOR = "ACCELERATOR"
//## 							ifelse
//## 								set local ACCELERATOR = VK_`ACCELERATOR'
//## 							end if
//## 							begin if [ HEADER_DONE != true ]
//## `RID' ACCELERATORS PRELOAD MOVEABLE 
//## BEGIN
//## 								set global HEADER_DONE = true
//## 							end if
//## 	ACCELERATOR,	ID,	VIRTKEY`MODIFIER'
//## 						end if
//## 						call pattern accelerators widget [ POPUP != 1 ]
//## 					end define accelerators

//## 					begin pattern widget
//## 						begin if [ MAINCLASS == 1 || POPUP == 1 ]
//## 							set global RID = `MODNAME'_`NAME'_`INDEX'
//## 							set global RID = [ upper RID ]
//## 							set global HEADER_DONE = false
//## 							call define accelerators
//## 							begin if [ HEADER_DONE == true ]
//## END
//## 
//## 							end if
//## 						end if
//## 						recursive pattern widget
//## 					end pattern widget

////////////////////////////////////////////////////////////////////////////////
//
// Dialog
//

//## 					begin pattern widget
//## 						begin if [ POPUP == 1 ]
//## 							set local RID = `MODNAME'_`NAME'_`INDEX'
//## 							set local RID = [ upper RID ]
//## 							set local X = MFC_X
//## 							set local Y = MFC_Y
//## 							set local W = MFC_W
//## 							set local H = MFC_H
//## 							set local DX = [ (X * 4) / FONTW ]
//## 							set local DW = [ (W * 4) / FONTW ]
//## 							set local DY = [ (Y * 8) / FONTH ]
//## 							set local DH = [ (H * 8) / FONTH ]
//## 							begin if [ defined MFC_TITLE ]
//## 								set local TITLE = MFC_TITLE
//## 							ifelse
//## 								set local TITLE = NAME
//## 							end if
//## `RID'	DIALOG DISCARDABLE DX, DY, DW, DH
//## STYLE DS_MODALFRAME | WS_POPUP | WS_CAPTION | WS_SYSMENU | WS_THICKFRAME
//## CAPTION "TITLE"
//## FONT FONTSIZE, FONTNAME
//## BEGIN
//## END
//## 
//## 						end if
//## 						recursive pattern widget
//## 					end pattern widget
