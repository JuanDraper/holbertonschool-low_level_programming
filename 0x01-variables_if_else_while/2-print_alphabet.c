#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main : prints the alphabet one letter at a time *
 * Return: Always 0 (Success)
 *Description : this program shall print all letters, one line each
 */
int main(void)
{
char letter;
for (letter = "a"; letter <= "z"; letter++)
{
putchar(letter);
putchar ('\n');
}
return (0);
}
