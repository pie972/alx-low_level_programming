#include "main.h"
/**
 * *_strstr - calls function
 * @haystack: Main string to be scanned.
 * @needle: Small string to be searched with-in haystack string.
 * Description: Function that locates a substring.
 * Return: 0
 */
char *_strstr(char *haystack, char *needle)
{
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
}
