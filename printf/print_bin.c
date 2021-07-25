#include "holberton.h"

/**
 * _bin - function to print binary
 * @bin: list being passed
 * Return: updated count return
 */
int _bin(unsigned int *p)
{
	int count = 0, i;
	int *arr;
	unsigned int *n = p ;
	unsigned int tmp = n;

	while (n / 2 != 0)
	{
		n /= 2;
		count++;
	}
	count++;
	arr = malloc(count * sizeof(int));
	if (arr == NULL)
	{
		free(arr);
		return (0);
	}
	for (i = 0; i < count; i++)
	{
		arr[i] = tmp % 2;
		tmp /= 2;
	}
	for (i = count - 1; i >= 0; i--)
	{
		_putchar(arr[i] + '0');
	}
	free(arr);
	return (count);
}i
