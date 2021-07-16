#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * array_range - tengo sueño
 * @min: blablan.
 * @max: blabla.
 *
 * Return: bllablay.
 */
int *array_range(int min, int max)
{
	int *arr;
	int i = 0;
        int j;

	j = (max - min) + 1;
	if (min > max)
	{
		return (NULL);
	}
	arr = malloc(sizeof(int) * j);
	if (arr == NULL)
	{
		return (NULL);
	}
	while (min <= max)
	{
		arr[i] = min++;
                i++;
	}
	return (arr);
}
