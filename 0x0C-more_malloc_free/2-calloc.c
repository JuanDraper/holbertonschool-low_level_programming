#include "holberton.h"
#include <stdlib.h>
/**
* _calloc - blablablac;
* @nmemb: blabla.
* @size: blabla.
* Return: blbla.
*/
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *p;
	unsigned int i = 0, j;

	j = nmemb * size;
	if (nmemb <= 0 || size <= 0)
		return (NULL);

        p = malloc(j);
	if (p == NULL)
		return (NULL);

	while (i <j)
	{
		p[i] = 0;
                i++;
	}
	return (p);
}
