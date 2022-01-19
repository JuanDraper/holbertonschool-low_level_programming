#include "search_algos.h"
/**
* binary_search - search a value in a sorted array of integers
* @array: first element of the array .
* @size: size ofarray.
* @value: Value to search for.
* Return: Index where value is located or -1 if not.
*/
int binary_search(int *array, size_t size, int value)
{
	unsigned int l = 0, r = size - 1, m, i;

	if (!array || !size)
		return (-1);
	while (1)
	{
		printf("Searching in array: ");
		for (i = l; i < r; i++)
			printf("%d, ", array[i]);
		printf("%d\n", array[i]);
		m = (r + l) / 2;
		if (array[m] == value)
			return (m);
		else if (l == r)
			return (-1);
		else if (array[m] < value)
			l = m + 1;
		else
			r = m - 1;
		if (l > r)
			return (-1);
	}
}
