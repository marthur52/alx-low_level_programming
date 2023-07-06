#include <stdio.h>
#include "main.h"

/**
 * _strchr - entry point
 * @s: input
 * @c: input
 *
 * Return: All the time 0
 */
char *_strchr(char *s, char c)
{
	int k;

	for (k = 0; s[k] >= '\0'; k++)
	{
		if (s[k] == c)
			return (s + k);
	}
	return (NULL);
}
