
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
		exit(1);
	}
	if (atoi(argv[1]) < 0)
	{
		printf("Error\n");
		exit(2);
	}
int j = atoi(argv[1]);

	for (i = 0; i < j - 1; i++)
	{
         printf("%02hhx", *((unsigned char *) main + i));
		if (i < j - 1)
			printf(" ");
		else
			printf("\n");
	}
	return (0);           
	}
