#pragma comment(lib, "RaspberryPI.lib")
#include <stdio.h>
#include <stdlib.h>
#include <RaspberryDLL.h>
#include "Header.h"

//Exercise 5.4 Styring af lysdioder - RPi

//Du skal nu skrive et program der tænder / slukker(toggle) lysdioderne på RPi som
//reaktion på at brugeren trykker en tast på PC'ens tastatur. 
//
//Tasterne fra '1' til '6' skal tænde de respektive lysdioder LD1 til LD6.
//Tasten '0' skal stoppe programmet.
//
//For at kunne gøre dette, skal man kende lysdiodens aktuelle tilstand(on / off).Dette
//kan man gøre ved at gemme de 6 lysdioders tilstande(on = 1 / off = 0) i 6 variable.
//Hvordan vil du oprette 6 variable af samme type ? (HINT 5D)
//
//Du får brug for at aflæse ET tegn fra tastaturet.Du kan bruge scanf_s(), men det
//er ikke en god løsning.Hvad kan du bruge i stedet for ? (HINT 5E)
//Skriv programmet som beskrevet ovenfor(husk pseudokode først ).Husk at
//slukke alle dioder inden programmet lukker ned!

int main(void)
{
	if (!Open())
	{
		printf("Error with connection\n");
		exit(1);
	}

	printf("Connected to Raspberry Pi\n");
	// To do your code

	ledKeyboard();

	return 0;
}