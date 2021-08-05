#include "main.h"

/**
 *flip_bits - blabla
 *@n: balbalba
 *@m: blbla
 *Return: blabla
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int r;
	int count = 0;

	r = n ^ m;

	while (r != 0)
	{
		count += r & 1;
		r = r >> 1;
	}
	return (count);
}
