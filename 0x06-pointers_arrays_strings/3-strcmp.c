#include "main.h"

/**
 * _strcmp - compares string values
 * @s1: a pointer to the first string to be compared.
 * @s2: a pointer to the second string to be compared.
 *
 * Return: (*s1 - *s2)
 */
int _strcmp(char *s1, char *s2)
{
	while (*s1 && *s2 && *s1 == *s2)
	{
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}
