#include "holberton.h"

/**
 * reverse_array - reverse the contents of an array of integers
 * @a: array of integers
 * @n: number of elements in array
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
