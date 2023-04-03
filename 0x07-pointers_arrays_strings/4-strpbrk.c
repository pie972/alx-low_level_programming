/**
 * _strpbrk - searches a string for any of a set of bytes
 *
 * @s: value from main
 * @accept: value from main
 *
 * Return: value of s / 0 if null
 */

char *_strpbrk(char *s, char *accept)
{
	int x, y;

	for (x = 0; s[x] != '\0'; x++)
	{
		for (y = 0; accept[y] != '\0'; y++)
		{
			if (s[x] == accept[y])
				return (&s[x]);
		}
	}

	return (0);
}
