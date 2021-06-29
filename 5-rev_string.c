#include "holberton.h"

/**
 * rev_string - print in reverse
 * @s: char
 * Return: 0.
 */
void rev_string(char *s)
{
	int i = 0;
	int j = 0;
	int k;


	while (s[i] != '\0')
	{
		i++;
	}
	i--;
	while (i > j)
	{
		k = s[i];
		s[i--] = s[j];
		s[j++] = k;
	}
}
