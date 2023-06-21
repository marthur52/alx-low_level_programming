#include <stdio.h>

/**
 * main - Prints the sum of fibonacci numbers
 * less than 4000000.
 *
 * Return: All the time 0.
 */
int main(void)
{
	int m = 0;
	long p = 1, o = 2, sum = o;

	while (o + p < 4000000)
	{
	o += p;
	if (o % 2 == 0)
	sum += o;
	p = o - p;
	++m;
	}
	printf("%ld\n", sum);
	return (0);
}
