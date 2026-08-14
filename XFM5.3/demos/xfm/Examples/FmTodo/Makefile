   #PRJ:chemin du repertoire du projet
   PRJ = .
   PRJ_INCPATH = -I.
   PRJ_LIBPATH = 
   PRJ_LIB = 

   #xfm nom de l'executable de XFM 
   XFM = xfm
   XFMCFLAGS = -cflags "caC"
   XFMCLFLAGS = -cflags "caCg"

.PHONY: clean,all,sh

      LIBTOOL = libtool
      LIBTOOL_COMPILE = $(LIBTOOL) --mode=compile
      LIBTOOL_LINK    = $(LIBTOOL) --mode=link
      LIBTOOL_EXEC    = $(LIBTOOL) --mode=execute
      LIBTOOL_CLEAN   = $(LIBTOOL) --mode=clean
      LIBTOOL_INSTALL = $(LIBTOOL) --mode=install

ifeq ($(LIBTOOL),libtool)
	OBJ=.lo
else
	OBJ=.o
endif
 #genere les fichiers *.c à partir des *.fm
.SUFFIXES: .lo .c .fm

MOTIF_INCPATH = -I$(MOTIFHOME)/include
MOTIF_LIBPATH = -L$(MOTIFHOME)/lib64
MOTIF_LIBNAME = -lXm

   XT_INCPATH =  -I/usr/include
   XT_LIBPATH =  -L/usr/lib64
   XT_LIBNAME = -lXt  -lSM -lICE -lXp

 XLIB_INCPATH =  -I/usr/include
 XLIB_LIBPATH =  -L/usr/lib64
 XLIB_LIBNAME = -lX11

 XEXT_INCPATH =  -I/usr/include
 XEXT_LIBPATH =  -L/usr/lib64
 XEXT_LIBNAME = -lXext

XFM_I_LIBNAME = -lFm
XNSLCTRL_LIBNAME = -lXnsl

XFM_C_LIBNAME = -lFm_c


 #Listes des repertoires includes et des librairies
EXTRA_INCPATH = -I. -I$(NSLHOME)/include  -I$(NSLHOME)/include $(LOC_INCPATH) $(PRJ_INCPATH)

EXTRA_LIBPATH = -L. -L$(NSLHOME)/lib $(LOC_LIBPATH) $(PRJ_LIBPATH)

EXTRA_C_LIBS =  $(PRJ_LIB) 

#### end `interface' test

   XM_INCPATH = $(MRM_INCPATH) $(MOTIF_INCPATH) $(XT_INCPATH) $(XEXT_INCPATH) $(XLIB_INCPATH)

    A_INCPATH = -I. $(EXTRA_INCPATH) $(XM_INCPATH)
    E_INCPATH = -I. $(EXTRA_INCPATH) $(XM_INCPATH)
       X_LIBS =  $(XT_LIBPATH) $(XT_LIBNAME) $(XEXT_LIBPATH) $(XEXT_LIBNAME) $(XLIB_LIBPATH) $(XLIB_LIBNAME)
   MOTIF_LIBS =  $(MRM_LIBPATH) $(MRM_LIBNAME) $(MOTIF_LIBPATH) $(MOTIF_LIBNAME) $(X_LIBS)

     SYS_LIBS =

   SYS_CFLAGS =  -DMOTIF_1_2 -DMOTIF_2_1 -DHAS_GLS -DINTERNATIONALIZATION
  SYS_LDFLAGS =
  CDEBUGFLAGS = #-DDEBUG

    CCODEOPTS = -DCCODE

     STD_LIBS = $(MOTIF_LIBS) -lm $(SYS_LIBS)

    A_LIBPATH = -L. $(EXTRA_LIBPATH)
    E_LIBPATH = -L. $(EXTRA_LIBPATH)

   XFM_I_LIBS = $(XFM_I_LIBNAME)
   XFM_C_LIBS = $(XFM_C_LIBNAME) $(XNSLCTRL_LIBNAME)
   XFM_E_LIBS = $(XFM_E_LIBNAME)

     A_CFLAGS = $(A_INCPATH) $(SYS_CFLAGS) $(CDEBUGFLAGS)
     E_CFLAGS = $(A_INCPATH) $(SYS_CFLAGS) $(CDEBUGFLAGS)
       CFLAGS = $(E_CFLAGS)

    A_LDFLAGS = $(A_LIBPATH) $(SYS_LDFLAGS) $(CDEBUGFLAGS)
    E_LDFLAGS = $(E_LIBPATH) $(SYS_LDFLAGS) $(CDEBUGFLAGS)

           RM = rm -rf
           CP = cp
           LN = ln -s
#************************************************************************************ 
# Sous-Makefile localiser dans le repertoire utility

all:: compiled	

compiled:: todo


#############################################################################################
 #recherche des fichiers *.c et *.c provenants de fichier *.fm
SRC= $(SRCFM:.fm=.c) $(wildcard *.c)
 # recherche des fichier .fm
SRCFM=$(wildcard *.fm)
OBJET= $(SRC:.c=$(OBJ))

#############################################################################################

 #creation de la cible binaire gravimetrie

todo: $(OBJET)
	$(LIBTOOL_LINK) $(CC) $(A_LDFLAGS) -o $@ $^ \
	$(EXTRA_C_LIBS) $(XFM_C_LIBS) $(STD_LIBS)

##########################################################################################################

todo.c:
	$(XFM) -compile -cflags cCG todo.fm \
                -preserve \
                -cfile todo.c -cname todo


FileSel.c:
	$(XFM) -compile -cflags cCG FileSel.fm \
		-preserve \
		-cfile FileSel.c -cname FileSel

clean:
	$(RM) core emergency.fm
	$(LIBTOOL) --mode=clean $(RM) *$(OBJ)

cleanall:: clean
	$(RM) todo.c FileSel.c *~
	$(RM) todo


 #genere les fichiers *.lo à partir des *.c
.SUFFIXES: .lo

.c.lo:
	$(LIBTOOL_COMPILE) $(CC) $(A_CFLAGS) $(CCODEOPTS) -c $?
