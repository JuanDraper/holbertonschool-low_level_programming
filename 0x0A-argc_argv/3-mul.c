#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * main -blablabla
 *@argc: blablabla
 *@argv: blablabla
 * Return: Always 0 (Success)
 */
int main(int argc, __attribute__((unused)) char *argv[])
{
	int i;

	if (argc == 3)
	{
		i = atoi(argv[1]) * atoi(argv[2]);
		printf("%d\n", i);
	}
	else
	{
		printf("Error");
	}
	return (0);
}
