#include "lists.h"
/**
 * dlistint_len - blbabla
 * @h: blabla
 * Return: blabla
 */
size_t dlistint_len(const dlistint_t *h)
{
	int i = 0;

	while (h)
	{
		h = h->next;
		i++;
	}
	return (i);
}
