#include "hash_tables.h"
/**
 * hash_table_set - it  adds an element to the hash table.
 * @ht:  the hash table to add or update the key/value to
 * @key: the key str
 * @value: the value associated with the key.
 *
 * Return: 1 success, 0 if failed.
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{

	unsigned long int i, index = 0;
	hash_table_t *new;
	char *cp_value;/*copy of the value*/

	/*if (!ht || !key || *key == '\0' || !value)
		return (0);

	cp_value = strdup(value);
	if (cp_value == NULL)
		return (0);

	index = key_index((const unsigned char *)key, ht->size);
	for (i = index; ht->array[i]; i++)
	{
		if (strcmp(ht->array[i]->key, key) == 0)
		{
			free(ht->array[i]->value);
			ht->array[i]->value = cp_value;
			return (1);
		}
	}

	new = malloc(sizeof(hash_node_t));
	if (new == NULL)
	{
		free(cp_value);
		return (0);
	}
	new->key = strdup(key);
	if (new->key == NULL)
	{
		free(new_node);
		return (0);
	}
	new->value = cp_value;
	new->next = ht->array[index];
	ht->array[index] = new;

	return (1);*/
}
