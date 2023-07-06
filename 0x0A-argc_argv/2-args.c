#include <stdio.h>
#include "main.h"

/**
 * main - prints all arguments
 * @argc: number of arguments to count
 * @argv: arguments vector
 *
 * Return: All the time 0
 */
int main(int argc, char *argv[])
{
	int m;

	for (m = 0; m < argc; m++)
	{
		printf("%s\n", argv[m]);
	}

	return (0);
}
