#include "main.h"

/**
 * string_toupper - switches lowercase on string to uppercase
 *
 * @a: value from main
 *
 * Return: value of a
 */

char *string_toupper(char *a)
{

	int counter;

	for (counter = 0; a[counter] != '\0'; counter++)
	{
		if (a[counter] >= 'a' && a[counter] <= 'z')
		{
			a[counter] = a[counter] - 32;
		}

	}

	return (a);

}
