#include "holberton.h"
#include <stdlib.h>
/**
* string_nconcat - blablbalba;
* @s1: blalbalba
* @s2: blabla
* @n: blablal.
* Return: Nothing.
*/
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i, j, k;
	char *p;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";
	i = 0;
	while (s1[i])
		i++;

	p = malloc(sizeof(*p) * i + n + 1);

	if (p == NULL)
		return (NULL);

	for (j = 0, k = 0; j < (i + n); j++)
	{
		if (j < i)
		{
			p[j] = s1[j];
		}
		else
		{
			p[j] = s2[k++];
		}
	}
	p[j] = '\0';
	return (p);
}
