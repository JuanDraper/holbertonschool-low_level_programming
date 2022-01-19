#include "search_algos.h"
/**
* linear_search -  searches for a value in an array
* @array: Pointer of first elememnt of array.
* @size: Number of elements in array.
* @value: Value to search for.
* Return: index where value is located.
*/
int linear_search(int *array, size_t size, int value)
{
	unsigned int i;

	if (!array)
		return (-1);
	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%d] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}
	return (-1);
}
