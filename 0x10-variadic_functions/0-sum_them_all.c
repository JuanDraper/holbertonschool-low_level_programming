#include "variadic_functions.h"

/**
 * sume_them_all - blablabla
 *@n: blabla
 * Return: blabla
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list vl;
	unsigned int i;
	int suma = 0;

	if (n == 0)

	{
		return (0);
	}
	va_start(vl, n);

for (i = 0; i < n; i++)
{
suma += va_arg(vl, int);
}
va_end(vl);
	return (suma);
	}
