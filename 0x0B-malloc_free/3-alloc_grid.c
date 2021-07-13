#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"
/**
 * **alloc_grid - two array
 * @width: array
 * @height: array
 *
 *Return: Always 0.
 */

int **alloc_grid(int width, int height)
{
	int **pointer;
	int sizew, sizeh, i;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}
	pointer = malloc(height * sizeof(int *));

	if (pointer == NULL)
	{
		return (NULL);
	}

	for (sizeh = 0; height > sizeh; sizeh++)
	{
		pointer[sizeh] = malloc(sizeof(int) * width);

		if (pointer[sizeh] == NULL)
		{
			for (i = 0; i < sizeh; i++)
			{
				free(pointer[i]);
			}
			free(pointer);
			return (NULL);
		}

		for (sizew = 0; width > sizew; sizew++)
		{
			pointer[sizeh][sizew] = 0;
		}
	}
	return (pointer);
}
