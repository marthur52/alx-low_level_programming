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
	int pr = 0, a = 0, b = 0, c = 0;
	char *s;

	if (ac == 0 || av == NULL)
		return (NULL);

	while (a < ac)
	{
		while (av[a][b])
		{
			pr++;
			b++;
		}
		b = 0;
		a++;
	}

	s = malloc((sizeof(char) * pr) + ac + 1);

	while (av[a])
	{
		a = 0;
		while (av[a][b])
		{
			s[c] = av[a][b];
			c++;
			b++;
		}

		s[c] = '\n';

		b = 0;
		c++;
		a++;
	}

	c++;
	s[c] = '\0';
	return (s);
}
