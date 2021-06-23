
#include "holberton.h"
#include <stdio.h>
/**
* print_to_98 - Print all natural numbers from n to 98
* @n: int type number
*/
void print_to_98(int n)
{
int j = n;
while (start != 98)
{
printf("%d", j);
putchar(',');
putchar(' ');
if (n > 98)
j--;
else
j++;
}
printf("98\n");
}
