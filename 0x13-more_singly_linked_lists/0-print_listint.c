#include "lists.h"

/**
 * print_listint - blablalba
 * @h: ballblal
 * Return:sblabla
 */
size_t print_listint(const listint_t *h)
{
	size_t l = 0;

	while (h)
	{
		printf("%d\n", h->n);
		l++;
		h = h->next;
	}
	return (l);
}
