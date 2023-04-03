/**
 * print_diagsums - prints sum of diagonal values
 *
 * @a: value from main
 * @size: value from main
 *
 */

#include <stdio.h>

void print_diagsums(int *a, int size)
{

	int x, y;
	int sum1 = 0;
	int sum2 = 0;
	int area = size * size;

	for (x = 0, y = size - 1; x <= area; x = x + size + 1, y = y + size - 1)
	{
		sum1 = sum1 + a[x];
		sum2 = sum2 + a[y];
	}

	printf("%d, %d\n", sum1, sum2);

}
