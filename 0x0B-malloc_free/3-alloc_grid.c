#include <stdio.h>
#include <stdlib.h>

/**
 *alloc_grid - return a pointer tow dim array
 *@width: int
 *@height: int
 *Return: pointer to pointer
 */

int **alloc_grid(int width, int height)
{
	int i, j, k;
	int **p;

	if (height <= 0 || width <= 0)
	return (NULL);

	else
	{
		p = malloc(sizeof(int *) * height);
		if (p == NULL)
			return (NULL);
		for (j = 0; j < height; j++)
		{
			p[j] = malloc(sizeof(int) * width);
			if (p[j] == NULL)
			{
				for (i = j; i >= 0; i--)
					free(p[i]);
				free(p);
				return (NULL);
			}
			for (k = 0; k < width; k++)
			{
				p[j][k] = 0;
			}
		}
	}
	return (p);
}
