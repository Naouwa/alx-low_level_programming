#include "lists.h"
/**
 * reverse_listint - reverses a listint_t linked list.
 * @head: pointer to the first node
 *
 * Return: pointer to the first node of the reversed list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *oldNode = NULL, *next = NULL;

	while (*head)
	{
		next = (*head)->next;
		(*head)->next = oldNode;
		oldNode = *head;
		*head = next;
	}
	*head = oldNode;
	return (*head);
}
