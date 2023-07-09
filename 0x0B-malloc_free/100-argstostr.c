#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * argstostr - converts the passed params to the prog to string
 * @ac: input argument vector
 * @av: input argument vector
 *
 * Return: 0
 */
char *argstostr(int ac, char **av)
{
	int a, b, c = 0, pr = 0;
	char *s;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (a = 0; a < ac; a++)
	{
		for (b = 0; av[a][b]; b++)
			pr++;
	}
	pr += ac;

	s = malloc(sizeof(char) * pr + 1);
	if (s == NULL)
		return (NULL);
	for (a = 0; a < ac; a++)
	{
	for (b = 0; av[a][b]; b++)
	{
		s[c] = av[a][b];
		c++;
	}
	if (s[c] == '\0')
	{
		s[c++] = '\n';
	}
	}
	return (s);
}
