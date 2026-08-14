include ../../config/Xfm-demos.rules

# Makefile used to build the xfm examples

	      PR1 = Edit
	      PR2 = Alert
	      PR3 = FileSel
	      PR4 = Help
         PROGRAMS = $(PR1)
  GENERATED_FILES = 	$(PR1)App.h $(PR1)Main.c \
			$(PR2).c $(PR3).c $(PR4).c

.PHONY: $(PROGRAMS)

all:: $(PROGRAMS)

FMFLAGS = -instclose -cflags vaC -cinclude \"EditApp.h\"

$(PR1):    $(PR1).fmp $(PR1).fm $(PR2).fm $(PR3).fm FileSel.fm Help.fm $(PR1)Make $(PR1)App.c $(PR1)Main.c $(PR1).exe $(PR1).editor
