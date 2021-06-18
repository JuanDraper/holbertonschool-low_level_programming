#include <stdio.h>

/**
 * main : prints the alphabet one letter at a time *
 * Return: Always 0 (Success)
 */
int main(void)
{
int letter;
for (letter = "a", letter <= "z", letter++)
putchar(letter);
putchar ("\n");
return (0);
}
