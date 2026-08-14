include ../../config/Xfm-demos.rules

# Makefile used to build the xfm examples

	      PR1 = Color
	      PR2 = ColorItem

         PROGRAMS = $(PR1)
  GENERATED_FILES = $(PR1)App.h $(PR1).c

.PHONY: $(PROGRAMS)

all:: $(PROGRAMS)

$(PR1):    $(PR1).fmp $(PR2).fm $(PR1)Make $(PR2).c $(PR1)App.c $(PR1)App.h $(PR1)Main.c $(PR1).exe

$(PR2).c:  $(PR2).fm

