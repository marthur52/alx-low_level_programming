#include "main.h"

/**
 * swap_int - swaps the value of two integers.
 * @a: First integer to swap.
 * @b: Second integer to swap.
 *
 * Return: nothing
 */
void swap_int(int *a, int *b)
{
	int m;

	m = *a;
	*a = *b;
	*b = m;
}
