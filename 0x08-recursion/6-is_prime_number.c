#include "holberton.h"

/**
 *
 *
 *
 *
 */

int is_prime_number(int n)
{
if (n <= 1)
	return (0);
return (_prime(n, n - 1));
}

/**
 *
 *
 *
 *
 */

int _prime(int n, int i)
{
	if (i == 1)
		return (1);
	if (i > 0 && n % i == 0)
		return (0);
	return (_prime(n, i - 1));
}
