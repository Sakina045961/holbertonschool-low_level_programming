#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * alloc_grid - returns a pointer to a 2 dimensional array of integers
 *@width: width of grid
 *@height: height of grid
 *Return: NULL on failure, width or height is 0 or negative
 */
int **alloc_grid(int width, int height)
{
	int **ar;
	int i;
	int h;
	int r;

	if (width <= 0 || height <= 0)
		return (NULL);
	ar = malloc(sizeof(int) * height);
		if (ar == NULL)
			return (NULL);
	for (i = 0; i < height; i++)
	{
		ar[i] = malloc(sizeof(int) * width);
			if (ar[i] == NULL)
			{
				while (i >= 0)
				{
					free(ar[i]);
					i--;
				}
				free(ar);
				return (NULL);
			}
	}
	for (h = 0; h < height; h++)
	{
		for (r = 0; r < width; r++)
			ar[h][r] = 0;
	}
	return (ar);
}
