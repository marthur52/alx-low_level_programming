#include <stdio.h>

/**
 * main - Prints first 50 fibonacci numbers
 *
 * Return: All the time 0
 */
int main(void)
{
	int m = 0;
	long p = 1, o = 2;

	while (m < 50)
	{
	if (m == 0)
	printf("%ld", p);
	else if (m == 1)
	printf(", %ld", o);
	else
	{
	o += p;
	p = o - p;
	printf(", %ld", o);
	}
	++m;
	}
	printf("\n");
	return (0);
}
