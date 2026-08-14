include ../../config/Xfm-demos.rules

# Makefile used to build the xfm examples

	      PR1 = outlinedemo
	      PR2 = PBnodeC

         PROGRAMS = $(PR1)
  GENERATED_FILES = $(PR1)App.h $(PR1).c $(PR1)Main.c \
		    $(PR2).c $(PR2).h $(PR2)P.h

.PHONY: $(PROGRAMS)

all:: $(PROGRAMS)

$(PR1):    $(PR1).fmp $(PR2).fm $(PR1)Make $(PR2).c $(PR1)App.c $(PR1)App.h $(PR1)Main.c $(PR1).exe

$(PR2).c:  $(PR2).fm

