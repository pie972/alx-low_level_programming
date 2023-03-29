#include "main.h"

/**
 * _strcat - adds string src to string dest
 *
 * @dest: value from main
 * @src: value from main
 *
 * Return: value of dest
 */

char *_strcat(char *dest, char *src)
{

	int destcounter;
	int srccounter;

	for (destcounter = 0; dest[destcounter] != '\0'; destcounter++)
		;

	for (srccounter = 0; src[srccounter] != '\0'; srccounter++)
	{
		dest[destcounter] = src[srccounter];
		destcounter++;
	}

	dest[destcounter] = '\0';

	return (dest);
}
