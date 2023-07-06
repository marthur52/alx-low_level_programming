#include "main.h"

/**
 * _isdigit - Check if a character is a digit
 * @k: The number to be checked
 *
 * Return: 1 for a character to be a digit and 0 for anything else
 */

int _isdigit(int k)
{
	if (k >= '0' && k <= '9')
		return (1);
	else
		return (0);
}
