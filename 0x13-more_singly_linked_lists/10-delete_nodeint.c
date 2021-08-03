#include "lists.h"

/**
 * delete_nodeint_at_index -  blablalblblabla.
 * @head: blablalblablal
 * @index: blablalblabl.
 *
 * Return:  1 y -1.
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *tmp = *head;
	unsigned int count = 0;
	listint_t *store;

	if (*head == NULL)
		return (-1);
	if (index == 0)
	{
		*head = tmp->next;
		free(tmp);
		return (1);
	}
	while (tmp)
	{
		if (count == index - 1)
		{
			store = tmp->next->next;
			free(tmp->next);
			tmp->next = store;
			return (1);
		}
		count++;
		tmp = tmp->next;
	}
	return (-1);
}
