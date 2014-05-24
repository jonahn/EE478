# default target
bridgd: src/main.c indicator.o ../../Shared/settings.h mp3data.o
	gcc -Wall -pthread -g -o bridgd src/main.c build/indicator.o build/mp3data.o -lwiringPi

# individual source files
indicator.o: src/indicator.h src/indicator.c ../../Shared/settings.h
	mkdir -p build
	gcc -Wall -pthread -g -c -o build/indicator.o src/indicator.c -lwiringPi

mp3data.o: src/mp3_data.c
	gcc -Wall -g -c -o build/mp3data.o src/mp3_data.c -lwiringPi


clean:
	rm -f Point.o
	rm -f closestPair
