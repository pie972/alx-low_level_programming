/**
 * _strspn - gets the length of a prefix substring
 *
 * @s: value from main
 * @accept: value from main
 *
 * Return: value of counter
 */

unsigned int _strspn(char *s, char *accept)
{

	int x, y;
	int counter = 0;

	for (x = 0; accept[x] != '\0'; x++)
	{
		{
			for (y = 0; (s[y] >= 'a' && s[y] <= 'z') ||
(s[y] >= 'A' && s[y] <= 'Z'); y++)
			{
				if (accept[x] == s[y])
					counter++;
			}
		}
	}
	return (counter);
}
