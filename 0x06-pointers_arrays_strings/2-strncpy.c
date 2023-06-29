#include "main.h"

/**
 * _strncpy - copy a string
 * @dest: the buffer storing the string
 * @src: the source string.
 * @n: the number of bytes to be copied from src.
 *
 * Return: dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int win = 0, src_len = 0;

	while (src[win++])
		src_len++;
	for (win = 0; src[win] && win < n; win++)
		dest[win] = src[win];
	for (win = src_len = src_len; win < n; win++)
		dest[win] = '\0';
	return (dest);
}
