#include "holberton.h"

/**
 *
 *
 *
 *
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


