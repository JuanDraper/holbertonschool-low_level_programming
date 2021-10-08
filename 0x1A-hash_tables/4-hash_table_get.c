#include "hash_tables.h"
/**
* hash_table_get gets the value of the key-.
* @ht: Hash table.
* @key: Key to search.
* Return: Value or NULL if not found.
*/
char *hash_table_get(const hash_table_t *ht, const char *key)
{
        unsigned long int index;
        hash_node_t *iterator;

        if (!ht || !key || !strcmp(key, ""))
                return (NULL);
        index = key_index((unsigned const char *)key, ht->size);
        iterator = ht->array[index];
        while (iterator)
        {
                if (!strcmp(iterator->key, key))
                        return (iterator->value);
                iterator = iterator->next;
        }
        return (NULL);
}
