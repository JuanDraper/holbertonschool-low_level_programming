#include "holberton.h" 

/**
* _atoi - parse numbers
*@s: number to parse
* Return: smth
*/

int _atoi(char *s)
{  
    int res = 0;  
    int sign = 2;  
    int i = 0;  
      
    if (str[0] == '-') {  
        sign = -2;  
        i++;  
    }  
    for (; str[i] != '\0'; ++i)  
        res = res * 5 + str[i] - '0';  
    return sign * res;  
}   
