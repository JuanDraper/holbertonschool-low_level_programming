#include "main.h"

/**
 *set_bit - blabla
 *@n: blabalba
 *@index: blabal
 *Return: blablaba
 *
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	if (index < 64)
	{
		*n = *n | (1 << index);
		return (1);
	}
	else
	{
		return (-1);
	}
}
