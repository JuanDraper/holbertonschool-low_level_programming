#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 *
 *
 *
 *
 */
size_t print_listint_safe(const listint_t *head)
{
	int j = 0;
	size_t i;
	const listint_t *cons;

	cons = head;

	i = 0;
	while (cons != NULL)
	{
		i++;
		j = cons - cons->next;
		printf("[%p] %i\n", (void *)cons, cons->n);
		if (j > 0)
		{
			cons = cons->next;
		}
		else
		{
			printf("-> [%p] %i\n", (void *)cons->next, cons->next->n);
			break;
		}
	}
	return (i);
}
