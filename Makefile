SUBDIRS = libA libB source

all:
	@for dir in $(SUBDIRS); do\
          make -C $$dir $@ ;\
        done

%:
	@for dir in $(SUBDIRS); do\
          make -C $$dir $@ ;\
        done
