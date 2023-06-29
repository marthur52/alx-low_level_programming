#include "main.h"
#include <stdio.h>

 /**
  * leet - encodes a string into 1337speak
  * @n: input value
  *
  * Return: pointer to the modified string
  */
char *leet(char *n);

/**
 * main - entry point of the program
 *
 * Return: 0 on success
 */
int main(void)
{
	char str[] = "Hello, World!";

	printf("Original: %s\n", str);
	printf("leet: %s\n", leet(str));
	return (0);
}

char *leet(char *n)
{
	int m, p;
	char s1[] = "aAeEoOtTlL";
	char s2[] = "4433007711";

	for (m = 0; n[m] != '\0'; m++)
	{
		for (p = 0; p < 10; p++)
		{
			if (n[m] == s1[p])
			{
				n[m] = s2[p];
				break;
			}
		}
	}
	return (n);
}
