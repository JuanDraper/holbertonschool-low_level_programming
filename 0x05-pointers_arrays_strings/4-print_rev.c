#include "holberton.h"
/* print_rev - prints in reverse
 *@s: string to pring
 *Description: will print a string in reverse
 */
void print_rev(char *s)
{
int i;

while (s[i] != '\0')
	i++;
for (--i; i >= 0; i--)
	_putchar(s[i]);
}
