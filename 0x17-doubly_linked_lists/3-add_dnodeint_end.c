#include "lists.h"
/**
 * add_dnodeint_end - it adds a new node at the end of a d_linked list
 * @head: pointer to the head of the list
 * @n: data to add to the new node
 *
 * Return: the address of the new element, or NULL if it failed
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new = malloc(sizeof(dlistint_t));
	dlistint_t *old;

	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = NULL;

	old = *head;

	if (*head == NULL)
	{
		new->next = *head;
		*head = new;
	}
	else
	{
		while (old->next)
			old = old->next;
		old->next = new;
	}
	new->prev = old;

	return (new);
}
