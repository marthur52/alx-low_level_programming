#include "main.h"
#include <stdlib.h>
/**
 * create_array - creates an array of chars
 * @size: size of array
 * @c: char to assign
 *
 * Return: The array to be filled
 *
 */
char *create_array(unsigned int size, char c)
{
	char *s;
	unsigned int k;

	if (size == 0)
		return (NULL);

	s = malloc(size * sizeof(char));

	if (s == NULL)
		return (NULL);

	for (k = 0; k < size; k++)
	{
		s[k] = c;
	}
	return (s);
}
