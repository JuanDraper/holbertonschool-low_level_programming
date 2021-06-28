#include "holberton.h"
/*
 * _strlen - tells the length of a string
 *@i: the position refference
 * Return: end function
 */
int _strlen(char *s)
{
int i = 0;
while ( s[i] != '\0')
i++;
return (i);
}
