#include "holberton.h"

/**
* times_table - Entry point
*
* Description: This function prints the tables from 1 to 9
*
* Return:
*/
void times_table(void)
{
int n;
int m;
for (n = 0; n <= 9; n++)
{
for (m = 0; m <= 9; m++)
{
int r = n * m;
if (r >= 10)
{
_putchar((r / 10) + '0');
}
if (r < 10 && m > 0)
{
_putchar(' ');
}
_putchar((r % 10) + '0');
if (m < 9)
{
_putchar(',');
_putchar(' ');
}
}
_putchar('\n');
}
}
