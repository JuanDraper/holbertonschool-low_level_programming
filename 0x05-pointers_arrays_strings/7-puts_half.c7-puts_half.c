#include "holberton.h"

/**
 *puts_half - print halsies
 *@str : string
 *
 *Return: 0
 */
void puts_half(char *str)
{
	int i = 0;
	int j;
	while (*(str + i) != 0)
	{
		i++;
		j = i -1;
	}
	i = 0;
	while (*(str + i) != 0)
	{
	if (i > j / 2)
	{
	       	_putchar(*(str + i));
	}
	i++;
	}
	_putchar('\n');
}


