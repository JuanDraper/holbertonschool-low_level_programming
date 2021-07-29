#include "lists.h"
#include <stdlib.h>
#include <string.h>

/**
 * add_node -blablabla
 *@head: blabla
 *@str: blabla
 * Return: bla
 */

list_t *add_node(list_t **head, const char *str)
{
	char *newList = strdup(str);
	list_t *new_list = NULL;
	int i;

	if (!newList)
	{
		return (NULL);
	}
	new_list = malloc(sizeof(list_t));
	if (!new_list)
	{
		free(new_list);
		return (NULL);
	}
	for (i = 0; str[i] != '\0'; i++)
		;
	new_list->str = newList;
	new_list->len = i;
	new_list->next = *head;
	*head = new_list;
	return (new_list);
}

