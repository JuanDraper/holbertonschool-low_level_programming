#include "holberton.h"

/**
*print_square - print a square
*@size : size of square
*
*Return: end program
*/
void print_square(int size)
{
int i;
if (size > 0)
{
for (i = 0; i < size; i++)
{
int j;
for (j = 0; j < size; j++)
_putchar('#');
_putchar('\n');
}
}
else
_putchar('\n');
}
