include ../../config/Xfm-demos.rules

# Makefile used to build the xfm examples

	      PR1 = Adder
	      PR2 = AdderAv
	      PR3 = AdderInt
         PROGRAMS = $(PR1) $(PR2) $(PR3)
  GENERATED_FILES = 	$(PR1).c $(PR1)App.h $(PR1)Main.c \
			$(PR2).c $(PR2)App.h $(PR2)Main.c \
			$(PR3).c $(PR3)App.h $(PR3)Main.c $(PR3).cat

.PHONY: $(PROGRAMS)

all:: $(PROGRAMS)

$(PR1):    $(PR1)Make $(PR1).fm $(PR1)App.c $(PR1)App.h $(PR1)Main.c $(PR1).exe $(PR1).editor

$(PR2):    $(PR2)Make $(PR2).fm $(PR2)App.c $(PR2)App.h $(PR2)Main.c $(PR2).exe $(PR2).editor

$(PR3):    $(PR3)Make $(PR3).fm $(PR3)App.c $(PR3)App.h $(PR3)Main.c $(PR3).exe $(PR3).editor
	gencat AdderInt.cat AdderInt_f.msg

