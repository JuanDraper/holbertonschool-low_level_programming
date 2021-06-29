#include "holberton.h"

/**
 * print_rev - print in reverse
 * @s: char arra string
 */

void print_rev(char *s)
{
int i;

while (s[i] != '\0')
{
	i++;
}
for (i -= 1; i >= 0; i--)
{
	_putchar(s[i]);
}
_putchar('\n');
}
