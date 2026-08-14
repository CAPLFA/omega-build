#!/bin/sh

NSLHOME=/opt/NSL/XFM5.3
XRTHOME=NONE
export NSLHOME
export XRTHOME
PATH=$NSLHOME/bin:$PATH
if [ "$XRTHOME" != "NONE" ] ; then
  PATH=$XRTHOME/bin:$PATH
fi
export PATH
if [ "x$LD_LIBRARY_PATH" != x ] ; then
	LD_LIBRARY_PATH=$NSLHOME/lib:$LD_LIBRARY_PATH
else
	LD_LIBRARY_PATH=$NSLHOME/lib
fi
if  [ "x$XBMLANGPATH" != x ] ; then
	XBMLANGPATH=$NSLHOME/lib/xfm/bitmaps/%B:$NSLHOME/lib/xnsl/bitmaps/%B:$XBMLANGPATH
else
	XBMLANGPATH=$NSLHOME/lib/xfm/bitmaps/%B:$NSLHOME/lib/xnsl/bitmaps/%B
fi
if  [ "x$MOTIFHOME" = x ] ; then
    MOTIFHOME=`echo /usr/lib | sed -e "s|\/lib||g"`
    PATH=$MOTIFHOME/bin:$PATH
    export PATH
    if [ "x$LD_LIBRARY_PATH" != x ] ; then
	    LD_LIBRARY_PATH=$MOTIFHOME/lib:$LD_LIBRARY_PATH
    else
	    LD_LIBRARY_PATH=$MOTIFHOME/lib
    fi
#    if [ "x$MANPATH" != x ] ; then
#	MANPATH=$MOTIFHOME/man:$MANPATH
#    else
#	MANPATH=$MOTIFHOME/man
#    fi
    export MOTIFHOME
    export LD_LIBRARY_PATH
    export MANPATH
fi


export XBMLANGPATH
export LD_LIBRARY_PATH
XFM_LICENSE_NAME=xfm5
export XFM_LICENSE_NAME

DM_LICENSE_NAME=xdm2
export DM_LICENSE_NAME

WX_LICENSE_NAME=wx2
export WX_LICENSE_NAME


