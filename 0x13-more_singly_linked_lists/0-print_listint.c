#include "lists.h"
#include <stdio.h>
#include <stddef.h>
/**
 *
 *
 *
 *
 */

size_t print_listint(const listint_t *h)
{
	size_t i;
	while(h)
	{
		i++;
		printf("%i\n", h->n);
		h = h->next;
		
	}
	return (i);
}
