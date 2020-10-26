#pragma once
#pragma comment(lib, "RaspberryPI.lib")
#include <stdio.h>
#include <stdlib.h>
#include <RaspberryDLL.h>
#include "Header.h"
#include <conio.h>

void ledKeyboard(void)
{
	int LEDARRAY[7] = { 0 }; //initialisere vores array til at have pladserne 0-7 til at være 0
	int tast, index;

	while (1)
	{
		tast = _getch();		//scanne vores tast
		index = tast - '0';		//lave et index hvor vi får værdien i 

		if (LEDARRAY[index] == 0)	//hvis led er slukket tænder vi den
		{
			ledOn(index);			//tænde led
			LEDARRAY[index] = 1;		//definere den led vi tænder til at være en i vores array
		}


		else				//hvis ikke array er 0
		{
			ledOff(index);			//slukke led
			LEDARRAY[index] = 0;	//definere den som 0 i array
		}

		if (tast == '0')
			break;

	}
	
}