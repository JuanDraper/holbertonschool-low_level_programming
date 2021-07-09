#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - blablabla
 * @argc: blabl
 * @argv: blabla.
 *
 * Return: 1 or 0
 */
int main(int argc, char *argv[])
{
	int i = 0;
        int j = 0;
        int k = 0;

	for (i = 1; i < argc; i++)
	{
		for (j = 0; argv[i][j]; j++)
		{
			if (argv[i][j] < '0' || argv[i][j] > '9')
			{
				printf("Error\n");
				return (1);
			}
		}

		k += atoi(argv[i]);
	}

	printf("%d\n", k);

	return (0);
}
