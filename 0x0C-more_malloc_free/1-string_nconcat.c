#include <stdlib.h>
#include <stdio.h>
#include "holberton.h"
/**
 * string_nconcat - len of 1st str, len of 2nd str, if n < 2nd, 2nd = n
 * 2nd + 1st = total len, malloc + null byte, loop to insert into temp arr
 * @s1: input one
 * @s2: input two
 * @n: s2's number of bytes
 * Return: 0
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *p;
	unsigned int i, j, k, l;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	for (i = 0; s1[i] != '\0'; i++)
	{
	}

	for (j = 0; s2[j] != '\0'; j++)
	{
	}

	if (n < j)
	{
	j = n;
        }
	j += i;
        p = malloc(sizeof(char *) * (j + 1));

	if (p == NULL)
		return (NULL);
        
	for (k = 0; k < i; k++)
		p[k] = s1[k];
	for (l = 0; k < j; l++)
	{
		p[k] = s2[l];
		k++;
	}
	k++;
	p[k] = '\0';
	return (p);
}
