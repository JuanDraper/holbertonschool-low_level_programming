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
	dlistint_t *i = *h;
	dlistint_t *new;

	if ((!*h && idx) || !h)
		return (NULL);
	while (idx > 1)
	{
		i = i->next;
		if (!i)
			return (0);
		idx--;
	}
	new = malloc(sizeof(dlistint_t));

	if (!new)
		return (0);
	if (!idx)
	{
		new->prev = NULL;
		if (i)
			i->prev = new;
		*h = new;
		new->next = i;
	}
	else
	{
		new->next = i->next;
		if (i->next)
		{
			i->next->prev = new;
			i->next = new;
			new->prev = i;
		}
	}
	new->n = n;
	return (new);
}
