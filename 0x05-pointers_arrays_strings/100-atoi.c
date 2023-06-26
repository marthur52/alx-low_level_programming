#include "main.h"

/**
 * _atoi - converts a string to an integer
 * @s: the integer to convert
 *
 * Return: integer
 */
int _atoi(char *s)
{
	int p = 0;
	unsigned int mi = 0;
	int men = 1;
	int she = 0;

	while (s[p])
	{
		if (s[p] == 45)
		{
			men *= -1;
		}
		while (s[p] >= 48 && s[p] <= 57)
		{
			she = 1;
			mi = (mi * 10) + (s[p] - '0');
			p++;
		}
		if (she == 1)
		{
			break;
		}
		p++;
	}
	mi *= men;
	return (mi);
}
