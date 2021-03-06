#include "search_algos.h"
#include <math.h>
/**
* jump_search - search a value in a sorted array of integers
* @array: first element of the array t
* @size: Number of elements in array.
* @value: Value to search for.
* Return: First index where value is located or -1 if not.
*/
int jump_search(int *array, size_t size, int value)
{
	unsigned int sqroot, i, j;

	if (!array || !size || array[0] > value)
		return (-1);
	sqroot = sqrt(size);
	for (i = 0; i < size; i += sqroot)
	{
		if (array[i] >= value)
			break;
		printf("Value checked array[%d] = [%d]\n", i, array[i]);
	}
	printf("Value found between indexes [%d] and [%d]\n", i - sqroot, i);
	for (j = i - sqroot; j <= i; j++)
	{
		if (j >= size)
			return (-1);
		printf("Value checked array[%d] = [%d]\n", j, array[j]);
		if (array[j] == value)
			return (j);
	}
	return (-1);
}
