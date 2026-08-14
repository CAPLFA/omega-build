//## 					begin pattern interface
//## 						//## 
//## 						//## Pattern file for the main source file
//## 						//## of the Windows application.
//## 						//## 
//## 						begin if [ SHORTNAMES ]
//## 							set global PROJNAME = NAME
//## 							set global LPROJNAME = [ lower ( NAME left 8 ) ]
//## 							set global LPROJNAME8 = [ LPROJNAME left 8 ]
//## 							set global LPROJNAME5 = [ LPROJNAME left 5 ]
//## 						ifelse
//## 							set global PROJNAME = NAME
//## 							set global LPROJNAME = NAME
//## 							set global LPROJNAME8 = NAME
//## 							set global LPROJNAME5 = NAME
//## 						end if
//## // `LPROJNAME'.rc : Resource script for application NAME.
//## //
//## 					end pattern interface
//## 					begin pattern module
//## 						begin if [ SHORTNAMES ]
//## 							set local LMODNAME5 = [ lower ( NAME left 5 ) ]
//## 						ifelse
//## 							set local LMODNAME5 = NAME
//## 						end if
//## 					end pattern module

//## 					begin pattern interface
//## #include "`LPROJNAME5'Res.h"
//## 					end pattern interface

#define APSTUDIO_READONLY_SYMBOLS
/////////////////////////////////////////////////////////////////////////
//
// From TEXTINCLUDE 2
//
#include "afxres.h"

////////////////////////////////////////////////////////////////////////////////
#undef APSTUDIO_READONLY_SYMBOLS

#ifdef APSTUDIO_INVOKED

////////////////////////////////////////////////////////////////////////////////
//
// TEXTINCLUDE
//

1 TEXTINCLUDE DISCARDABLE 
BEGIN
//## begin pattern interface
//## 	"`LPROJNAME5'Res.h\\0"
//## end pattern interface
END

2 TEXTINCLUDE DISCARDABLE 
BEGIN
	"#include ""afxres.h""\r\n"
	"\0"
END

3 TEXTINCLUDE DISCARDABLE 
BEGIN
	"#include ""afxres.rc""  	// Standard components\r\n"
	"\0"
END

/////////////////////////////////////////////////////////////////////////
#endif    // APSTUDIO_INVOKED

//## begin pattern module
//## #include "`LMODNAME5'Xfm.rc"
//## end pattern module

////////////////////////////////////////////////////////////////////////////////
// Bitmaps.
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

//## 					begin define bitmap
//## 						set local FILENAME = PIXMAPFILE
//## 						call define basename
//## 						set local BITMAPNAME = BASENAME
//## 						set local BMPFILE = BITMAPNAME.bmp
//## #ifndef BITMAP_DEFINED_`BITMAPNAME'
//## #define BITMAP_DEFINED_`BITMAPNAME'
//## `BITMAPNAME' 	BITMAP DISCARDABLE `BMPFILE'
//## #endif
//## 
//## 						begin if [ defined PIXMAPBG && PIXMAPBG != "" ]
//## 							set local BG = `-bg 'PIXMAPBG
//## 						ifelse
//## 							set local BG = `-bg grey'
//## 						end if
//## 						begin if [ defined PIXMAPFG && PIXMAPFG != "" ]
//## 							set local FG = `-fg 'PIXMAPFG
//## 						ifelse
//## 							set local FG = `'
//## 						end if
//## 						call command xfmpix2bmp FG BG PIXMAPFILE Windows/`BMPFILE'
//## 					end define bitmap

//## 					begin pattern options
//## 						begin if [ defined PIXMAPS ]
//## 							set local PIXMAPS = `' PIXMAPS
//## 							set local I = 2
//## 							set local P = [ PIXMAPS [ I ]
//## 							begin while [ P != "" ]
//## 								set local PIXMAPFILE = P
//## 								set local PIXMAPBG = `'
//## 								set local PIXMAPFG = `'
//## 								call define bitmap
//## 								set local I = [ I + 1 ]
//## 								set local P = [ PIXMAPS [ I ]
//## 							end while
//## 						end if
//## 					end pattern options


#ifndef APSTUDIO_INVOKED
////////////////////////////////////////////////////////////////////////////////
//
// From TEXTINCLUDE 3
//

#include "afxres.rc"  	// Standard components

////////////////////////////////////////////////////////////////////////////////
#endif    // not APSTUDIO_INVOKED
