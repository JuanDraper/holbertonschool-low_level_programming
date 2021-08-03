#include "lists.h"

/**
 * reverse_listint - blalbalbla
 * @head: blablabla
 * Return: balblalblal.
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *tmp = NULL;
	listint_t *store = NULL;

	while (*head)
	{
		store = (*head)->next;
		(*head)->next = tmp;
		tmp = *head;
		*head = store;
	}
	(*head) = tmp;
	return (*head);
}
