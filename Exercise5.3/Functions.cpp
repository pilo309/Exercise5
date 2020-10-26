#pragma comment(lib, "RaspberryPI.lib")
#include <stdio.h>
#include <stdlib.h>
#include <RaspberryDLL.h>
#include "Header.h"


void testAllLEDS(void)
{

	for (size_t i = 1; i <= 6; i++)
		ledOn(i);

	Wait(5000);

		for (size_t i = 1; i <= 6; i++)
			ledOff(i);

}