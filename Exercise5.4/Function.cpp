#pragma once
#pragma comment(lib, "RaspberryPI.lib")
#include <stdio.h>
#include <stdlib.h>
#include <RaspberryDLL.h>
#include "Header.h"
#include <conio.h>

void ledKeyboard(void)
{
	int LEDARRAY[7] = { 0 }; //initialisere vores array til at have pladserne 0-7 til at v�re 0
	int tast, index;

	while (1)
	{
		tast = _getch();		//scanne vores tast
		index = tast - '0';		//lave et index hvor vi f�r v�rdien i 

		if (LEDARRAY[index] == 0)	//hvis led er slukket t�nder vi den
		{
			ledOn(index);			//t�nde led
			LEDARRAY[index] = 1;		//definere den led vi t�nder til at v�re en i vores array
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