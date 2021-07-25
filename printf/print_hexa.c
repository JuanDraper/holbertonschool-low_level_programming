#include "holberton.h"
/**
 * printhex - prints a hexadecimal
 *@p: o print hexadecimal
  * Return: number.
 */
int printhex( int *p)
{
	unsigned int *num = p;
	unsigned int num2;
	int i, i2, copy, cont = 0;
	char *numhex;

	(void)format;

	if (num == 0)
		return (_putchar('0'));
	for (num2 = num; num2 != 0; cont++)
	{
		num2 = num2 / 16;
	}
	numhex = malloc(cont);
	for (i = 0; num != 0; i++)
	{
		copy = num % 16;
		if (copy < 10)
			numhex[i] = copy + '0';
		else
			numhex[i] = copy - 10  + 'a';
		num = num / 16;
	}
	for (i2 = i - 1; i2 >= 0; i2--)
		_putchar(numhex[i2]);
	free(numhex);
	return (cont);
}
/**
 * printHEX - prints a hexadecimal
 * @format: format to print hexadecimal
 * @pa: va_list that contains the hexadecimal to print
 * Return: number of digits printed
 */
int printHEX(int *p )
{
	unsigned int *NUM =p;
	unsigned int NUM2;
	int I, I2, COPY, CONT = 0;
	char *NUMHEX;

	(void)format;

	if (NUM == 0)
		return (_putchar('0'));
	for (NUM2 = NUM; NUM2 != 0; CONT++)
	{
		NUM2 = NUM2 / 16;
	}
	NUMHEX = malloc(CONT);
	for (I = 0; NUM != 0; I++)
	{
		COPY = NUM % 16;
		if (COPY < 10)
			NUMHEX[I] = COPY + '0';
		else
			NUMHEX[I] = COPY - 10 + 'A';
		NUM = NUM / 16;
	}
	for (I2 = I - 1; I2 >= 0; I2--)
		_putchar(NUMHEX[I2]);
	free(NUMHEX);
	return (CONT);
}
