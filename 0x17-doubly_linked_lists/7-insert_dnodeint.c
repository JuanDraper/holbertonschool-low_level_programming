#include "lists.h"
/**
 * insert_dnodeint_at_index - blbla
 * @h: blabla
 * @idx: blabla
 * @n: blabla
 * Return: bñbña
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *iterator = *h, *new;

	if ((!*h && idx) || !h)
		return (0);

	while (idx > 1)
	{
		iterator = iterator->next;
		if (!iterator)
			return (0);
		idx--;
	}
	new = malloc(sizeof(dlistint_t));
	if (!new)
		return (0);
	if (!idx)
	{
		new->prev = NULL;
		if (iterator)
			iterator->prev = new;
		*h = new;
		new->next = iterator;
	}
	else
	{
		new->next = iterator->next;
		if (iterator->next)
			iterator->next->prev = new;
		iterator->next = new;
		new->prev = iterator;
	}
	new->n = n;
	return (new);
}
