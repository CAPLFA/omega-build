#!/bin/csh

setenv NSLHOME /opt/NSL/XFM5.3
setenv XRTHOME NONE
setenv PATH ${NSLHOME}/bin:${PATH}
if ( -d "$XRTHOME/bin" ) then
  setenv PATH $XRTHOME/bin:${PATH}
endif
if (${?LD_LIBRARY_PATH} == 1) then
	setenv LD_LIBRARY_PATH ${NSLHOME}/lib:${LD_LIBRARY_PATH}
else
	setenv LD_LIBRARY_PATH ${NSLHOME}/lib
endif
if (${?XBMLANGPATH} == 1) then
	setenv XBMLANGPATH ${NSLHOME}/lib/xfm/bitmaps/%B:$NSLHOME/lib/xnsl/bitmaps/%B:${XBMLANGPATH}
else
	setenv XBMLANGPATH ${NSLHOME}/lib/xfm/bitmaps/%B:$NSLHOME/lib/xnsl/bitmaps/%B
endif
setenv XFM_LICENSE_NAME xfm5

setenv DM_LICENSE_NAME xdm2

setenv WX_LICENSE_NAME wx2

