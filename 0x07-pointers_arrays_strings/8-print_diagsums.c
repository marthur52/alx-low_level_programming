#include <stdio.h>
#include "main.h"

/**
 * print_diagsums - entry point
 * @a: input
 * @size: input
 *
 * Return: All the time 0
 */
void print_diagsums(int *a, int size)
{
	int m, p, sum1, sum2;

	sum1 = 0;
	sum2 = 0;

	for (m = 0; m <= (size * size); m = m + size + 1)
		sum1 = sum1 + a[m];

	for (p = size - 1; p <= (size * size) - size; p = p + size - 1)
		sum2 = sum2 + a[p];
	printf("%d, %d\n", sum1, sum2);
}
