
#include <stdio.h>
/**
*main - the abc excep 2 letters
*
*Return: end program
*/
int main(void)
{
char c;
for (c = 'a'; c <= 'z'; c++)
if (!((c == 'q') || (c == 'e')))
putchar(c);
putchar('\n');
return (0);
}
