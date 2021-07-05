#include "holberton.h"

/**
 *leet - print a message with printf
 *@s : number
 *
 *Return: end program
 */
char *leet(char *s)
{
	int i, j;
	int src[] = {'a', 'A', 'e', 'E', 'o', 'O', 't', 'T', 'l', 'L'};
	int des[] = {'4', '4', '3', '3', '0', '0', '7', '7', '1', '1'};

	for (i = 0; s[i] != 0; i++)
	{
		for (j = 0; j < 10; j++)
		{
			if (s[i] == src[j])
				s[i] = des[j];
		}
	}
	return (s);
}
