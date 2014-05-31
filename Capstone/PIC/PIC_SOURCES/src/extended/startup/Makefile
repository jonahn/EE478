CC=mcc18
CFLAGS=-ls --extended -ml -p18cxx
OBJECTS=c018i_e.o c018iz_e.o c018_e.o
LIB_DIR=../../../lib

all: $(OBJECTS)

install: all
	@if [ ! -d $(LIB_DIR) ]; then \
	  mkdir $(LIB_DIR); \
	fi

	mv $(OBJECTS) $(LIB_DIR)

clean:
	rm -fr $(OBJECTS)

.c.o:
	$(CC) $(CFLAGS) $<
