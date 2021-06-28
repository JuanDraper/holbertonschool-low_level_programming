#include "holberton.h"
/**
* swap_int - swap valunes of two numbers
* @a: int pointer type
* @b: int pointer type
*/
void swap_int(int *a, int *b)
{
int i, j;
i = *a;
j = *b;
*a = j;
*b = i;
}
