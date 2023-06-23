#include "main.h"
#include <stdio.h>

/**
 * main - prints a Fizz Buzz program
 * Return: All the time 0
 */

int main(void)
{
	int m;

	for (m = 1; m <= 100; m++)
	{
	if ((m % 3 == 0) && (m % 5 == 0))
	{
	printf("FizzBuzz");
	}
	else if (m % 3 == 0)
	{
	printf("Fizz");
	}
	else if (m % 5 == 0)
	{
	printf("Buzz");
	}
	else
	{
	printf("%d", m);
	}
	if (m != 100)
	{
	printf(" ");
	}
	}
	printf("\n");
	return (0);
}
