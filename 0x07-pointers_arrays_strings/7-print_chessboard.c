#include "main.h"

/**
 * print_chessboard - Entry point
 * @a: array
 *
 * Return: All the time 0
 */
void print_chessboard(char (*a)[8])
{
	int m, p;

	for (m = 0; m < 8; m++)
	{
		for (p = 0; p < 8; p++)
			_putchar(a[m][p]);
		_putchar('\n');
	}
}

