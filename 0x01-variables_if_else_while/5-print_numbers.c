
#include <stdio.h>

/**
 *main - the abc but 2 words
 *
 *Return: end program
 */
int main(void)
{
	char n;

	for (n = 'a'; n <= 'z'; n++)
		if (!((n == 'q') || (n == 'e')))
			putchar(n);
	putchar('\n');
	return (0);
}
