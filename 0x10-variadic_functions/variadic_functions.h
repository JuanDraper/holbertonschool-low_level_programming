#ifndef VARIADIC_FUNCTIONS_H
#define VARIADIC_FUNCTIONS_H
#include <stdarg.h>

int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);
typedef struct formatTypes
{
	char *type;
	void (*f)(char *separator, va_list vl);
	/**
	 *@type: balbla
	 *Description: blabla
	 */
} formatType;
#endif
