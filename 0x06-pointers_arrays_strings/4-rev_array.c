#include "holberton.h"

/**
 *
 *
 *
 */

void reverse_array(int *a, int n)
{
	int i;
	int aux[999];

	for (i = 0; i < n; i++)
{
                
		aux[n - i] = a[i];
}

	for ( i = 0; i < n; i++)
{
                
		a[i] = aux[i + 1];
}
}
