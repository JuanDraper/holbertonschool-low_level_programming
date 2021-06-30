#include "holberton.h"

/**
 *
 *
 *
 *
 */

	char *_strncat(char *dest, char *src, int n)
	{
           int i = 0;
int j;
while (dest[i] != '\0')
{
        i++;

}

/*while(src[j] != '\0' && j < n)
{
       i++;
        dest[i] = src[j];
                j++;
}
if(i == sizeof(dest[i]))
                {
                dest[i] = '\0';
                }
                return (dest);]*/
for (j = 0 ; j < n && src[j] != '\0' ; j++)
                   dest[i + j] = src[j];
               dest[i + j] = '\0';

               return dest;
                } 
