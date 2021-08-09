#include "main.h"

/**
*read_textfile - blbala
*@filename: blabla
*@letters: blabal
*Return: blabla
*/
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t i, j, k;
	char *buffer;

	if (filename == NULL)
		return (0);

	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
		return (0);

	i = open(filename, O_RDONLY);
	j = read(i, buffer, letters);
	k = write(STDOUT_FILENO, buffer, j);

	if (i == -1 || j == -1 || k == -1 || k != j)
	{
		free(buffer);
		return (0);
	}

	free(buffer);
	close(i);

	return (k);
}
