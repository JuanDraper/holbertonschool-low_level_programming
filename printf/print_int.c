#include "holberton.h"
/**
 * _aux - calculates the absolute value.
 * @number: input.
 * Return: value.
 */
int _aux(int number)
{
	if (number < 0)
		return (-1 * number);
	else
		return (number);
}

/**
 * digitCounter - counts the digits.
 * @number: input integer
 * Return: digit count
 */
int digitCounter(int number)
{
	int count = 0;
	int number2 = number;

	if (number <= 0)
		count += 1;

	while (_aux(number2) != 0)
	{
		number2 = number2 / 10;
		count++;
	}
	return (count);
}
/**
 * print_int - a function that prints an integer.
 * @number: input integer
 * Return: digit count
 */
int print_int(int number)
{
	unsigned int unint;
	int count;

	count = digitCounter(number);
if (number < 0)
{
_putchar('-');
unint = -number;
}
	else
		unint = number;

	if (unint >= 10)
		print_int(unint / 10);
	_putchar(unint % 10 + '0');

	return (count);
}

/**
 * printnum - prints a number
 * @p:  print number
  * Return: number of characters printed
 */
int printnum( int *p)
{
	int *number =p
	int num;
	(void)format;
i
	num = print_int(number);

	return (num);
}
}
