#include "main.h"

/**
 * print_line - draws a straight line in the terminal
 * @p: number of times the character _ should be printed
 */

void print_line(int p)
{
	if (p <= 0)
	{
		_putchar('\n');
	} else
	{
		int i;

		for (i = 1; i <= p; i++)
		{
			_putchar('_');
		}
		_putchar('\n');
	}
}
