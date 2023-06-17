#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: All the time 0 (Success)
 *
 */
int main(void)
{
	char k;

	for (k = 'a'; k <= 'z'; k++)
		putchar(k);
	for (k = 'A'; k <= 'Z'; k++)
		putchar(k);
	putchar('\n');
	return (0);
}
