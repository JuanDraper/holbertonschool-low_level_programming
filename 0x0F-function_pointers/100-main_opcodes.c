
#include <stdio.h>
#include <stdlib.h>

/**
  * main - blabla
  * @argc: blabla
  * @argv: blabla
  * Return: blabla
*/  

int main(int argc, char **argv)
{
	int i;

	if (argc != 2)
	{
		printf("Error\n");
		exit(2);
	}
	if (atoi(argv[1]) < 0)
	{
		printf("Error\n");
	}

	for (i = 0; i < (atoi(argv[1]) - 1); i++)
	{
         printf("%02hhx", *(( char *) main + i));
		if (i < (atoi(argv[1]) - 1))
			printf(" ");
		else
			printf("\n");
	}
	return (0);           
	}
