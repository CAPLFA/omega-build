##############################################################################
#
# Makefile used to generate xfm examples
#
##############################################################################

        SUBDIRS = Adder     Age       Bounce    Classes      Color   \
		  Cross     CxxClass  DragDrop  MultiDisplay NewAvs \
		  FmCombo   FmTodo    FmFilemanager FmSetDate \
		  FmColumn  FmDropDown FmFilemanager FmIconB FmMultiList FmOutline \
		  FmTabStack FmTree


all::
	@case '${MFLAGS}' in *[ik]*) set +e;; esac; \
	for i in $(SUBDIRS) ;\
	do \
	(cd $$i ; echo "### Entering directory `pwd` ###"; \
	$(MAKE) $(MFLAGS)  all); \
	done


clean::
	@case '${MFLAGS}' in *[ik]*) set +e;; esac; \
	for i in $(SUBDIRS) ;\
	do \
	(cd $$i ; echo "### Entering directory `pwd` ###"; \
	$(MAKE) $(MFLAGS) RM_CMD='$(RM_CMD)' clean); \
	done


