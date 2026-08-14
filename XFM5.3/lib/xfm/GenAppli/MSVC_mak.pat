#### 					begin pattern options
#### 						set global MSVCVERSION = MSVC_VERSION
#### 						begin if [ MSVCVERSION == 5 ]
#### `# Microsoft Developer Studio Generated NMAKE File, Format Version 5.00'
#### `# ** DO NOT EDIT **'
#### 						elseif [ MSVCVERSION == 4 ]
#### `# Microsoft Developer Studio Generated NMAKE File, Format Version 4.00'
#### `# ** DO NOT EDIT **'
#### 						elseif [ MSVCVERSION == 2 ]
#### `# Microsoft Visual C++ Generated NMAKE File, Format Version 2.00'
#### `# ** DO NOT EDIT **'
#### 						end if
#### 						set global GENERATEBROWSEINFO = GENERATE_BROWSE_INFO
#### 						set global CLIENTSERVERMODE = CLIENT_SERVER_MODE
#### 						begin if [ CLIENTSERVERMODE == true ]
#### 							set global XFMWINFLAGS = `/D "XFM_CLIENT_SERVER_MODE"'
#### 						ifelse
#### 							set global XFMWINFLAGS = `'
#### 						end if
#### 						
#### 						set global EXTRA_OBJS = 
#### 						set local OBJLIST = allvalues EXTRA_OBJS_
#### 						set local I = 1
#### 						set local OBJNAME = [ OBJLIST [ I ]
#### 						begin while [ OBJNAME != "" ]
#### 							set local OBJS = [ value OBJNAME ]
#### 							begin while [ OBJS != "" ]
#### 								set local OBJ = [ OBJS left "," ]
#### 								set local OBJS = [ OBJS right "," ]
#### 								set global EXTRA_OBJS = EXTRA_OBJS OBJ
#### 							end while
#### 							set local I = [ I + 1 ]
#### 							set local OBJNAME = [ OBJLIST [ I ]
#### 						end while
#### 						
#### 						set global EXTRA_SRCS = 
#### 						set local SRCLIST = allvalues EXTRA_SRCS_
#### 						set local I = 1
#### 						set local SRCNAME = [ SRCLIST [ I ]
#### 						begin while [ SRCNAME != "" ]
#### 							set local SRCS = [ value SRCNAME ]
#### 							begin while [ SRCS != "" ]
#### 								set local SRC = [ SRCS left "," ]
#### 								set local SRCS = [ SRCS right "," ]
#### 								set global EXTRA_SRCS = EXTRA_SRCS`,'SRC
#### 							end while
#### 							set local I = [ I + 1 ]
#### 							set local SRCNAME = [ SRCLIST [ I ]
#### 						end while
#### 						set global EXTRA_SRCS = [ EXTRA_SRCS ]
#### 						
#### 						set global EXTRA_LIBS = 
#### 						set local LIBLIST = allvalues EXTRA_LIBS_
#### 						set local I = 1
#### 						set local LIBNAME = [ LIBLIST [ I ]
#### 						begin while [ LIBNAME != "" ]
#### 							set local LIBS = [ value LIBNAME ]
#### 							begin while [ LIBS != "" ]
#### 								set local LIB = [ LIBS left "," ]
#### 								set local LIBS = [ LIBS right "," ]
#### 								set global EXTRA_LIBS = EXTRA_LIBS LIB
#### 							end while
#### 							set local I = [ I + 1 ]
#### 							set local LIBNAME = [ LIBLIST [ I ]
#### 						end while
#### 					end pattern options


#### 					begin pattern interface
#### 						begin if [ SHORTNAMES ]
#### 							set global PROJ5 = [ NAME left 5 ]
#### 							set global UPROJ5 = [ upper PROJ5 ]
#### 							set global LPROJ5 = [ lower PROJ5 ]
#### 							set global PROJ6 = [ NAME left 6 ]
#### 							set global UPROJ6 = [ upper PROJ6 ]
#### 							set global LPROJ6 = [ lower PROJ6 ]
#### 							set global PROJ8 = [ NAME left 8 ]
#### 							set global UPROJ8 = [ upper PROJ8 ]
#### 							set global LPROJ8 = [ lower PROJ8 ]
#### 						ifelse
#### 							set global PROJ5 = NAME
#### 							set global UPROJ5 = [ upper NAME ]
#### 							set global LPROJ5 = NAME
#### 							set global PROJ6 = NAME
#### 							set global UPROJ6 = [ upper NAME ]
#### 							set global LPROJ6 = NAME
#### 							set global PROJ8 = NAME
#### 							set global UPROJ8 = [ upper NAME ]
#### 							set global LPROJ8 = NAME
#### 						end if
#### 					end pattern interface

