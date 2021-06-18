#include <stdio.h>

/**
 * main - alphabet in lowercase, followed by a new line
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
  int letter;

  for (letter = ‘a’; letter <= ‘z’; letter++)
    putchar(letter);
  putchar (‘\n’);
  return (0);
}
