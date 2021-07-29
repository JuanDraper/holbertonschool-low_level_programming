#include "lists.h"
#include <stdio.h>
/**
 * list_len - blabla
 *@h: blablabla
 * Return: bla
 */

size_t list_len(const list_t *h)
{
	size_t i;

	while (h)
	{
		i++;
		h = h->next;
	}
	return (i);
}
