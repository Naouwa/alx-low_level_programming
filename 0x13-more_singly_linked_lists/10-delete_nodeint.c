#include "lists.h"
/**
 * delete_nodeint_at_index - deletes the node at index index
 * @head: pointer of the first node
 * @index: index of the node to delete
 *
 * Return: 1 (success), or -1 (fail)
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *oldNode, *current;

	if (!*head || !head)
		return (-1);

	if (!index)
	{
		current = *head;
		*head = (*head)->next;
		free(current);
		return (1);
	}
	current = *head;
	while (current)
	{
		if (i == index)
		{
			oldNode->next = current->next;
			free(current);
			return (1);
		}
		i++;
		oldNode = current;
		current = current->next;
	}
	return (-1);
}
