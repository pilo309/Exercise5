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

			if (arrayAlias[index] > arrayAlias[index + 1])

			{

				swap = arrayAlias[index];

				arrayAlias[index] = arrayAlias[index + 1];

				arrayAlias[index + 1] = swap;

				end = 0;

			}

		}

	}

}