CC=mcc18
CFLAGS=-ls --no-extended -ml -p18cxx
OBJECTS=c018i.o c018iz.o c018.o
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
