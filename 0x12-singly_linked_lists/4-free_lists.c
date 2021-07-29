#include "lists.h"

/**
 * free_list -blablabla
 * @head: blablabl
 * Return: blabla
 */
void free_list(list_t *head)
{
	list_t *i;

	while (head)
	{
		i = head;
		head = head->next;
		free(i->str);
		free(i);
	}
}
