#include "holberton.h"
/*
 *
 *
 */
void rev_string(char *s)
{
	int i;
	
	for (i = sizeof(s); i > 0 ; i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
