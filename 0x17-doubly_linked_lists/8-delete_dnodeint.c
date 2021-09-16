#include "lists.h"
/**
 *
 *
 *
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *i = *head;
	dlistint_t *j;

	if(!head || !*head)
		return (-1);
	if(!index)
	{
		*head = i->next;
		if(i->next)
			i->next->prev = NULL;
		free(i);
		return (1);
	}
	while (index > 1)
	{
		i = i->next;
		if (!i)
			return (-1);
		index--;
	}
	j = i->next;
	if (!j)
		return (-1);
	i->next = j->next;
	if (j->next)
		j->next->prev = i;
	free(j);
	return (1);
}
