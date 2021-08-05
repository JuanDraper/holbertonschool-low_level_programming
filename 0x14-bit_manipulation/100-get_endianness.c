#include "main.h"

/**
 *get_endianness - blabla
 *Return: blbalblabl
 *
 *
 */

int get_endianness(void)
{
	unsigned int i= 1;
	char *c = (char *) &i;

	if (c[0] == 1)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
