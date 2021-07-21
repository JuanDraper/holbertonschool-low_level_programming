#include "function_pointers.h"

/**
 * print_name - bblabla
 *@name: blabla
 *@f: blabla
 */
void print_name(char *name, void (*f)(char *))
{
	if (f && name)
	f(name);
}
