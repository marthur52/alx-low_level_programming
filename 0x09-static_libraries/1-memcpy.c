#include "main.h"

/**
 * _memcpy - entry point
 * @dest: input
 * @src: input
 * @n: input
 *
 * Return: All the time0
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int a;

	for (a = 0; a < n; a++)
		dest[a] = src[a];

	return (dest);
}
