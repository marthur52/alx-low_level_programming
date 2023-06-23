#include "main.h"

/**
 * print_numbers - print 0-9
 * Return: void
 */

void print_numbers(void)
{
	int k;

	for (k = '0'; k <= '9'; k++)
	{
		_putchar(k);
	}
	_putchar('\n');
}
