#include "holberton.h"

/**
 * _strspn - search string for set of bytes
 * @s: char string array
 * @accept: char array to check bytes with
 * Return: Number of bytes in the intial segmet
 */

unsigned int _strspn(char *s, char *accept)
{ 
unsigned int i, j;

	for (i = 0; s[i]; i++)
	{
		for (j = 0; accept[j]; j++)
		{
			if (s[i] == accept[j])
				break;
		}
		if (!accept[j])
			break;
	}
	return (i);
}
