#pragma comment(lib, "RaspberryPI.lib")
#include <stdio.h>
#include <stdlib.h>
#include <RaspberryDLL.h>
#include "Header.h"
#include <conio.h>

//Exercise 5.3 T�nd LED�er med l�kke - RPi

//Skriv et lille program hvor du ved hj�lp af en for - l�kke t�nder alle 6 lysdioder p�
//RPI shield.Vent 5 sek.og sluk derefter alle 6 lysdioder vh.En ny for - l�kke.

int main(void)
{
	if (!Open())
	{
		printf("Error with connection\n");
		exit(1);
	}

	printf("Connected to Raspberry Pi\n");
	// To do your code

	printf_s("Tests All LEDS.");

	while (!_kbhit())
	{
		testAllLEDS();
	}

	return 0;
}