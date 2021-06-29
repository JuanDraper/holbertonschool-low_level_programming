#include "holberton.h"
/*
 *
 *
 */
void rev_string(char *s)
{
	int i;
	char aux[999];
	for (i = sizeof(s); i > 0 ; i--)
	{
		int j
			for( j = 0; j <= sizeof(s); j++)
			{
		aux[j]= s[i];
			}
	}
		for (i = 0; i <= sizeof(s); i++)
		{
			s[i] = aux[i];
		}
}
