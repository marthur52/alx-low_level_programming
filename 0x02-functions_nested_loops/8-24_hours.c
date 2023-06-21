#include "main.h"

/**
 * jack_bauer - prints every minute of the day of Jack Bauer
 * starting from 00:00 to 23:59
 */
void jack_bauer(void)
{
	int q, r;

	q = 0;

	while (q < 24)
	{
		r = 0;
		while (r < 60)
		{
			_putchar((q / 10) + '0');
			_putchar((q % 10) + '0');
			_putchar(':');
			_putchar((r / 10) + '0');
			_putchar((r % 10) + '0');
			_putchar('\n');
			r++;
		}
		q++;
	}
}
