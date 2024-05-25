#include "search_algos.h"

/**
 * jump_list - searches for a value in a sorted array of integers
 * @list: pointer to the head of the list
 * @size: size of list
 * @value: int value we are looking for
 *
 * Return: Null or value index pointer
 */
listint_t *jump_list(listint_t *list, size_t size, int value)
{
	size_t step_size, step;
	listint_t *node, *jump;

	if (list == NULL || size == 0)
		return (NULL);

	step_size = sqrt(size);
	node = jump = list;

	while (jump->index + 1 < size && jump->n < value)
	{
		node = jump;
		for (step = 0; step < step_size && jump->next; step++)
		    jump = jump->next;
		printf("Value checked at index [%ld] = [%d]\n", jump->index, jump->n);
	}

	printf("Value found between indexes [%ld] and [%ld]\n", node->index, jump->index);

	while (node && node->index <= jump->index)
	{
		printf("Value checked at index [%ld] = [%d]\n", node->index, node->n);
		if (node->n == value)
			return (node);
		node = node->next;
	}
	
	return (NULL);
}
