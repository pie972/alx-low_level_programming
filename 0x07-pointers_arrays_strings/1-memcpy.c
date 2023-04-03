/**
 * _memcpy - copies memory area
 *
 * @dest: value from main
 * @src: value from main
 * @n: value from main
 *
 * Return: value of s
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{

	unsigned int x;

	for (x = 0; x < n; x++)
	{
		dest[x] = src[x];
	}

	return (dest);
}