#### 					begin pattern module
#### 						begin if [ SHORTNAMES ]
#### 							set local MOD5 = [ NAME left 5 ]
#### 							set local UMOD5 = [ upper MOD5 ]
#### 							set local LMOD5 = [ lower MOD5 ]
#### 							set local MOD6 = [ NAME left 6 ]
#### 							set local UMOD6 = [ upper MOD6 ]
#### 							set local LMOD6 = [ lower MOD6 ]
#### 							set local MOD8 = [ NAME left 8 ]
#### 							set local UMOD8 = [ upper MOD8 ]
#### 							set local LMOD8 = [ lower MOD8 ]
#### 						ifelse
#### 							set local MOD5 = NAME
#### 							set local UMOD5 = [ upper NAME ]
#### 							set local LMOD5 = NAME
#### 							set local MOD6 = NAME
#### 							set local UMOD6 = [ upper NAME ]
#### 							set local LMOD6 = NAME
#### 							set local MOD8 = NAME
#### 							set local UMOD8 = [ upper NAME ]
#### 							set local LMOD8 = NAME
#### 						end if
#### 					end pattern module

# TARGTYPE "Win32 (x86) Application" 0x0101

#### 					begin pattern interface
#### 							set local CFGNAME = `PROJ5'` - '
#### !IF "$(CFG)" == ""
#### CFG=`CFGNAME'Win32 Debug
#### !MESSAGE No configuration specified.  Defaulting to `CFGNAME'Win32 Debug.
#### `!MESSAGE '
#### !MESSAGE This Makefile may have been generated with XFaceMaker/Win
#### 						begin if [ MSVCVERSION == 4 ]
#### !MESSAGE for Microsoft Visual C++ 4.0.
#### 						elseif [ MSVCVERSION == 5 ]
#### !MESSAGE for Microsoft Visual C++ 5.0.
#### 						end if
#### `!MESSAGE '
#### !MESSAGE To re-generate for Microsoft Visual C++ 2.0, 4.0, 5.0,
#### !MESSAGE set your Unix environment variable XFM_WINDOWS_MSVC_VERSION
#### !MESSAGE to 2, 4 or 5 and rebuild Windows source files.
#### `!MESSAGE '
#### !ENDIF
#### 
#### 						begin if [ MSVCVERSION == 4 ]
#### !IF "$(CFG)" == "Win32 Debug" || "$(CFG)" == "Win32 Release"
#### !MESSAGE Invalid configuration "$(CFG)" specified.
#### `!MESSAGE '
#### !MESSAGE This Makefile was generated with XFaceMaker/Win
#### 						begin if [ MSVCVERSION == 4 ]
#### !MESSAGE for Microsoft Visual C++ 4.0.
#### 						elseif [ MSVCVERSION == 5 ]
#### !MESSAGE for Microsoft Visual C++ 5.0.
#### 						end if
#### `!MESSAGE '
#### !MESSAGE To re-generate for Microsoft Visual C++ 2.0, 4.0, 5.0,
#### !MESSAGE set your Unix environment variable XFM_WINDOWS_MSVC_VERSION
#### !MESSAGE to 2, 4 or 5 and rebuild Windows source files.
#### `!MESSAGE '
#### !ERROR An invalid configuration is specified.
#### !ENDIF
#### 
#### 						ifelse
#### 							set local CFGNAME = `'
#### 						end if
#### !IF "$(CFG)" != "`CFGNAME'Win32 Debug" && "$(CFG)" != "`CFGNAME'Win32 Release"
#### !MESSAGE Invalid configuration "$(CFG)" specified.
#### !MESSAGE You can specify a configuration when running NMAKE on this makefile
#### !MESSAGE by defining the macro CFG on the command line.  For example:
#### `!MESSAGE '
#### !MESSAGE NMAKE /f "`LPROJ8'.mak" CFG="`CFGNAME'Win32 Debug"
#### `!MESSAGE '
#### !MESSAGE Possible choices for configuration are:
#### `!MESSAGE '
#### !MESSAGE "`CFGNAME'Win32 Debug" (based on "Win32 (x86) Application")
#### !MESSAGE "`CFGNAME'Win32 Release" (based on "Win32 (x86) Application")
#### `!MESSAGE '
#### !ERROR An invalid configuration is specified.
#### !ENDIF
#### 						begin if [ MSVCVERSION == 4 || MSVCVERSION == 5 ]
#### 
#### !IF "$(OS)" == "Windows_NT"
#### NULL=
#### !ELSE 
#### NULL=nul
#### !ENDIF 
#### 							set local DIRNULL = $(NULL)
#### 						ifelse
#### 							set local DIRNULL = nul
#### 						end if
#### 					end pattern interface

