#include "hash_tables.h"

/**
 * make_hash_node -  makes hash node
 * @key: key for the node
 * @value: value for the node
 * Return: the new node, or NULL on failure
 */
hash_node_t *make_new_hashnode(const char *key, const char *value)
{
	hash_node_t *nd;

	nd = malloc(sizeof(hash_node_t));
	if (nd == NULL)
		return (NULL);
	nd->key = strdup(key);
	if (nd->key == NULL)
	{
		free(nd);
		return (NULL);
	}
	nd->value = strdup(value);
	if (nd->value == NULL)
	{
		free(nd->key);
		free(nd);
		return (NULL);
	}
	nd->next = NULL;
	return (nd);
}


/**
 * hash_table_set - 
 * @ht: 
 * @key: 
 * @
 *
 * Return: 1
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int idx;
	hash_node_t *nd, *tmp;
	char *newValue;
	
	if (ht == NULL || ht->array == NULL || ht->size == 0 ||
	    key == NULL || strlen(key) == 0 || value == NULL)
		return (0);
	idx = key_index((const unsigned char *)key, ht->size);
	tmp = ht->array[idx];
	while (tmp != NULL)
	{
		if (strcmp(tmp->key, key) == 0)
		{
			newValue = strdup(value);
			if (newValue == NULL)
				return (0);
			free(tmp->value);
			tmp->value = newValue;
			return (1);
		}
		tmp = tmp->next;
	}
        nd = make_new_hashnode(key, value);
	if (nd == NULL)
		return (0);
	nd->next = ht->array[idx];
	ht->array[idx] = nd;
	return (1);
}
