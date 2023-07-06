#include <stdio.h>
#include "main.h"

/**
 * main - print the number of arguments
 * @argc: number of arguments to count
 * @argv: arguments vector
 *
 * Return: All the time 0
 */

int main(int argc, char *argv[])
{
	(void) argv;
	printf("%d\n", argc - 1);

	return (0);
}
