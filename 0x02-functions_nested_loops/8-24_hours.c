#include "holberton.h"
/**
* jack_bauer - Print every minute of the day of Jack Bauer
* Description: Start from 00:00 to 23:59
*/
void jack_bauer(void)
{
int i = 0;
int j;
while(i < 24
{
if ( i < 12)
{
_putchar ( '0' + ('0' + i) + ':');
}
else
{
_putchar( '0' + i + ':');
}
for ( j =0 ; j < 60 ; j++)
{
if (j <10)
{
_putchar( '0' + ( j + '0'));
}
else 
{
_putchar (j + '0');
}
}
}
}
