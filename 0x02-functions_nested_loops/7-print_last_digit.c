#include "holberton.h"
/**
* print_last_digit - tells the absolute value of an integer
* @i: int type number
* Return: absolute value of @n
*/
int print_last_digit(int i)
{
int digit = i % 10;
if (i > 0)
{
_putchar(digit + '0');
return (digit);
}
else if (i == 0)
{
_putchar( i + '0');
return (i);
}
_putchar(digit *(-1) + '0');
return (digit * (-1));
}
