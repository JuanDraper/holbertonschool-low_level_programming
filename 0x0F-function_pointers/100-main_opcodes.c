
#include <stdio.h>
#include <stdlib.h>

/**
  * main - blabla
  * @argc: blabla
  * @argv: blabla
  * Return: blabla
*/

int main(int argc, char *argv[])
{
	int i, j;

	if (argc != 2)

	{
		printf("Error\n");
		exit(1);
	}

	j = atoi(argv[1]);

	if (j < 0)
	{
		printf("Error\n");
		exit(2);
	}

	for (i = 0; i < j; i++)
	{
		printf("%02hhx", *((unsigned char *) main + i));
		if (i < j - 1)
			printf(" ");
		else
			printf("\n");
	}
	return (0);
}
