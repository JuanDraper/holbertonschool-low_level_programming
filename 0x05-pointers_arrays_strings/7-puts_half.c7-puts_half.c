#include "holberton.h"

/**
 *puts_half - halfsies
 *@str : string
 *
 *Return: 0
 */
void puts_half(char *str)
{
	int i;
	int j;

	i = 0;
	while (*(str + i) != 0)
		i++;
	j = i - 1;
	i = 0;
	while (*(str + i) != 0)
	{
		if (i > (j / 2))
			_putchar(*(str + i));
		i++;
	}
	_putchar('\n');
}
