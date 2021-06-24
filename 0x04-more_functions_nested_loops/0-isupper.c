#include "holberton.h"
/**
* _isupper - return 1 if c is lowercase and returns 0 otherwise
* @c: takes in a character
* Return: 1 for uppercase, 0 for lowercase
 */
int _isupper(int c)
{
if (c >= 'A' && c <= 'Z')
return (1);
else
return (0);
}
