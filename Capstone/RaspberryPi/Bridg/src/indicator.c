#include <stdio.h>
#include <stdlib.h>
#include <pthread.h>
#include <unistd.h>

#include "settings.h"

char keepRunning = 1;
FILE * wifiGPIOLED;

char onLight[] = "255";
char offLight[] = "0";
extern pthread_t iThread;

unsigned int timeInMS = 10;

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

void* indicatorThread(void* microSeconds)
{
	wifiGPIOLED = fopen(INDICATOR_FILE,"w");

	while(1)
	{
		if( keepRunning == 1 )
		{
			printf("Turning on light\n");
			turnOnLight();
			usleep(*(unsigned int*)(microSeconds));
			turnOffLight();
			usleep(*(unsigned int*)(microSeconds));
		}
	}

	fclose(wifiGPIOLED);
}

void runIndicatorThread()
{
	printf("Running thread\n");
	int iThreadHandle = pthread_create(&iThread, NULL, indicatorThread, (void*)&timeInMS);
}