#include <stdio.h>

/**
 * main - Entry point of program
 *
 * This program shows the addition of a new line of code to modify
 * the value of `a[2]` without using variable `a`.
 *
 * Return: 0 on success
 */
int main(void)
{
	/* original code */
	int a[] = {0, 0, 98, 0};
	int *p;

	p = a;

	/* add new line of code at line 19 */
	p[2] = *(p + 2);

	printf("a[2] = %d\n", a[2]);
	return (0);
}
