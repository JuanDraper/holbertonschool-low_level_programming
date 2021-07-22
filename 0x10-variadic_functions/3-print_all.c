#include "variadic_functions.h"
#include <stdio.h>
#include <stdlib.h>

/**
  * print_all - Prints all operation
  * @format: The conversion specifier to prints
  *
  * Return: None
  */
void print_all(const char * const format, ...)
{
	va_list vl;
	formatType ft[] = {
		{"c", print_char},
		{"i", print_int},
		{"f", print_float},
		{"s", print_char_ptr}
	};

	unsigned int i = 0, j;
	char *separator = "";

	va_start(vl, format);

	while (format != NULL && format[i])
	{
		j = 0;
		while (j < 4)
		{
			if (format[i] == *ft[j].type)
			{
				ft[j].f(separator, vl);
				separator = ", ";
			}
			j++;
		}
		i++;
	}
	va_end(vl);
	puts("\n");
}

/**
  * print_char - Prints a char
  * @separator: string pointer
  * @ap: A list of variadic arguments
  *
  * Return: None
  */
void print_char(char *separator, va_list vl)
{
	printf("%s%c", separator, va_arg(vl, int));
}

/**
  * print_int - Prints a integer
  * @separator: string pointer
  * @ap: A list of variadic argument
  *
  * Return: None
  */
void print_int(char *separator, va_list vl)
{
	printf("%s%i", separator, va_arg(vl, int));
}

/**
  * print_float - Prints a float character
  * @separator: string pointer
  * @ap: A list of variadic argument
  *
  * Return: None
  */
void print_float(char *separator, va_list vl)
{
	printf("%s%f", separator, va_arg(vl, double));
}

/**
  * print_char_ptr - Prints a char pointer content
  * @separator: string pointer
  * @ap: A list of variadic argument
  *
  * Return: None
  */
void print_char_ptr(char *separator, va_list vl)
{
	char *ar = va_arg(vl, char *);

	if (ar == NULL)
	{
		printf("%s%s", separator, "(nil)");
		return;
	}

	printf("%s%s", separator, ar);
}
