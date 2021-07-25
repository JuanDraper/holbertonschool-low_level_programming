#include "holberton.h"
/**
 * printocta - prints a hexadecimal
 * @p:  print hexadecimal
  * Return: number.
 */
int printocta( int *p)
{
	unsigned int *num;
	num =p;
	unsigned int copy;
	char *octa;
	int i, i2 = 0, cont = 0;
	(void)format;

	if (num == 0)
		return (_putchar('0'));
	for (copia = num; copy != 0; i2++)
	{
		copy = copy / 8;
	}
	octa = malloc(i2);
	if (!octa)
		return (-1);
	for (i = i2 - 1; i >= 0; i--)
	{
		octa[i] = num % 8 + '0';
		num = num / 8;
	}
	for (i = 0; i < i2 && octa[i] == '0'; i++)
		;
	for (; i < i2; i++)
	{
		_putchar(octa[i]);
		cont++;
	}
	free(octa);
	return (cont);
}

