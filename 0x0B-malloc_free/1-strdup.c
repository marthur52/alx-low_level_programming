#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * _strdup - duplicate to a string
 * @str: string to duplicate
 *
 * Return: duplicated string
 */
char *_strdup(char *str)
{
	char *s;
	int m = 0, p = 1;

	if (str == NULL)
		return (NULL);

	while (str[p])
		p++;

	s = malloc((sizeof(char) * p) + 1);

	if (s == NULL)
		return (NULL);

	while (m < p)
	{
		s[m] = str[m];
		m++;
	}
	s[m] = '\0';
	return (s);
}
