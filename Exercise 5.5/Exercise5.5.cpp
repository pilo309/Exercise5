#pragma comment(lib, "RaspberryPI.lib")
#include <stdio.h>
#include <stdlib.h>
#include <RaspberryDLL.h>
#include <time.h>
#include <conio.h>

//Exercise 5.5 Elektronisk terning
//Da der netop er 6 lysdioder på dit RPi shield, kan du bruge disse til at lave en
//elektronisk terning.
//
//Lav en løkke, hvori der genereres et tilfældig tal mellem 1 og 6. Tænd den
//lysdiode, som svarer til det genererede tal og sluk den lysdiode, som var tændt før,
//
//(indsæt en kort Wait() efter ledOn() og ledOff(), ellers kan RPi ikke følge med).
//
//Løkken skal fortsætte så længe der ikke trykkes på P1 på RPI shield.
//Den lysdiode,der er tændt når der trykkes på P1, svarer til øjnene på den ”kastede” terning(hvis
//	LD4 lyser er der slået en 4’er osv.).
//	
//	Husk at slukke den tændte lysdiode indenprogrammet lukker ned.
//	
//	Udvidelse: Terningen skal selvfølgelig kunne ”kastes” mange gange.Tilføj dette til
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