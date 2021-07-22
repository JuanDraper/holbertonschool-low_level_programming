#include "variadic_functions.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * print_numbers - blablabla
 *@separator: blabla
 *@n: blablabla
 *Description: blabla
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list	vl;
	unsigned int i;

	va_start(vl, n);

	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(vl, int));
				if (separator != NULL && i < (n - 1))
				{
				printf("%s", separator);
				}
	}
	printf("\n");
	va_end(vl);
}
