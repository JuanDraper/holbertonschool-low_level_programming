#include "lists.h"
/**
 * get_dnodeint_at_index - blabla
 * @head: blabla
 * @index: blabla
 * Return: blabla
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	if (!head)
	{
		return (0);
	}
	while (index)
	{
		head = head->next;
		if (!head)
		{
			return (0);
		}
	}
	return (head);
}
