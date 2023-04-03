#include "main.h"
#include <stdio.h>

/**
 * _strstr - locates substring
 *
 * @haystack: value from main
 * @needle: value from main
 *
 * Return: value of haystack / 0 if null
 */

char *_strstr(char *haystack, char *needle)
{
	int x, y;

	if (!needle)
		return (haystack);

	for (x = 0, y = 0; haystack[x] != '\0'; x++)
	{
		if (needle[y] == haystack[x])
			return (&haystack[x]);
	}

	return (NULL);
}
