#include "holberton.h"
/*
*swap_int - swap numbers
*@a : number
*@b : number*
*/
void swap_int(int *a, int *b)
{
int i, j;
i = *a;
j = *b;
*a = j;
*b = i;
}
