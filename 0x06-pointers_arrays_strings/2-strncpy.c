#include "holberton.h"
 /**
  *
  *
  *
  *
  */

char *_strncpy(char *dest, char *src, int n)
{

	int i;

	i = 0;
	while (*(src + i) != 0 && i < n)
	{
		*(dest + i) = *(src + i);
		i++;
	}
	*(dest + i) = *(src + i);
	return (dest);
}
