#include "lists.h"
/**
 * pop_listint - deletes the head node of a listint_t linked list
 * @head: pointer to the first node
 *
 * Return: head node’s data (n), or 0 if list empty
 */
int pop_listint(listint_t **head)
{
	int node;
	listint_t *temp;

	if (!*head || !head)
		return (0);

	node = (*head)->n;
	temp = (*head)->next;
	free(*head);
	*head = temp;

	return (node);
}
