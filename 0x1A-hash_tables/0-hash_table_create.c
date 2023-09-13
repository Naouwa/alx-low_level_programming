#include "hash_tables.h"
/**
 * hash_table_create - it creates a hash table
 * @size: size of the array
 *
 * Return: a pointer to the newly created hash table, or NULL if failed
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	unsigned long int i = 0;
	hash_table_t *ht;

	ht = malloc(sizeof(hash_table_t));
	if (ht == NULL)
	{
		fprintf(stderr, "Error: malloc failed\n");
		return (NULL);
	}

	ht->size = size;
	ht->array = malloc(sizeof(hash_node_t *) * size);
	if (ht->array == NULL)
	{
		fprintf(stderr, "Error: malloc failed\n");
		return (NULL);
	}

	for (;i < size; i++)
		ht->array[i] = NULL;

	return (ht);
}