################################################################################
# Begin Project
# PROP Target_Last_Scanned "Win32 Debug"
MTL=MkTypLib.exe
CPP=cl.exe
RSC=rc.exe

#### 					begin pattern interface
#### !IF  "$(CFG)" == "`CFGNAME'Win32 Debug"
#### 					end pattern interface

# PROP BASE Use_MFC 6
# PROP BASE Use_Debug_Libraries 1
# PROP BASE Output_Dir "WinDebug"
# PROP BASE Intermediate_Dir "WinDebug"
# PROP Use_MFC 6
# PROP Use_Debug_Libraries 1
# PROP Output_Dir "WinDebug"
# PROP Intermediate_Dir "WinDebug"
OUTDIR=.\WinDebug
INTDIR=.\WinDebug

#### 					begin pattern interface
#### 						begin if [ GENERATEBROWSEINFO ]
#### ALL : $(OUTDIR)/`LPROJ8'.exe $(OUTDIR)/LPROJ8.bsc
#### 						ifelse
#### ALL : $(OUTDIR)/`LPROJ8'.exe
#### 						end if
#### 					end pattern interface

#### 					begin pattern interface [ MSVCVERSION == 4 || MSVCVERSION == 5 ]
#### CLEAN : 
#### 	-@erase $(INTDIR)/stdafx.obj
#### 						begin if [ MSVCVERSION == 5 ]
#### 	-@erase $(INTDIR)/vc50.pdb
#### 	-@erase $(INTDIR)/vc50.idb
#### 						ifelse
#### 	-@erase $(INTDIR)/vc40.pdb
#### 	-@erase $(INTDIR)/vc40.idb
#### 						end if
#### 					end pattern interface
#### 					begin pattern module [ MSVCVERSION == 4 || MSVCVERSION == 5 ]
#### 	-@erase $(INTDIR)/`LMOD5'Xfm.obj
#### 					end pattern module
#### 					begin pattern interface [ MSVCVERSION == 4 || MSVCVERSION == 5 ]
#### 	-@erase $(OUTDIR)/`LPROJ8'.exe
#### 	-@erase $(INTDIR)/`LPROJ8'.obj
#### 	-@erase $(INTDIR)/`LPROJ8'.pch
#### 	-@erase $(INTDIR)/`LPROJ5'App.obj
#### 	##-@erase $(INTDIR)/EXTRA_OBJS#\n#
#### 	-@erase $(INTDIR)/`LPROJ8'.res
#### 	-@erase $(INTDIR)/`LPROJ8'.ilk
#### 	-@erase $(INTDIR)/`LPROJ8'.pdb
#### 					end pattern interface

