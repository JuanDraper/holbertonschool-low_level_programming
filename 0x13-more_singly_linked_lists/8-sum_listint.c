#include "lists.h"

/**
 * sum_listint - blablal
 * @head: blablabalb
 *
 * Return: blalba
 */
int sum_listint(listint_t *head)
{
	int sum = 0;

	while (head)
	{
		sum += head->n;
		head = head->next;
	}

	return (sum);
}
