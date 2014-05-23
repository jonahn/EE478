#include <stdio.h>
#include <stdlib.h>
#include <pthread.h>
#include <unistd.h>
#include <wiringPi.h>

#include "settings.h"

char keepRunning = 1;
FILE * wifiGPIOLED;

char onLight[] = "255";
char offLight[] = "0";
extern pthread_t iThread;

unsigned int timeInMS = 500;

void turnOnLight()
{
	digitalWrite (0,  HIGH) ;
}

void turnOffLight()
{
	digitalWrite (0,  LOW) ;
}

void* indicatorThread(void* microSeconds)
{
	while(1)
	{
		if( keepRunning == 1 )
		{
			turnOnLight();
			delay(500);
			turnOffLight();
			delay(500);
		}
	}
}

void runIndicatorThread()
{
	wiringPiSetup();
  	pinMode(0, OUTPUT);
	int iThreadHandle = pthread_create(&iThread, NULL, indicatorThread, (void*)&timeInMS);
}