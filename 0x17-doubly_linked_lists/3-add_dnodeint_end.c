#include "lists.h"
/**
 * add_dnodeint_end - blabla
 * @head: blabla
 * @n: blabla
 *  Return: blabla
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new, *i = *head;

	if (!head)
		return (NULL);
	new = malloc(sizeof(dlistint_t));
	if (!new)
		return (NULL);
	new->n = n;
	new->next = NULL;
	if (!*head)
	{
		new->prev = *head;
		*head = new;
		return (new);
	}
	while (i->next)
		i = i->next;
	i->next = new;
	new->prev = i;
	return (new);
}
