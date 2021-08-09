#include "main.h"

/**
 * append_text_to_file - blablabla
 *
 *@filename: blablabla
 *@text_content: blablabla
 *
 * Return:blablabla
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int i, j, k;

	
	if (filename == NULL)
		return (-1);

	
	i = open(filename, O_APPEND | O_WRONLY);
	if (i == -1)
		return (-1);
	
	if (text_content == NULL)
	{
		close(i);
		return (1);
	}
	
	for (j = 0; text_content[j] != '\0'; j++)
		;
		
	k = write(i, text_content, j);
	if (k < 1)
		return (-1);
		
	close(i);
	return (1);
}
