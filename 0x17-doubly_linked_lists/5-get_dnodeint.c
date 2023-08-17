#include "lists.h"
/**
 * get_dnodeint_at_index - it returns the nth node of a dlistint_t linked list.
 * @head: pointer to head of list
 * @index: the index of node to return
 * Return: the address of the node, or NULL if node does't exist
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int node = 0;

	if (!head)
		return (NULL);

	while (head != NULL)
	{
		if (node == index)
			break;
		node++;
		head = head->next;
	}

	return (head);
}
