#include "hash_tables.h"
/**
 * hash_table_print - it prints a hash table
 * @ht: pointer to the hash table to print
 *
 * Return: void
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int index;
	hash_node_t *current;
	int first = 1;

	if (ht == NULL)
		return;

	print("{");
	for (index = 0; index < ht->size; index++)
		for (current = ht->array[index]; currenr; current = current->next)
		{
			if (first)
			{
				printf("'%s': '%s'", current->key, current->value);
				first = 0;
			}
			else
				printf(", '%s': '%s'", current->key, current->value);
		}
	printf("}\n");
}
