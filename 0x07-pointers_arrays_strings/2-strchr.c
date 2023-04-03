#include <stdio.h>

/**
 * _strchr -  locates a character in a string
 *
 * @s: value from main
 * @c: value from main
 *
 * Return: value of s / 0 if null
 */

char *_strchr(char *s, char c)
{

	if (!*s)
		return (NULL);

	if (c == '\0')
		return ("");

	for (; *s != '\0'; s++)
	{
		if (*s == c)
		{
			return (s);
		}

	}

	return (NULL);

}
