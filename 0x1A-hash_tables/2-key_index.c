#include "hash_tables.h"
/**
 * key_index - it gives the index of a key.
 * @key: the key
 * @size: size of the array of the hash table
 *
 * Return: index of the key
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	if (key == NULL || size == 0)
		return (0);

	return (hash_djb2(key) % size);
}
