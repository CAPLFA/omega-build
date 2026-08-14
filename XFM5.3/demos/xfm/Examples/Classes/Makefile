include ../../config/Xfm-demos.rules

# Makefile used to build the xfm examples

	      PR1 = NumField
	      PR2 = NumFieldExample
	      PR3 = AlertLabel
	      PR4 = AlertLabelExample
         PROGRAMS =  $(PR1) $(PR2) $(PR3) $(PR4) 
  GENERATED_FILES = 	$(PR1).c $(PR1).h $(PR1)P.h                   \
			$(PR2).c $(PR2)App.h $(PR2)App.c $(PR2)Main.c \
			$(PR3).c $(PR3).h $(PR3)P.h                   \
			$(PR4).c $(PR4)App.h $(PR4)App.c $(PR4)Main.c

.PHONY: $(PROGRAMS)

all:: $(PROGRAMS)

$(PR1):    $(PR1).fm $(PR1)Class

$(PR2):    $(PR2).fm $(PR2)Make $(PR2).exe

$(PR3):    $(PR3).fm $(PR3)Class

$(PR4):    $(PR4).fm $(PR4)Make $(PR4).exe

