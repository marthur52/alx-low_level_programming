#include "main.h"

/**
 * reverse_array - reverses an array of integers
 * @a: array
 * @n: number of elements of array
 *
 * Return: void
 */
void reverse_array(int *a, int n)
{
	int i, j;

	for (j = n - 1; j >= n / 2; j--)
	{
		i = a[n - 1 - j];
		a[n - 1 - j] = a[j];
		a[j] = i;
	}
}
