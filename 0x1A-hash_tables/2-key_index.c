#include "hash_tables.h"
/**
* key_index - gives the index of the key.
* @key: the hashable
* @size: Size of the array.
* Return: Index of the hashed kew
*/
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
