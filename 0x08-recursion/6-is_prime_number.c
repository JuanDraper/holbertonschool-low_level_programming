#include "holberton.h"

/**
 *
 *
 *
 *
 *
 */

int is_prime_number(int n)
{  if (n < 0)
	n = -n;
	if (n == 1)
		return (1);
	if ( n % 2 == 0 )
		return (0);
	else
		return (1);
}