#### 					begin pattern interface
#### $(OUTDIR) : 
####     if not exist $(OUTDIR)/DIRNULL mkdir $(OUTDIR)
#### 
#### 						begin if [ GENERATEBROWSEINFO ]
#### `# 'ADD BASE CPP /nologo /MD /W3 /GX /Zi /Od /D "_DEBUG" XFMWINFLAGS /D "WIN32" /D "_WINDOWS" /D "_MBCS" /D "_AFXDLL" /FR /Yu"stdafx.h" /c
#### `# 'ADD CPP /nologo /MD /W3 /GX /Zi /Od /D "_DEBUG" XFMWINFLAGS /D "WIN32" /D "_WINDOWS" /D "_MBCS" /D "_AFXDLL" /FR /Yu"stdafx.h" /c
#### CPP_PROJ=/nologo /MD /W3 /GX /Zi /Od /D "_DEBUG" XFMWINFLAGS /D "WIN32" /D "_WINDOWS" /D\\
####  "_MBCS" /D "_AFXDLL" /FR$(INTDIR)/ /Fp$(OUTDIR)/"`LPROJ8'.pch" /Yu"stdafx.h"\\
####  /Fo$(INTDIR)/ /Fd$(OUTDIR)/"`LPROJ8'.pdb" /c 
####  						ifelse
#### `# 'ADD BASE CPP /nologo /MD /W3 /GX /Zi /Od /D "_DEBUG" XFMWINFLAGS /D "WIN32" /D "_WINDOWS" /D "_MBCS" /D "_AFXDLL" /Yu"stdafx.h" /c
#### `# 'ADD CPP /nologo /MD /W3 /GX /Zi /Od /D "_DEBUG" XFMWINFLAGS /D "WIN32" /D "_WINDOWS" /D "_MBCS" /D "_AFXDLL" /Yu"stdafx.h" /c
#### CPP_PROJ=/nologo /MD /W3 /GX /Zi /Od /D "_DEBUG" XFMWINFLAGS /D "WIN32" /D "_WINDOWS" /D\\
####  "_MBCS" /D "_AFXDLL" /Fp$(OUTDIR)/"`LPROJ8'.pch" /Yu"stdafx.h"\\
####  /Fo$(INTDIR)/ /Fd$(OUTDIR)/"`LPROJ8'.pdb" /c 
####  						end if
#### 					end pattern interface
CPP_OBJS=.\WinDebug/
# ADD BASE RSC /l 0x409 /d "_DEBUG" /d "_AFXDLL"
# ADD RSC /l 0x409 /d "_DEBUG" /d "_AFXDLL"
#### 					begin pattern interface
#### RSC_PROJ=/l 0x409 /fo$(INTDIR)/"`LPROJ8'.res" /d "_DEBUG" /d "_AFXDLL" /v
#### 						begin if [ GENERATEBROWSEINFO ]
#### BSC32=bscmake.exe
#### `# 'ADD BASE BSC32 /nologo
#### `# 'ADD BSC32 /nologo
#### BSC32_FLAGS=/nologo /o$(OUTDIR)/"`LPROJ8'.bsc" 
#### 						end if
#### 					end pattern interface
#### 					begin pattern module
#### 						begin if [ GENERATEBROWSEINFO ]
#### BSC32_SBRS= \\
#### 	$(INTDIR)/stdafx.sbr \\
#### 	$(INTDIR)/`LMOD5'Xfm.sbr \\
#### 						end if
#### 					end pattern module
#### 					begin pattern interface
#### 						begin if [ GENERATEBROWSEINFO ]
#### 	$(INTDIR)/`LPROJ8'.sbr \\
#### 	$(INTDIR)/`LPROJ5'App.sbr
#### 
#### $(OUTDIR)/`LPROJ8'.bsc : $(OUTDIR)  $(BSC32_SBRS)
####     $(BSC32) @<<
####   $(BSC32_FLAGS) $(BSC32_SBRS)
#### <<
#### 
#### 						end if
#### 					end pattern interface


LINK32=link.exe
# ADD BASE LINK32 /NOLOGO /SUBSYSTEM:windows /DEBUG /MACHINE:I386
# SUBTRACT BASE LINK32 /PDB:none
#### 					begin pattern interface
#### 						begin if [ MSVCVERSION == 5 ]
#### 							set local XTRALIBS = `xfmw50d.lib /NODEFAULTLIB:"msvcrt"'
#### 						elseif [ MSVCVERSION == 4 ]
#### 							set local XTRALIBS = `xfmw40d.lib /NODEFAULTLIB:"msvcrt"'
#### 						ifelse
#### 							set local XTRALIBS = `xfmw20d.lib'
#### 						end if
#### 						begin if [ CLIENTSERVERMODE == true ]
#### 							set local XTRALIBS = XTRALIBS` wsock32.lib'
#### 						end if
#### `# ADD LINK32' `XTRALIBS' ##EXTRA_LIBS# # /NOLOGO /SUBSYSTEM:windows /DEBUG /MACHINE:I386
#### `# SUBTRACT LINK32' /PDB:none
#### LINK32_FLAGS= `XTRALIBS' /NOLOGO /SUBSYSTEM:windows /INCREMENTAL:yes /VERBOSE\\
####  /PDB:$(OUTDIR)/"`LPROJ8'.pdb" /DEBUG /MACHINE:I386 /OUT:$(OUTDIR)/"PROJ8.exe" 
#### 					end pattern interface
DEF_FILE=

