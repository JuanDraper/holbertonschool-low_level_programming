#include "holberton.h"
/**
 * * _islower - return 1 if c is lowercase and returns 0 otherwise
 * * @c: takes in a character
 * * Return: 0 for uppercase, 1 for lowercase
 *  */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{ 
	return (1);
	}
	else
	return (0);
}	
