#include <stdio.h>
#include "main.h"

/**
 * print_to_98 - prints all natural numbers from n to 98,
 * followed by a new line
 * @n: print from this number
 */
void print_to_98(int n)
{
	int q, r;

	if (n <= 98)
	{
		for (q = n; q <= 98; q++)
		{
			if (q != 98)
				printf("%d,", q);
			else if (q == 98)
				printf("%d\n", q);
		}
	} else if (n >= 98)
	{
		for (r = n; r >= 98; r--)
		{
			if (r != 98)
				printf("%d, ", r);
			else if (r == 98)
				printf("%d\n", r);
		}
	}
}