LINK32_OBJS= \
	$(INTDIR)/stdafx.obj \
#### 					begin pattern module
#### 	$(INTDIR)/`LMOD5'Xfm.obj \\
#### 					end pattern module
#### 					begin pattern interface
#### 	$(INTDIR)/`LPROJ8'.obj \\
#### 	$(INTDIR)/`LPROJ5'App.obj \\
#### 	##$(INTDIR)/EXTRA_OBJS# #\\
#### 	$(INTDIR)/`LPROJ8'.res
#### 					end pattern interface

#### 					begin pattern interface
#### $(OUTDIR)/`LPROJ8'.exe : $(OUTDIR)  $(DEF_FILE) $(LINK32_OBJS)
#### 					end pattern interface
    $(LINK32) @<<
  $(LINK32_FLAGS) $(LINK32_OBJS)
<<

#### 					begin pattern interface
#### !ELSEIF  "$(CFG)" == "`CFGNAME'Win32 Release"
#### 					end pattern interface

# PROP BASE Use_MFC 6
# PROP BASE Use_Debug_Libraries 0
# PROP BASE Output_Dir "WinRel"
# PROP BASE Intermediate_Dir "WinRel"
# PROP Use_MFC 6
# PROP Use_Debug_Libraries 0
# PROP Output_Dir "WinRel"
# PROP Intermediate_Dir "WinRel"
OUTDIR=.\WinRel
INTDIR=.\WinRel

#### 					begin pattern interface
#### 						begin if [ GENERATEBROWSEINFO ]
#### ALL : $(OUTDIR)/`LPROJ8'.exe $(OUTDIR)/LPROJ8.bsc
#### 						ifelse
#### ALL : $(OUTDIR)/`LPROJ8'.exe
#### 						end if
#### 					end pattern interface

#### 					begin pattern interface [ MSVCVERSION == 4 || MSVCVERSION == 5 ]
#### CLEAN : 
#### 	-@erase $(INTDIR)/stdafx.obj
#### 					end pattern interface
#### 					begin pattern module [ MSVCVERSION == 4 || MSVCVERSION == 5 ]
#### 	-@erase $(INTDIR)/`LMOD5'Xfm.obj
#### 					end pattern module
#### 					begin pattern interface [ MSVCVERSION == 4 || MSVCVERSION == 5 ]
#### 	-@erase $(OUTDIR)/`LPROJ8'.exe
#### 	-@erase $(INTDIR)/`LPROJ8'.obj
#### 	-@erase $(INTDIR)/`LPROJ8'.pch
#### 	-@erase $(INTDIR)/`LPROJ5'App.obj
#### 	##-@erase $(INTDIR)/EXTRA_OBJS#\n#
#### 	-@erase $(INTDIR)/`LPROJ8'.res
#### 					end pattern interface

#### 					begin pattern interface
#### $(OUTDIR) : 
####     if not exist $(OUTDIR)/DIRNULL mkdir $(OUTDIR)
#### 
#### 						begin if [ GENERATEBROWSEINFO ]
#### `# 'ADD BASE CPP /nologo /MD /W3 /GX /O2 /D "NDEBUG" XFMWINFLAGS /D "WIN32" /D "_WINDOWS" /D "_MBCS" /D "_AFXDLL" /FR /Yu"stdafx.h" /c
#### `# 'ADD CPP /nologo /MD /W3 /GX /O2 /D "NDEBUG" XFMWINFLAGS /D "WIN32" /D "_WINDOWS" /D "_MBCS" /D "_AFXDLL" /FR /Yu"stdafx.h" /c
#### CPP_PROJ=/nologo /MD /W3 /GX /O2 /D "NDEBUG" XFMWINFLAGS /D "WIN32" /D "_WINDOWS" /D\\
####  "_MBCS" /D "_AFXDLL" /FR$(INTDIR)/ /Fp$(OUTDIR)/"`LPROJ8'.pch" /Yu"stdafx.h"\\
####  						ifelse
#### `# 'ADD BASE CPP /nologo /MD /W3 /GX /O2 /D "NDEBUG" XFMWINFLAGS /D "WIN32" /D "_WINDOWS" /D "_MBCS" /D "_AFXDLL" /Yu"stdafx.h" /c
#### `# 'ADD CPP /nologo /MD /W3 /GX /O2 /D "NDEBUG" XFMWINFLAGS /D "WIN32" /D "_WINDOWS" /D "_MBCS" /D "_AFXDLL" /Yu"stdafx.h" /c
#### CPP_PROJ=/nologo /MD /W3 /GX /O2 /D "NDEBUG" XFMWINFLAGS /D "WIN32" /D "_WINDOWS" /D\\
####  "_MBCS" /D "_AFXDLL" /Fp$(OUTDIR)/"`LPROJ8'.pch" /Yu"stdafx.h"\\
####  						end if
#### 					end pattern interface
 /Fo$(INTDIR)/ /c 
