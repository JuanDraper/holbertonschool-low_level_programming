#include "holberton.h"

/**
*_isupper - Entry point
*@c: charater to check
*Return: if is lower or upper return 1 else 0
*/
int _isdigit(int c)
{
if ((c >= 'a' && c <='z')  || (c >= 'A' && c <= 'Z'))
return (0);
else
return (1);
}
