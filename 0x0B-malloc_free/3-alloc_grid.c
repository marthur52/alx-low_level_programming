#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - nested loop to make grid
 * @width: width input
 * @height: height input
 *
 * Return: pointer to two dimension array
 */
int **alloc_grid(int width, int height)
{
	int **r;
	int m, p;

	if (width <= 0 || height <= 0)
		return (NULL);

	r = malloc(sizeof(int *) * height);

	if (r == NULL)
		return (NULL);

	for (m = 0; m < height; m++)
	{
		r[m] = malloc(sizeof(int) * width);

		if (r[m] == NULL)
		{
			for (; m >= 0; m--)
				free(r[m]);

			free(r);
			return (NULL);
		}
	}

	for (m = 0; m < height; m++)
	{
		for (p = 0; p < width; p++)
			r[m][p] = 0;
	}
	return (r);
}
