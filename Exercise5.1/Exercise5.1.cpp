#include <stdio.h>
#include <time.h>
#include <stddef.h>
#include <stdlib.h>
#define MY_ARRAY_SIZE 20

//Exercise 5.1 Søgning
//a.Opret et nyt projekt i Visual Studio(Project Name : Exercise5_1, Solution
//	Name : Exercise5)
//	
//	b.Skriv heri et program hvor du erklærer et integer array med 20 pladser .
//	
//	c.Fyld arrayet(alle pladser) med tilfældige tal mellem - 50 og + 50 (hint 5A).
//	
//	d.Skriv herefter noget kode, som løber arrayet igennem og tæller hvor mange
//	negative tal der er i arrayet(hint 5B).
//	
//	e.Udskriv til slut hvor mange negative tal, der blev fundet.

int main(void)
{
	
	int myArray[MY_ARRAY_SIZE];
	int negatives = 0;

	int a = -50;
	int b = 50;						//initialiserer vores max min random værdier
	srand( time(0) );				//initialiserer randomizering

	for (size_t i = 0; i < MY_ARRAY_SIZE; i++)
		myArray[i] = (rand() % (b - a + 1) + a);		//giver hvert værdi i array random værdi

	printf_s("\nNumbers in array is:\n");				

		for (size_t i = 0; i <= MY_ARRAY_SIZE; i++)		//printer hvordan det ser ud
		{
			printf_s("%d\n", myArray[i]);
		}


	for (size_t i = 0; i < MY_ARRAY_SIZE; i++)
	{
		if (myArray[i] < 0)						//hvis et array er negativt inkrementeres tæller
			negatives++;
	}

	printf_s("Ammount of negative numbers in array is %d\n", negatives);	//tæller udskrives

	return 0;
}
