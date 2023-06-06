#include "lists.h"
/**
 * insert_nodeint_at_index -inserts a new node at a given position.
 * @head: pointer to the first node
 * @idx: index where the new node should be added.
 * @n: data to insert
 *
 * Return:  address of the new node, or NULL if it failed
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i = 0;
	listint_t *newNode, *temp = *head;

	newNode = malloc(sizeof(listint_t));
	if (!head || !newNode)
		return (NULL);

	newNode->n = n;
	newNode->next = NULL;

	if (idx == 0)
	{
		newNode->next = *head;
		*head = newNode;
		return (newNode);
	}

	for (i = 0; temp && i < idx; i++)
	{
		if (i == idx - 1)
		{
			newNode->next = temp->next;
			temp->next = newNode;
			return (newNode);
		}
		else
			temp = temp->next;
	}
	return (NULL);
}
