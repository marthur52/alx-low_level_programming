#include "main.h"

/**
 * string_toupper - change all lowercas to uppercase
 * @str: the string to be changed.
 *
 * Return: str
 */
char *string_toupper(char *str)
{
	int m = 0;

	while (str[m])
	{
		if (str[m] >= 'a' && str[m] <= 'z')
			str[m] -= 32;
		m++;
	}
	return (str);
}
