#include "holberton.h"

/**
 * _puts - print a string+
 * @str: pointer to a string
 * Description: a description
 */

void _puts(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
