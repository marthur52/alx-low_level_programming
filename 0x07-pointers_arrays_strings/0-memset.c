#include "main.h"

/**
 * _memset - entry point
 * @s: pointed destination
 * @b: constant byte
 * @n: bytes
 *
 * Return: All the time 0
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int k;

	for (k = 0; k < n; k++)
		s[k] = b;
	return (s);
}
