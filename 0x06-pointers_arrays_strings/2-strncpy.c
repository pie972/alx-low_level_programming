#include "main.h"

/**
 * _strncpy - copies 2 string
 *
 * @n: value from main
 * @dest: value from main
 * @src: value from main
 *
 * Return: value of dest
 */

char *_strncpy(char *dest, char *src, int n)
{

	int destcounter;

	for (destcounter = 0; destcounter < n && src[destcounter] != '\0';
destcounter++)
	{
		dest[destcounter] = src[destcounter];
	}

	for (; destcounter < n; destcounter++)
	{
		dest[destcounter] = 0;
	}

	return (dest);
}
