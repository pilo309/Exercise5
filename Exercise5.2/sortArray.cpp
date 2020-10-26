#pragma once
#include "Header.h"
#include <stdio.h>


void sortArray(int arrayAlias[], size_t arraySize)

{

	int sorted, end = 0, swap;



	for (sorted = 1; sorted < arraySize && end == 0; ++sorted)

	{

		end = 1;   // stop loop if array is sorted (no swaps are made) 

		for (size_t index = 0; index < (arraySize - sorted); ++index)

		{

			if (arrayAlias[index] > arrayAlias[index + 1]) //hvis den vi har fat i er
															//st�rre end det n�ste index i array

			{

				swap = arrayAlias[index];		//definere vores array som swap

				arrayAlias[index] = arrayAlias[index + 1];		//definere vores array som det n�ste

				arrayAlias[index + 1] = swap;					//definere det n�ste array som vores

				end = 0;

			}

		}

	}

}