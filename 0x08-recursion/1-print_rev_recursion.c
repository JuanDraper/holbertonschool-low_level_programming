#include "holberton.h"

/**
 *_puts_recursion - print a string
 *@s: is a string
 */

void _puts_recursion(char *s)
{
	if (*s == '\0')
		return;
	

	_puts_recursion(s + 1);
        	_putchar(*s);
	
	
}
