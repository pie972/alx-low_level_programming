#include "main.h"

/**
 * _strcmp - compares string s1 and s2
 *
 * @s1: value from main
 * @s2: value from main
 *
 * Return: value of difference
 */

int _strcmp(char *s1, char *s2)
{

	int counter, difference;

	for (counter = 0; s1[counter] != '\0' || s2[counter] != '\0'; counter++)
	{
		difference = s1[counter] - s2[counter];

		if (difference != 0)
			break;
	}

	return (difference);

}
