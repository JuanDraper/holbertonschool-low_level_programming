#include "function_pointers.h"

/**
 * array_iterator - blbalbal
 *@array: blabla
 *@size: bla
 *@action: blabla
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
size_t i;
for (i = 0; i < size; i++)
{
	action(array[i]);
}
}
