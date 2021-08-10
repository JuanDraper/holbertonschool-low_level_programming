#include "main.h"
#include <stdio.h>
/**
 * main - blabla
 *
 *@argc: blablal
 *@argv: blablal
 *
 * Return: blabla
 */

int main(int argc, char *argv[])
{
	int i, j;
	ssize_t r, w;
	char buff[1024];

	if (argc != 3)
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n"), exit(97);
	if (argv[1] == NULL)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	i = open(argv[1], O_RDONLY);
	if (i == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	j = open(argv[2], O_CREAT | O_EXCL | O_WRONLY, 0664);
	if (j < 0)
		fd2 = open(argv[2], O_TRUNC | O_WRONLY);
	if (j == -1)
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]), exit(99);
	while (r)
	{
		r = read(i, buff, 1024);
		if (r == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
			exit(98);
		}
		w = write(j, buff, r);
		if (w == -1 || w != r)
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]), exit(99);
	}
	if (close(i) == -1)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", i), exit(100);
	if (close(j) == -1)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", j), exit(100);
	return (0);
}
