#include "main.h"

/**
 * _isupper - check if a letter is uppercase
 * @k: The number to be checked
 * Return: 1 for uppercase letter or 0 for anything else
 */

int _isupper(int k)
{
	if (k >= 'A' && k <= 'Z')
		return (1);
	else
		return (0);
}
