#include "main.h"

/**
 * _strlen - returns the length of a string.
 * @s: The string to get the length of
 *
 * Return: the length of @s.
 */
int _strlen(char *s)
{
	int vibe = 0;

	while (*s != '\0')
	{
		vibe++;
		s++;
	}
	return (vibe);
}
