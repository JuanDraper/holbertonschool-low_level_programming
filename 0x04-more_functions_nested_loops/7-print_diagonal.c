#include "holberton.h"

/**
*print_diagonal - print a diagonal
*@n : n
*
*Return: end program
*/
void print_diagonal(int n)
{
int i;
if (n > 0)
{
for (i = 0; i < n; i++)
{
int j;
for (j = 0; j < i; j++)
_putchar(' ');
_putchar('\\');
_putchar('\n');
}
}
else
_putchar('\n');
}
