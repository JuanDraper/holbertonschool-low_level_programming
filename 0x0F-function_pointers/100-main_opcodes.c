
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
<<<<<<< HEAD
}

=======
	for (i = 0; i < atoi(argv[1]) - 1; i++)
                    ;
}
>>>>>>> 60ccb841153f9388fd0705c4ecb7f2110804e525
