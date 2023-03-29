#include "main.h"

/**
 * reverse_array - reverse the values of each element in an array
 *
 * @a: value from main
 * @n: value from main
 *
 */

void reverse_array(int *a, int n)
{

	int temp[20];
	int begin;
	int end;

	for (begin = 0; begin <= n; begin++)
	{
		temp[begin] = a[begin];
	}

	begin = 0;

	for (end = n - 1; end >= 0; end--)
	{
		a[end] = temp[begin];
		begin++;
	}

}
