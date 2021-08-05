#include "main.h"

/**
 *clear_bit - blblalba
 *@n: blabla
 *@index: blabla
 *Return: blabla
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	long int set = 1;

	if (index < 64)
	{
		set = ~(1 << index);
		*n = *n & set;
		return (1);
	}
	else
	{
		return (-1);
	}

}
