#include "holberton.h"

/**
 *comp - function that returns the power of number
 *@n: original number
 *@y: counter to compare multiplication
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
*
*
*
*/
 int _sqrt_recursion(int n)
 {
 return (find_square(n, 1));
		 }


