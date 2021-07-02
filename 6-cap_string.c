#include "holberton.h"

/**
 *cap_string - print a message with printf
 *@s : number
 *
 *Return: end program
 */
char *cap_string(char *s)
{
	int i, j, k, l, m;
	int lis[] = {44, 59, 46, 33, 63, 32, 34, 40, 41, '{', '}', '\t', '\n',};

	j = 65 - 97;
	k = 0;
	for (i = 0; s[i] != 0; i++)
	{
		k = 0;
		for (l = 0; l < 12; l++)
			k += (s[i] == lis[l]);
		m += k;
		if (((s[i] <= 'z') && (s[i] >= 'a')) && m)
		{
			s[i] += j;
			m = 0;
		}
		if (m && !(k))
			m = 0;
	}
	return (s);
}
