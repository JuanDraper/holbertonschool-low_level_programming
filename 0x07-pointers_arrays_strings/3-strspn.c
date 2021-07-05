#include "holberton.h"

/**
 *
 *
 *
 *
 */

unsigned int _strspn(char *s, char *accept)
{
int i;
int j;
int ret = 0;

		for (i = 0; *(s + i)  == 0; i++)
			{
	        		for (j = 0; *(accept + j) == 0; j++)
				{
			
		
				if (*(s + i) == *(accept + j))
					ret++;
		
			}
		}
	return (ret);
}
