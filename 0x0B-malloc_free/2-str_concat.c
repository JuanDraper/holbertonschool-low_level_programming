#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"
/**
 * *str_concat - concatena un array
 * @s1: array
 * @s2: array
 *
 *Return: Always 0.
 */

char *str_concat(char *s1, char *s2)
{
	char *pointer;
	int size, size2, loop1, loop2;

	if (s1 == NULL)
	{
		s1 = "";
	}

	if (s2 == NULL)
	{
		s2 = "";
	}

	for (size = 0; s1[size] != '\0'; size++)
	{}

	for (size2 = 0; s2[size2] != '\0'; size2++)
	{}

	pointer = malloc((sizeof(*s1) * size) + (sizeof(*s2) * size2 + 1));

	if (pointer == NULL)
	{
		return (NULL);
	}

	for (loop1 = 0, loop2 = 0; loop1 < (size + size2 + 1); loop1++)
	{
		if (loop1 < size)
		{
			pointer[loop1] = s1[loop1];
		}
		else
		{
			pointer[loop1] = s2[loop2++];
		}
	}
	return (pointer);
}
