#include "lists.h"

/**
 * print_list -blabla
 *@h: blabla
 * Description: blabla
 *Return: blabla
 */

size_t print_list(const list_t *h)
{
	int i;

	for (i = 0; h != NULL; I++)
	{
		if (h->str == NULL)
		{
			printf("[0] (nil)\n");
		}
		else
		{
		printf("[%d] %s", h->len, h->str);
		}
		h = h->next;
	}
	return (i);
}
