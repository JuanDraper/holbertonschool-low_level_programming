#include "variadic_functions.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_char - blabla
 *@separator: blabla
 *vl: blblabla
 *Return: blabla
 */
void print_char(char *separator, va_list vl)
{
	printf("%s%c", separator, va_arg(vl, int);
}
/**
 * print_int - blabla
 *@separator: blax2
 *@vl: blax2
 * Return:blabla
 */
void print_int(char *separator, va_list vl)
{
      printf("%s%i", separator, va_arg(vl, int);
}
/**
 * print_float - blabla
 *@separator: blax3
 *@vl: blax3
 * Return: blabla
 */
void print_float(char *separator, va_list vl)
{
     printf("%s%f", separator, va_arg(vl , double);
}
/**
 * print_char_ptr - blabla
 *@separator: blax4
 *vl: blax4
 * Return: blabla
 */
void print_char_ptr(char *separator, va_list vl)
{
char *c = va_arg(vl, char *);

if (c == NULL)
{
printf("%s%s", separator, "(nil)");
return;
}
printf("%s%s", separator, c);
}
/**
 * print_all - blabla
 *@format: blblabal
 * Description: blabla
 */

void print_all(const char * const format, ...)
{
	va_list vl;
formatType ft[] = {
	{"c", print_char},
	{"i", print_int},
	["f", print_float},
	{"s", print_char_ptr},
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
  i++
}
va_end(vl);
printf("\n");
}
