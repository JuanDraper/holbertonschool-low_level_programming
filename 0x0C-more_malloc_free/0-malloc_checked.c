#include "holberton.h"
#include <stdlib.h>

/**
 *malloc_checked - blabla
 *@b : blabla
 *
 *Return: p
 */

void *malloc_checked(unsigned int b)
{
	int *p;

	p = malloc(b);
	if (!p)
		exit(98);
	return (p);
}
