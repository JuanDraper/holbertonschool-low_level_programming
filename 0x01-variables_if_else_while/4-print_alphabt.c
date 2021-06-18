
#include <stdio.h>

/**
 *main - the abc excep 2 letters
 *
 *Return: end program
 */
int main(void)
{
  char i;

  for (i = 'a'; i <= 'z'; i++)
    if (!((i == 'q') || (i == 'e')))
      putchar(i);
  putchar('\n');
  return (0);
}
