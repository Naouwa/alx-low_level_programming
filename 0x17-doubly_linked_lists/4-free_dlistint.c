#include "lists.h"
/**
 * free_dlistint - it frees a dlist_t
 * @head: pointer to head of list
 *
 * Return: void
 */
void free_dlistint(dlistint_t *head)
{
	while (head != NULL)
	{
		dlistint_t *node = head->next;

		free(head);
		head = node;
	}
}
