# default target
bridgd: main.cpp Point.o
	gcc -Wall -g -o bridgd src/main.c build/indicator.o

# individual source files
indicator.o: indicator.h indicator.c
	gcc -Wall -g -c -o build/indicator.o indicator.c


clean:
	rm -f Point.o
	rm -f closestPair
