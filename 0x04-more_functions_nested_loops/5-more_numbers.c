#include "holberton.h"

/**
 * more_numbers - numbers
 *   *
 *    *Return: end program
 *     */
void more_numbers(void)
{
int i;

for (i = 0 ; i <= 9 ; i++)
{
int j;       
for (j = 0 ; j <= 14 ; j++)
{
_putchar( j + '0');
}
_putchar('\n');
}
_putchar('\n');
}

