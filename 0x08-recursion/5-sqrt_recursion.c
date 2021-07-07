#include "holberton.h"

/**
 *find_square -  returns the power of number
 *@n: n
 *@i: i
 *
 *Return: square root
 */

int find_square(int n, int i)
{
if (i * i == n)
       {
       return (i);
       }
       if ( i * i > n)
       {
       return (-1);
       }
       return (find_square(n, i + 1));
       }

/**
 *_sqrt_recursion - function that returns the power of number
 *@n: number
 *Return: the natural square root
 */

 int _sqrt_recursion(int n)
 {
 return (find_square(n, 1));
		 }


