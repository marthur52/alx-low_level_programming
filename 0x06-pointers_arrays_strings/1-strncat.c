#include "main.h"

/**
 * _strncat - concatenate two strings
 * using at most number of bytes from src
 * @dest: the string to be appended
 * @src: the string to be appended to dest
 * @n: number of bytes from src to be appended to dest
 *
 * Return: dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int win = 0, dest_len = 0;

	while (dest[win++])
		dest_len++;
	for (win = 0; src[win] && win < n; win++)
		dest[dest_len++] = src[win];
	return (dest);
}