CPP_OBJS=.\WinRel/
# ADD BASE RSC /l 0x409 /d "NDEBUG" /d "_AFXDLL"
# ADD RSC /l 0x409 /d "NDEBUG" /d "_AFXDLL"
#### 					begin pattern interface
#### RSC_PROJ=/l 0x409 /fo$(INTDIR)/"`LPROJ8'.res" /d "NDEBUG" /d "_AFXDLL" 
#### 						begin if [ GENERATEBROWSEINFO ]
#### BSC32=bscmake.exe
#### `# 'ADD BASE BSC32 /nologo
#### `# 'ADD BSC32 /nologo
#### BSC32_FLAGS=/nologo /o$(OUTDIR)/"`LPROJ8'.bsc" 
#### 						end if
#### 					end pattern interface
#### 					begin pattern module
#### 						begin if [ GENERATEBROWSEINFO ]
#### BSC32_SBRS= \\
#### 	$(INTDIR)/stdafx.sbr \\
#### 	$(INTDIR)/`LMOD5'Xfm.sbr \\
#### 						end if
#### 					end pattern module
#### 					begin pattern interface
#### 						begin if [ GENERATEBROWSEINFO ]
#### 	$(INTDIR)/`LPROJ8'.sbr \\
#### 	$(INTDIR)/`LPROJ5'App.sbr
#### 
#### $(OUTDIR)/`LPROJ8'.bsc : $(OUTDIR)  $(BSC32_SBRS)
####     $(BSC32) @<<
####   $(BSC32_FLAGS) $(BSC32_SBRS)
#### <<
#### 
#### 						end if
#### 					end pattern interface

LINK32=link.exe
# ADD BASE LINK32 /NOLOGO /SUBSYSTEM:windows /MACHINE:I386
# SUBTRACT BASE LINK32 /PDB:none
#### 					begin pattern interface
#### 						begin if [ MSVCVERSION == 5 ]
#### 							set local XTRALIBS = `xfmw50.lib'
#### 						elseif [ MSVCVERSION == 4 ]
#### 							set local XTRALIBS = `xfmw40.lib'
#### 						ifelse
#### 							set local XTRALIBS = `xfmw20.lib'
#### 						end if
#### 						begin if [ CLIENTSERVERMODE == true ]
#### 							set local XTRALIBS = XTRALIBS` wsock32.lib'
#### 						end if
#### `# ADD LINK32' `XTRALIBS' ##EXTRA_LIBS# # /NOLOGO /SUBSYSTEM:windows /DEBUG /MACHINE:I386
#### `# SUBTRACT LINK32' /PDB:none
#### LINK32_FLAGS= `XTRALIBS' /NOLOGO /SUBSYSTEM:windows /INCREMENTAL:yes /VERBOSE\\
####  /PDB:$(OUTDIR)/"`LPROJ8'.pdb" /DEBUG /MACHINE:I386 /OUT:$(OUTDIR)/"PROJ8.exe" 
#### `# ADD LINK32' `XTRALIBS' /NOLOGO /SUBSYSTEM:windows /MACHINE:I386
#### `# SUBTRACT LINK32' /PDB:none
#### LINK32_FLAGS=`XTRALIBS' /NOLOGO /SUBSYSTEM:windows /INCREMENTAL:no\\
####  /PDB:$(OUTDIR)/"`LPROJ8'.pdb" /MACHINE:I386 /OUT:$(OUTDIR)/"PROJ8.exe" 
#### 					end pattern interface
DEF_FILE=
LINK32_OBJS= \
	$(INTDIR)/stdafx.obj \
