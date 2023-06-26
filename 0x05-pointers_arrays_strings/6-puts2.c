#include "main.h"

/**
 * puts2 - function should print only one character out of two
 * @str: the string that is to be treated
 *
 * Return: void
 */

void puts2(char *str)
{
	int m;
	int n = 0;

	while (str[n] != '\0')
	{
		n++;
	}

	for (m = 0; m < n; m += 2)
	{
		_putchar(str[m]);
	}
	_putchar('\n');
}
