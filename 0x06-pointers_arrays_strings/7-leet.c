#include "main.h"

/**
 * leet - replaces certain characters with leetspeak
 *
 * @a: value from main
 *
 * Return: value of a
 */

char *leet(char *a)
{

	int outer;
	int inner;

	for (outer = 0; a[outer] != '\0'; outer++)
	{
		char leet[20] = {'a', 'A', 'e', 'E', 'o', 'O', 't', 'T', 'l', 'L'};

		for (inner = 0; leet[inner] != '\0'; inner++)
		{
			if (a[outer] == leet[inner])
			{
				leet[0] = '4';
				leet[1] = '4';
				leet[2] = '3';
				leet[3] = '3';
				leet[4] = '0';
				leet[5] = '0';
				leet[6] = '7';
				leet[7] = '7';
				leet[8] = '1';
				leet[9] = '1';

				a[outer] = leet[inner];
			}

		}

	}

	return (a);

}
