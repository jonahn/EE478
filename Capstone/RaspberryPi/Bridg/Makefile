# default target
bridgd: src/main.c indicator.o
	gcc -Wall -pthread -g -o bridgd src/main.c build/indicator.o

# individual source files
indicator.o: src/indicator.h src/indicator.c
	mkdir -p build
	gcc -Wall -pthread -g -c -o build/indicator.o src/indicator.c -lwiringPi


clean:
	rm -f Point.o
	rm -f closestPair
