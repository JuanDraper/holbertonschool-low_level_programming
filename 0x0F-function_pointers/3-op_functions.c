#include <stdlib.h>
#include <stdio.h>
#include "3-calc.h"
/**
 * op_add -blabla
 * @a: int blabla
 * @b: blabla
 *
 * Description: blabla
 * Return: bla bla
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - blabla
 * @a: blabla
 * @b: blabla
 *
 * Description: blabla
 * Return: blabla
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul -blablas
 * @a: blabla
 * @b: blabla
 *
 * Description:blabla
 * Return: blabla
 */

int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - blabla
 * @a: blabla
 * @b: blabla
 *
 * Description: blabla
 * Return: blabla
 */
int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}

/**
 * op_mod - blalba
 * @a: blabla
 * @b: blabla
 *
 * Description: blabla
 * Return: blabla
 */
int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}
