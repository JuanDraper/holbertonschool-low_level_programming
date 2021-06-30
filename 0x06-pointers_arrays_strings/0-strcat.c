#include "holberton.h"

/**
* _strcat - concatenates two strings
*@dest: a string
*@src: another string
* Return: the concatenated string
*/

char *_strcat(char *dest, char *src)
{

int i = 0;
int j = 0;
while (dest[i] != '\0')
{
	i++;

}
while(src[j] != '\0')
{  
       i++;
	dest[i] = src[j];
		j++;
}
if(i == sizeof(dest[i]))
		{
		dest[i] = '\0';
		}
		return (dest);
		}
