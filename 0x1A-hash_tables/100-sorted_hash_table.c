#include "hash_tables.h"
/**
* shash_table_create - function that creates the shashtable.
* @size: Size
* Return: newly created table.
*/
shash_table_t *shash_table_create(unsigned long int size)
{
	shash_table_t *t;
	shash_node_t **ar;

	if (size == 0)
		return (NULL);
	t = malloc(sizeof(shash_table_t));
	if (!t)
		return (NULL);
	t->size = size;
	ar = calloc(size, sizeof(shash_node_t *));
	if (!ar)
	{
		free(t);
		return (NULL);
	}
	t->array = ar;
	t->shead = NULL;
	t->stail = NULL;
	return (t);
}
/**
* scheck_dupkeys - checks for duplicated keys.
* @h: Head node.
* @key:  new node key.
* @value: Value for the new node.
* Return: 1 if dup was found and updated or 0 otherwise.
*/
int scheck_dupkeys(const shash_node_t *h, const char *key, const char *value)
{
	shash_node_t *hn = (shash_node_t *) h;

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
* sadd_node - Add at the beggining of a list the node
* @head: Pointer to the head
* @key: Key of new elelent.
* @value: Value of new  element.
* Return: Pointer to the new first element or 0 if it fails.
*/
shash_node_t *sadd_node(shash_node_t **head, const char *key,
const char *value)
{
	shash_node_t *new;

	if (!head || !key || !strcmp(key, ""))
		return (NULL);
	new = malloc(sizeof(shash_node_t));
	if (!new)
		return (NULL);
	new->key = strdup(key);
	new->value = strdup(value);
	new->next = *head;
	new->sprev = NULL;
	new->snext = NULL;
	*head = new;
	return (new);
}
/**
* shash_table_set - Adds or updates an element on a hash table.
* @ht: Hash table.
* @key: Key of new element
* @value: Value of new element.
* Return: 1 on success, 0 on failure.
*/
int shash_table_set(shash_table_t *ht, const char *key, const char *value)
{
	unsigned long int idx;
	shash_node_t *s, *i;

	if (!ht || !key || !value || !strcmp(key, ""))
		return (0);
	idx = key_index((unsigned const char *)key, ht->size);
	if (!scheck_dupkeys(ht->array[idx], key, value))
	{
		s = sadd_node(&(ht->array[idx]), key, value);
		if (!s)
			return (0);
	}
	else
		return (1);
	if (!(ht->shead))
		ht->shead = s, ht->stail = s;
	else
	{
		for (i = ht->shead; i; i = i->snext)
			if (strcmp(s->key, i->key) <= 0)
			{
				s->snext = i;
				s->sprev = i->sprev;
				if (i->sprev)
					i->sprev->snext = s;
				else
					ht->shead = s;
				i->sprev = s;
				break;
			}
		if (!i)
		{
			ht->stail->snext = s;
			s->sprev = ht->stail;
			ht->stail = s;
		}
	}
	return (1);
}
/**
* shash_table_get - gets the value of the key-.
* @ht: Hash table.
* @key: Key to search.
* Return: Value or NULL if not found.
*/
char *shash_table_get(const shash_table_t *ht, const char *key)
{
	unsigned long int index;
	shash_node_t *iterator;

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
/**
* shash_table_print - Prints a sorted hash table.
* @ht: Sorted hash table.
*/
void shash_table_print(const shash_table_t *ht)
{
	int counter = 0;
	shash_node_t *h;

	if (ht)
	{
		h = ht->shead;
		putchar('{');
		while (h)
		{
			if (counter)
				printf(", ");
			printf("\'%s\': \'%s\'", h->key, h->value);
			h = h->snext;
			counter++;
		}
		puts("}");
	}
}
/**
* shash_table_print_rev - Prints a sorted hash table in reverse order.
* @ht: sorted hash table.
*/
void shash_table_print_rev(const shash_table_t *ht)
{
	int counter = 0;
	shash_node_t *h;

	if (ht)
	{
		h = ht->stail;
		putchar('{');
		while (h)
		{
			if (counter)
				printf(", ");
			printf("\'%s\': \'%s\'", h->key, h->value);
			h = h->sprev;
			counter++;
		}
		puts("}");
	}
}
/**
* shash_table_delete - Deletes a sorted hash table.
* @ht: Sorted hash table.
*/
void shash_table_delete(shash_table_t *ht)
{
	shash_node_t *i = ht->shead;

	while (ht->shead)
	{
		i = ht->shead->snext;
		free(ht->shead->key);
		free(ht->shead->value);
		free(ht->shead);
		ht->shead = i;
	}
	free(ht->array);
	free(ht);
}
