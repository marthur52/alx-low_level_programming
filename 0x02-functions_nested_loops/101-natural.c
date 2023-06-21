#include <stdio.h>

/**
 * main - Prints the sum of all multiples of 3 or 5 up to 1024
 *
 * Return: All the time 0.
 */
int main(void)
{
	int i, p = 0;

	for (i = 0; i < 1024; i++)
	{
		if ((i % 3) == 0 || (i % 5) == 0)
			p += i;
	}

	printf("%d\n", p);

	return (0);
}
