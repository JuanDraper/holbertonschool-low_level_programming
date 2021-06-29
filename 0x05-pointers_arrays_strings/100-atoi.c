#include "holberton.h" 

/**
* _atoi - parse numbers
*@s: number to parse
* Return: smth
*/

int _atoi(char *s)
{
	int i = 0;
	int sign;
	int numb;
	while ( *(s + i) != '\0')
	{
		i++;
		
	if ( *(s + i) == '-')
	{ 
	sign = -1;
	}
	else if ( *(s + i) == '+')
			{
			sign = 1;
			}
	}
	i = 0;
	while ( *(s + i) != '\0')
	{
		if (* (s + i) >= '0' && *(s + i) <= 9)
		{
	numb = (*(s + i) + '0');
			i++;
		}
		else 
		{ 
		numb = '\0';
	}
	}
	return sign * numb;
	
}

			
