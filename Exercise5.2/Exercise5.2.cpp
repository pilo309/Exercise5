#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <conio.h>
#define MY_ARRAY_SIZE 10
#include "Header.h"



//Exercise 5.2 Sortering

//a.Tilføj(Add) et nyt projekt i din VS Solution(Project Name : Exercise5_2).

//b.Skriv heri et program hvor du erklærer et integer array med 10 pladser .

//c.Fyld arrayet(alle pladser) med tilfældige tal mellem 1 og 100.

//d.Udskriv tallene fra arrayet på skærmen på EN linje med mellemrum mellem
//hvert tal.

//e.Tilføj herefter noget kode, som sorterer dit array(for - løkker) (hint 5C).

//f.Udskriv til slut arrayet igen.



int main(void)
{

	int a = 1;
		int b = 100;
	int MYARRAY[MY_ARRAY_SIZE];
	srand(time(0));

	for (size_t i = 0; i < MY_ARRAY_SIZE; i++)
		MYARRAY[i] = rand() % (b - a + 1) + a;

	for (size_t i = 0; i < MY_ARRAY_SIZE; i++)
		printf_s("%d ", MYARRAY[i]);

	printf_s("\nOur array sorted\n");

	sortArray(MYARRAY, MY_ARRAY_SIZE);
	
	for (size_t i = 0; i < MY_ARRAY_SIZE; i++)
		printf_s("%d ", MYARRAY[i]);


	return 0;
}