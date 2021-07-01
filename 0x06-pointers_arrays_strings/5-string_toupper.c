#include "holberton.h"
/**
 *
 *
 *
 *
 */

char *string_toupper(char *src)
{
int i = 0;
while (src[i] != '\0')
{
	i++;
	if (src[i] >= 97 && src[i] <= 123)
	{
		src[i] -=32;
	}

}
return src;
}
