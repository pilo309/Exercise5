#pragma comment(lib, "RaspberryPI.lib")
#include <stdio.h>
#include <stdlib.h>
#include <RaspberryDLL.h>
#include <time.h>
#include <conio.h>

//Exercise 5.5 Elektronisk terning
//Da der netop er 6 lysdioder p� dit RPi shield, kan du bruge disse til at lave en
//elektronisk terning.
//
//Lav en l�kke, hvori der genereres et tilf�ldig tal mellem 1 og 6. T�nd den
//lysdiode, som svarer til det genererede tal og sluk den lysdiode, som var t�ndt f�r,
//
//(inds�t en kort Wait() efter ledOn() og ledOff(), ellers kan RPi ikke f�lge med).
//
//L�kken skal forts�tte s� l�nge der ikke trykkes p� P1 p� RPI shield.
//Den lysdiode,der er t�ndt n�r der trykkes p� P1, svarer til �jnene p� den �kastede� terning(hvis
//	LD4 lyser er der sl�et en 4�er osv.).
//	
//	Husk at slukke den t�ndte lysdiode indenprogrammet lukker ned.
//	
//	Udvidelse: Terningen skal selvf�lgelig kunne �kastes� mange gange.Tilf�j dette til
//	dit program(HINT 5F).

int main(void)
{
	if (!Open())
	{
		printf("Error with connection\n");
		exit(1);
	}

	printf("Connected to Raspberry Pi\n");
	// To do your code

	srand(time(0));

	int a = 1;
	int b = 6;

	
		int LED;
		while (!_kbhit())
		{
			LED = rand() % (b - a + 1) + 1;

				ledOn(LED);

			Wait(1);

				for (size_t i = 1; i <= 6; i++)
					ledOff(i);
		}

	return 0;
}