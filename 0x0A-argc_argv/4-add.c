#include "main.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/**
 * main - prints the sum of args positive numbers
 * @argc: number of argument to count
 * @argv: argument vector
 *
 * Return: All the time 0
 */

int main(int argc, char *argv[])
{
	int m;
	unsigned int p, sum = 0;
	char *e;

	if (argc > 1)
	{
		for (m = 1; m < argc; m++)
		{
			e = argv[m];

			for (p = 0; p < strlen(e); p++)
			{
				if (e[p] < 48 || e[p] > 57)
				{
					printf("Error\n");
					return (1);
				}
			}
			sum += atoi(e);
			e++;
		}

		printf("%d\n", sum);
	}
	else
	{
		printf("0\n");
	}
	return (0);
}
