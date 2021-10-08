#include "hash_tables.h"
#include <stdlib.h>
/**
* free_list - function to free the linked list.
* @head: first eleement of list pointer.
*/
void free_list(hash_node_t *head)
{
	hash_node_t *i;

	while (head)
	{
		i = head->next;
		free(head->key);
		free(head->value);
		free(head);
		head = i;
	}
}
/**
* hash_table_delete - function that deletes a hashtable
* @ht: the hashtable
*/
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int i;

	for (i = 0; i < ht->size; i++)
		if (ht->array[i])
			free_list(ht->array[i]);
	free(ht->array);
	free(ht);
}
