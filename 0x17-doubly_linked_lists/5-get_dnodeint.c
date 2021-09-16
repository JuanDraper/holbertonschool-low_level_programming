#include "lists.h"
/**
 * get_dnodeint_at_index - blabla
 * @head: blabla
 * @index: blabla
 * Return: blabla
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i;

	if (!head)
	{
		return (0);
	}
	for (i = 0; i <= index; i++)
	{
		head = head->next;
		if (!head)
		{
			return (0);
		}
	}
	return (head);
}
