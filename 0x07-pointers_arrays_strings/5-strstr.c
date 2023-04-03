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
	while (*haystack)
		{
			char *Begin = haystack;
			char *pattern = needle;

			while (*haystack && *pattern && *haystack == *pattern)
			{
				haystack++;
				pattern++;
			}
			if (!*pattern)
				return (Begin);

			haystack = Begin + 1;
		}
		return ('\0');
}
