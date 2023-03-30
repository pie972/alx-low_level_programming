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

	int counter;

	for (counter = 0; s1[counter] != '\0' && s2[counter] != '\0'; counter++)
	{
		if (*s1 != *s2) {
		    return (*s1 < *s2) ? -1 : 1;
		}
	}

	return (*s1 == '\0' && *s2 == '\0') ? 0 : (*s1 < *s2) ? -1 : 1;

}
