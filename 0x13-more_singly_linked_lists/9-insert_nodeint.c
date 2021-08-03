#include "lists.h"

/**
 * insert_nodeint_at_index - blablalblablalbal.
 * @head: blablalblablalblal
 * @idx: blablalblalb
 * @n: blablalbla
 *
 * Return:  blbllablalba
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new = (listint_t *) malloc(sizeof(listint_t));
	listint_t *temp = *head;
	unsigned int count = 0;

	if (new == NULL)
		return (NULL);
	new->n = n;
	if (idx == 0)
	{
		new->next = (*head);
		(*head) = new;
	}
	else
	{
		while (temp != NULL)
		{
			if (count == idx - 1)
			{
				new->next = temp->next;
				temp->next = new;
			}
			count++;
			temp = temp->next;
		}
	}
	if (idx > count)
		return (NULL);
	return (new);
}
