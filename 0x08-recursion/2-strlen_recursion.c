#include "main.h"

/**
 * _strlen_recursion_helper - returns the length
 * @s: pointer, an array
 * @num: int, length of string
 *
 * Return: return the length
 */
int _strlen_recursion_helper(char *s, int num)
{
	if (*s == '\0')
		return (num);

		return (_strlen_recursion_helper(s + 1, num + 1));
}

/**
 * _strlen_recursion - returns the length of a string
 * @s: pointer, to a string that is char
 *
 * Return: int, number of length
 */
int _strlen_recursion(char *s)
{
	return (_strlen_recursion_helper(s, 0));
}
