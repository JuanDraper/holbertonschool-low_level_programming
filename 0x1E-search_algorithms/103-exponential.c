#include "search_algos.h"
/**
* exponential_search - search a value in a sorted array of integers
* @array: first element of the array to search
* @size: sizeof array.
* @value: Value to search for.
* Return: First index where value is located or -1 if not.
*/
int exponential_search(int *array, size_t size, int value)
{
	unsigned int p2 = 1, sfb, pp = 0;
	int ret;

	if (!array || !size)
		return (-1);
	while (1)
	{
		if (array[p2] == value)
			return (p2);
		if (p2 == size - 1 || array[p2] > value)
		{
			printf("Value found between indexes [%d] and [%d]\n", pp, p2);
			sfb = p2 == 1 ? 2 : p2 - pp + 1;
			ret = binary_search(&array[pp], sfb, value);
			if (ret != -1)
				ret += pp;
			return (ret);
		}
		printf("Value checked array[%d] = [%d]\n", p2, array[p2]);
		pp = p2;
		p2 *= 2;
		if (p2 >= size)
		{
			p2 = size - 1;
			pp = size - pp;
		}
	}
}
/**
* binary_search - search a value in a	 sorted array of integers
* @array: first element of the array 
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

