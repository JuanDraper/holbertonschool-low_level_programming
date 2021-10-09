#include "hash_tables.h"
#include <stdio.h>
/**
* print_list - print a list
* @h: the list to be printed.
* Return: the quantity of nodes.
*/
size_t print_list(const hash_node_t *h)
{
	int c = 0;

	while (h)
	{
		if (c)
			printf(", ");
		printf("\'%s\': \'%s\'", h->key, h->value);
		h = h->next;
		c++;
	}
	return (c);
}
/**
* hash_table_print - will print a hash table
* @ht: the hash table
*/
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i;
	char f = 0;

	if (ht)
	{
		putchar('{');
		for (i = 0; i < ht->size; i++)
			if (ht->array[i])
			{
				if (f)
					printf(", ");
				f = 1;
				print_list(ht->array[i]);
			}
		puts("}");
	}
}
