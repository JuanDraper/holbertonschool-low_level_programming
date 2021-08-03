#include "lists.h"

/**
 * pop_listint - blablabla
 * @head: blabalbla
 * Return: blabla
 */

int pop_listint(listint_t **head)
{
	listint_t *accsesory;
	int i;

	if (*head == NULL)
		return (0);

	accsesory = *head;
	i = (*head)->n;
	*head = (*head)->next;

	free(accsesory);

	return (i);
}
