#include <stdio.h>
/**
 *main - print numbers
 *
 *Return: end program
 */
int main(void)
{
  int i,
  int a
  for (i = 0; i <= 9; i++)
    {
      for (a = i; a <= 9; ia++)
	{
	  if (i != a)
	    {
	      putchar(i + '0');
	      putchar(a+ '0');
	      if (i < 8)
		{
		  putchar(',');
		  putchar(' ');
		}
	    }
	}
    }
  putchar('\n');
  return (0);
}
