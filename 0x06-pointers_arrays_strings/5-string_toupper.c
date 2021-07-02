#include "holberton.h"

/**
 * string_toupper - Change all lowercase letters to uppercase
 * @src: string
 * Return: src
 */

char *string_toupper(char *src)
{
int i = 0;
while (src[i] != '\0')
{
	i++;
	if (src[i] >= 97 && src[i] <= 123)
	{
		src[i] -= 32;
	}

}
return (src);
}
