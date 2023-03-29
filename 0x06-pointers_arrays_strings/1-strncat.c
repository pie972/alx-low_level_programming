#include "main.h"

/**
 * _strncat - concatenantes strings in n bytes
 *
 * @n: value from main
 * @dest: value from main
 * @src: value from main
 *
 * Return: value of dest
 */

char *_strncat(char *dest, char *src, int n)
{

	int destcounter;
	int srccounter;

	for (destcounter = 0; dest[destcounter] != '\0'; destcounter++)
		;

	for (srccounter = 0; srccounter < n && src[srccounter] != '\0'; srccounter++)
	{
		dest[destcounter] = src[srccounter];
		destcounter++;
	}

	return (dest);
}
