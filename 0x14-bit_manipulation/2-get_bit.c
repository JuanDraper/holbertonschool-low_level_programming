#include "main.h"

/**
 *get_bit - blabla
 *@n: balba
 *@index: balbalba
 *Return:blabal
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int bit = 0;

	if (n > 0 && index < 64)
	{
		bit = (n >> index) & 1;
	return (bit);
	}
	else
	{
		return (-1);
	}
}