#### 					begin pattern module
#### 	$(INTDIR)/`LMOD5'Xfm.obj \\
#### 					end pattern module
#### 					begin pattern interface
#### 	$(INTDIR)/`LPROJ8'.obj \\
#### 	$(INTDIR)/`LPROJ5'App.obj \\
#### 	##$(INTDIR)/EXTRA_OBJS# #\\
#### 	$(INTDIR)/`LPROJ8'.res
#### 					end pattern interface

#### 					begin pattern interface
#### $(OUTDIR)/`LPROJ8'.exe : $(OUTDIR)  $(DEF_FILE) $(LINK32_OBJS)
#### 					end pattern interface
    $(LINK32) @<<
  $(LINK32_FLAGS) $(LINK32_OBJS)
<<

!ENDIF 

MTL_PROJ=

.c{$(CPP_OBJS)}.obj:
   $(CPP) $(CPP_PROJ) $<  

.cpp{$(CPP_OBJS)}.obj:
   $(CPP) $(CPP_PROJ) $<  

.cxx{$(CPP_OBJS)}.obj:
   $(CPP) $(CPP_PROJ) $<  

.c{$(CPP_SBRS)}.sbr:
   $(CPP) $(CPP_PROJ) $<  

.cpp{$(CPP_SBRS)}.sbr:
   $(CPP) $(CPP_PROJ) $<  

.cxx{$(CPP_SBRS)}.sbr:
   $(CPP) $(CPP_PROJ) $<  

#### 					begin pattern interface
#### 						begin if [ MSVCVERSION == 4 || MSVCVERSION == 5 ]
#### `################################################################################'
#### `# Begin Target'
#### 
#### `# Name' "`CFGNAME'Win32 Debug"
#### `# Name' "`CFGNAME'Win32 Release"
#### 
#### !IF  "$(CFG)" == "`CFGNAME'Win32 Debug"
#### 
#### !ELSEIF  "$(CFG)" == "`CFGNAME'Win32 Release"
#### 
#### !ENDIF 
#### 						ifelse
#### `################################################################################'
#### `# Begin Group "Source Files"'
#### 						end if
#### 					end pattern interface

################################################################################
# Begin Source File

SOURCE=.\stdafx.cpp
DEP_STDAF=\
	.\stdafx.h

#### 					begin pattern interface
#### !IF  "$(CFG)" == "`CFGNAME'Win32 Debug"
#### 					end pattern interface

# ADD BASE CPP /Yc"stdafx.h"
# ADD CPP /Yc"stdafx.h"

$(INTDIR)/stdafx.obj :  $(SOURCE)  $(DEP_STDAF) $(INTDIR)
   $(CPP) /nologo /MD /W3 /GX /Zi /Od /D "_DEBUG" /D "WIN32" /D "_WINDOWS" /D\
#### 					begin pattern interface
#### 						begin if [ GENERATEBROWSEINFO ]
####  "_MBCS" /D "_AFXDLL" /FR$(INTDIR)/ /Fp$(OUTDIR)/"`LPROJ8'.pch" /Yc"stdafx.h"\\
####  /Fo$(INTDIR)/ /Fd$(OUTDIR)/"`LPROJ8'.pdb" /c  $(SOURCE) 
####  						ifelse
####  "_MBCS" /D "_AFXDLL" /Fp$(OUTDIR)/"`LPROJ8'.pch" /Yc"stdafx.h"\\
####  /Fo$(INTDIR)/ /Fd$(OUTDIR)/"`LPROJ8'.pdb" /c  $(SOURCE) 
####  						end if
#### 					end pattern interface

#### 					begin pattern interface
#### !ELSEIF  "$(CFG)" == "`CFGNAME'Win32 Release"
#### 					end pattern interface

# ADD BASE CPP /Yc"stdafx.h"
# ADD CPP /Yc"stdafx.h"

$(INTDIR)/stdafx.obj :  $(SOURCE)  $(DEP_STDAF) $(INTDIR)
   $(CPP) /nologo /MD /W3 /GX /O2 /D "NDEBUG" /D "WIN32" /D "_WINDOWS" /D\
