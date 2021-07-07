#include "holberton.h"

/**
 *_strlen_recursion - return a length string
 *@s: string
 *Return: length  string
 */

int _strlen_recursion(char *s)
{
	int i;
	if (*s == '\0')
		
	{
		return (0);
	}
	else
	{
		i = 1 + _strlen_recursion(s + 1);
	}
	return (i);
}
