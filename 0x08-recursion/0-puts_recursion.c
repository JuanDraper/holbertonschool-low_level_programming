#include "holberton.h"
 
/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */

void _puts_recursion(char *s)
{
	int i = 0;
	if ( s[i] == '\0')
		return ;
	else
		_putchar(s[i]);

	_puts_recursion (++s);
}