#### 					begin pattern interface
#### 						begin if [ GENERATEBROWSEINFO ]
####  "_MBCS" /D "_AFXDLL" /FR$(INTDIR)/ /Fp$(OUTDIR)/"`LPROJ8'.pch" /Yc"stdafx.h"\\
####  						ifelse
####  "_MBCS" /D "_AFXDLL" /Fp$(OUTDIR)/"`LPROJ8'.pch" /Yc"stdafx.h"\\
####  						end if
#### 					end pattern interface
 /Fo$(INTDIR)/ /c  $(SOURCE) 

!ENDIF 

# End Source File
################################################################################
# Begin Source File

#### 					begin pattern interface
#### SOURCE=.\\`LPROJ8'.cpp
#### DEP_`UPROJ8'_=\\
#### 					end pattern interface
#### 					begin pattern module
#### 	.\\`LMOD5'Xfm.h\\
#### 					end pattern module
#### 					begin pattern interface
#### 	.\\`LPROJ5'App.h\\
#### 	.\\`LPROJ8'.h
#### 					end pattern interface

#### 					begin pattern interface
#### $(INTDIR)/`LPROJ8'.obj :  $(SOURCE)  $(DEP_`UPROJ8'_) $(INTDIR) $(INTDIR)/stdafx.obj
#### 					end pattern interface

# End Source File
#### 					begin pattern module
#### 					set local DIEZE = #
#### `################################################################################'
#### `DIEZE' Begin Source File
#### 
#### SOURCE=.\\`LMOD5'Xfm.cpp
#### DEP_`UPROJ8'_XFM=\\
#### 	.\\`LPROJ8'.h\\
#### 	.\\`LPROJ5'App.h \\
#### 	.\\`LMOD5'Xfm.h
#### 
#### $(INTDIR)/`LMOD5'Xfm.obj :  $(SOURCE)  $(DEP_`UPROJ8'_XFM) $(INTDIR)\\
####  $(INTDIR)/stdafx.obj
#### 
#### `DIEZE' End Source File
#### 					end pattern module
################################################################################
# Begin Source File

#### 					begin pattern interface
#### SOURCE=.\\`LPROJ5'App.cpp
#### DEP_`UPROJ8'_APP=\\
#### 	.\\`LPROJ8'.h\\
#### 	.\\`LPROJ5'App.h
#### 					end pattern interface

#### 					begin pattern interface
#### $(INTDIR)/`LPROJ5'App.obj :  $(SOURCE)  $(DEP_`UPROJ8'_APP) $(INTDIR)\\
#### 					end pattern interface
 $(INTDIR)/stdafx.obj

# End Source File
#### 					begin pattern interface
#### 						set local SRCS = EXTRA_SRCS
#### 						begin while [ SRCS != "" ]
#### 							set local SRC = [ SRCS left "," ]
#### 							set local SRCS = [ SRCS right "," ]
#### 							begin if [ SRC != "" ]
#### 								set local OBJ = [ SRC left ".cpp" ]
#### 								set local OBJ = OBJ.obj
#### `################################################################################'
#### `# Begin Source File'
#### 
#### SOURCE=.\\SRC
#### 
#### $(INTDIR)/OBJ :  $(SOURCE) $(INTDIR) $(INTDIR)/stdafx.obj
#### 
#### `# End Source File'
#### 							end if
#### 						end while
#### 					end pattern interface
################################################################################
# Begin Source File

#### 					begin pattern interface
#### SOURCE=.\\`LPROJ8'.rc
#### DEP_`UPROJ8'_R=\\
#### 					end pattern interface
#### 					begin pattern module
#### 	.\\`LMOD5'Xfm.rc\\
#### 	.\\`LMOD5'Fmr.h\\
#### 					end pattern module
#### 					begin pattern interface
#### 	.\\`LPROJ5'Res.h\\
#### 					end pattern interface

#### 					begin pattern interface
#### $(INTDIR)/`LPROJ8'.res :  $(SOURCE)  $(DEP_`UPROJ8'_R) $(INTDIR)
#### 					end pattern interface
   $(RSC) $(RSC_PROJ)  $(SOURCE) 

# End Source File
#### 					begin pattern interface
#### 						begin if [ MSVCVERSION == 4 || MSVCVERSION == 5 ]
#### `# End Target'
#### `# End Project'
#### `################################################################################'
#### 						ifelse
#### `# End Group'
#### `# End Project'
#### `################################################################################'
#### 						end if
#### 					end pattern interface
