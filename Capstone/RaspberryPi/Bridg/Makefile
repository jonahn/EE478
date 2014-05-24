# default target
bridgd: src/main.c indicator.o ../../Shared/settings.h
	gcc -Wall -pthread -g -o bridgd src/main.c build/indicator.o src/mp3_data.c -lwiringPi

# individual source files
indicator.o: src/indicator.h src/indicator.c ../../Shared/settings.h
	mkdir -p build
	gcc -Wall -pthread -g -c -o build/indicator.o src/indicator.c -lwiringPi


clean:
	rm -f Point.o
	rm -f closestPair
