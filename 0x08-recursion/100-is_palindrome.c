#include "holberton.h"
/**
 * lengthOf - returns the length of a string.
 * @s: the string to count
 * Return: length of the string
 */
int lengthOf(char *s)
{
	if (*s)
	{
		s++;
		return (1 + lengthOf(s));
	}
	return (0);
}
/**
 * checker - helper function for is_palindrome
 * @str: the string
 * @i: length of string
 * @j: counter of recursion
 * Return: 1 if string is a palindrome, 0 if it is not.
 */
int checker(char *str, int i, int j)
{
	if (j >= i)
		return (1);
	if (str[i] == str[j])
		return (checker(str, i - 1, j + 1));
	return (0);
}
/**
 * is_palindrome - checks if the string is a palindrome
 * @s: the string to check
 * Return: 1 if string is a palindrome, 0 if it is not.
 */
int is_palindrome(char *s)
{
	int i = lengthOf(s);
	int j = 0;

	return (checker(s, i - 1, j));
}
