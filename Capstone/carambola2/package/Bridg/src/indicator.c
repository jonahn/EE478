#include <stdio.h>
#include <stdlib.h>
#include <pthread.h>
#include <unistd.h>

char keepRunning = 1;
FILE * wifiGPIOLED;

char onLight[] = "255";
char offLight[] = "0";

void turnOnLight()
{
	fseek(wifiGPIOLED, 0, SEEK_SET);
	fputs(onLight, wifiGPIOLED);
}

void turnOffLight()
{
	fseek(wifiGPIOLED, 0, SEEK_SET);
	fputs(offLight, wifiGPIOLED);
}

//never do 1
void indicatorThread(unsigned int microSeconds)
{
	wifiGPIOLED = fopen("/sys/devices/platform/leds-gpio/leds/carambola2:green:wlan/brightness","w");

	if( keepRunning == 1 )
	{
		turnOnLight();
		usleep(microSeconds);
		turnOffLight();
		usleep(microSeconds);
	}

	fclose(wifiGPIOLED);
}

void runIndicatorThread()
{
	pthread_t iThread;
	unsigned int timeInMS = 10;

	int iThreadHandle = pthread_create(&iThread, NULL, indicatorThread, (void*)timeInMS);
}