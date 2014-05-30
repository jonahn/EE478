# default target
bridgd: src/main.cpp networkReciever.o ../../Shared/settings.h ../../Shared/emptymp3data.h ../../Shared/mp3_data.h
	g++ -Wall -pthread -g -o bridgd src/main.cpp build/networkReciever.o -lwiringPi -I/home/pi/wiringPi/wiringPi

# individual source files
networkReciever.o: src/networkReciever.h src/networkReciever.cpp ../../Shared/settings.h
	mkdir -p build
	g++ -Wall -pthread -g -c -o build/networkReciever.o src/networkReciever.cpp -lwiringPi
clean:
	rm -f build/networkReciever.o
	rm -f bridgd
