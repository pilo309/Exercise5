#pragma comment(lib, "RaspberryPI.lib")
#include <stdio.h>
#include <stdlib.h>
#include <RaspberryDLL.h>
#include "Header.h"
#include <conio.h>

//Exercise 5.3 Tænd LED’er med løkke - RPi

//Skriv et lille program hvor du ved hjælp af en for - løkke tænder alle 6 lysdioder på
//RPI shield.Vent 5 sek.og sluk derefter alle 6 lysdioder vh.En ny for - løkke.

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