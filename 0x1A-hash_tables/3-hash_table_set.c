#include "hash_tables.h"
#include <stdlib.h>
#include <string.h>
/**
* check_dupkeys - checks for duplicated keys.
* @h: Head node.
* @key:  new node key.
* @value: Value for the new node.
* Return: 1 if dup was found and updated or 0 otherwise.
*/
int check_dupkeys(const hash_node_t *h, const char *key, const char *value)
{
	hash_node_t *hn = (hash_node_t *) h;

	while (hn)
	{
		if (!strcmp(hn->key, key))
		{
			free(hn->value);
			hn->value = strdup(value);
			return (1);
		}
	hn = hn->next;
	}
	return (0);
}
/**
* add_node - Add at the beggining of a list the node
* @head: Pointer to the head
* @key: Key of new elelent.
* @value: Value of new  element.
* Return: Pointer to the new first element or 0 if it fails.
*/
hash_node_t *add_node(hash_node_t **head, const char *key, const char *value)
{
	hash_node_t *new;

	if (!head)
		return (NULL);
	new = malloc(sizeof(hash_node_t));
	if (!new)
		return (NULL);
	new->key = strdup(key);
	new->value = strdup(value);
	new->next = *head;
	*head = new;
	return (new);
}
/**
* hash_table_set - Adds or updates an element on a hash table.
* @ht: Hash table.
* @key: Key of new element
* @value: Value of new element.
* Return: 1 on success, 0 on failure.
*/
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;

	if (!ht || !key || !value || !strcmp(key, ""))
		return (0);
	index = key_index((unsigned const char *)key, ht->size);
	if (!check_dupkeys(ht->array[index], key, value))
		if (!add_node(&(ht->array[index]), key, value))
			return (0);
		return (1);
}
