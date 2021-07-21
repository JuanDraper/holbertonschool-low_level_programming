#include "3-calc.h"
#include <stdio.h>

/**
 * main - blblablablblablablablablalbalblabla
 * @argc: blablar
 * @argv: blabla
 *
 * Description: blablbal
 *
 * Return:
 */
int main(int argc, char *argv[])
{
	int (*f)(int, int);

	if (argc != 4)
	{
		puts("Error");
		exit(98);
	}
        if (argv[2] && argv[1] != '\0')

		puts("Error")
			exit(99);

	f = get_op_func(argv[2]);

	if (!f)
	{
		puts("Error");
		exit(99);
	}

	printf("%d\n", f(atoi(argv[1]), atoi(argv[3])));

	return (0);
}
