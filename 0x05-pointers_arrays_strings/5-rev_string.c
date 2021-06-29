#include "holberton.h"
/*
 *
 *
 */
void rev_string(char *s)
{
	int i;
	int j = s[size -1];
	for (i = j; i > 0 ; i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
