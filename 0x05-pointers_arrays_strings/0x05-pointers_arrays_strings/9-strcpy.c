#include "holberton.h"

/**
 *_strcpy - does smth, dunno what
 *@dest : number
 *@src : number
 *
 *Return: dest
 */
char *_strcpy(char *dest, char *src)
{
	int i;

	i = 0;
	while (*(src + i) != 0)
	{
		*(dest + i) = *(src + i);
		i++;
	}
	*(dest + i) = *(src + i);
	return (dest);
}
