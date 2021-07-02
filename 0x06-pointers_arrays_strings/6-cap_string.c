#include "holberton.h"

/**
 * cap_string - Capitalize a string
 * Description: This function capitalize a string. Separators of words:
 * Space, tabulation, new line, ',', ';', '.', '!', '?', '"', '(', ')'
 * '{', '}'
 * @s: String to capitalize
 * Return: @s capitalized
 */
char *cap_string(char *s)
{
	int i = 0;
	int cpt = 0;

	while (*(s + i) != '\0')
	{
		if (
			(*(s + i - 1) == ' ') || (*(s + i - 1) == '\t') ||
			(*(s + i - 1) == '\n') || (*(s + i - 1) == ',') ||
			(*(s + i - 1) == ';') || (*(s + i - 1) == '.') ||
			(*(s + i - 1) == '!') || (*(s + i - 1) == '?') ||
			(*(s + i - 1) == '"') || (*(s + i - 1) == '(') ||
			(*(s + i - 1) == ')') || (*(s + i - 1) == '{') ||
			(*(s + i - 1) == '}') || i == 0
			)
		{
			cpt = 1;
		}
		if (cpt == 1 && *(s + i) >= 97 && *(s + i) <= 122)
		{
			*(s + i) = *(s + i) - 32;
		}
		cpt = 0;
		i++;
	}
	return (s);
}
