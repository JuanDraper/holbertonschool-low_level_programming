#include "holberton.h"

/**
 * _strncat - function is similar to the _strcat
 * @dest: char pointer
 * @src: char pointer
 * @n: int
 * Return: dest
 */

	char *_strncat(char *dest, char *src, int n)
	{
int i = 0;
int j;
while (dest[i] != '\0')
{
i++;

}
for (j = 0 ; j < n && src[j] != '\0' ; j++)
dest[i + j] = src[j];
dest[i + j] = '\0';
return (dest);
                } 