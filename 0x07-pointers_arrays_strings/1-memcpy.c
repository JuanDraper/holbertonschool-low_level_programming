#include "holberton.h"

/**
 * _memcpy - Copies memory area
 * Description: This function copies @n bytes from memory
 * area @src to memory area @dest
 * @dest: Pointer that store new memory area values
 * @src: Pointer taht cointas memory area values
 * @n: Bytes of memory area to copy
 * Return: The @dest with @src memory area values
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
unsigned int i = 0;
	while (src && i < n)
	{
	dest[i] = src[i];
	i++;
	}
	return (dest);
}
