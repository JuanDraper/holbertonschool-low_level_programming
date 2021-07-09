#include "holberton.h"
#include <stdio.h>

/**
* main - main
*@argc: blabla
*@argv: blabla
* Return: 0
*/

int main(int argc, __attribute__((unused)) char *argv[])
{
	int i;

	if (argc > 1)
	{
		for (i = 0; i < argc; i++)
			;
		printf("%d\n", i - 1);
	}
	else
	{
		printf("0\n");
	}
	return (0);
}
