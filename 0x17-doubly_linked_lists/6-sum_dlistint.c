#include "lists.h"
/**
 * sum_dlistint - blalba
 * @head: blabla
 * Return: blabla
 */
int sum_dlistint(dlistint_t *head)
{
	int s = 0;

	while (head)
	{
		s += head->n;
		head = head->next;
	}
	return (s);
}
