#include "holberton.h"
#include <stdio.h>
/*
* main - Fizz Buzz!
*
*Rwturn: nothing
*
*
*/
int main(void)
{
int i;
for ( i = 0 ; i < 100 ; i++)
{
if( i == 0)
{
printf("%d ", i);
}
else if((i % 3 == 0) && (i % 5 != 0))
{
printf("Fizz ");
}
else if((i % 5 == 0) && ( i % 3 != 0))
{
printf("Buzz ");
}
else if(( i % 3 == 0) && (i % 5 == 0))
{
printf("Fizz Buzz ");
}
else
printf("%d " , i);
}
return (0);
}


