/**
 * _memset - fills first n bytes of memory area pointed by constant byte b
 *
 * @s: value from main
 * @b: value from main
 * @n: value from main
 *
 * Return: value of s
 */

char *_memset(char *s, char b, unsigned int n)
{

	unsigned int x;

	for (x = 0; x < n; x++)
	{
		s[x] = b;

	}

	return (s);
}
