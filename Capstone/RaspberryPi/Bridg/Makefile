# default target
bridgd: src/main.cpp indicator.o networkReciever.o ../../Shared/settings.h ../../Shared/emptymp3data.h
	g++ -Wall -pthread -g -o bridgd src/main.cpp build/indicator.o build/networkReciever.o -lwiringPi -I/home/pi/wiringPi/wiringPi

# individual source files
indicator.o: src/indicator.h src/indicator.c ../../Shared/settings.h
	mkdir -p build
	g++ -Wall -pthread -g -c -o build/indicator.o src/indicator.c -lwiringPi

networkReciever.o: src/networkReciever.h src/networkReciever.cpp ../../Shared/settings.h
	mkdir -p build
	g++ -Wall -pthread -g -c -o build/networkReciever.o src/networkReciever.cpp -lwiringPi
clean:
	rm -f build/networkReciever.o
	rm -f bridgd
