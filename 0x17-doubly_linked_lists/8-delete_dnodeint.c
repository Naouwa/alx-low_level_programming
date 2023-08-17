#include "lists.h"
/**
 * delete_dnodeint_at_index - deletes the node at index index of a list
 * @head: pointer to head of list
 * @index: node to delete
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *tmp;

	if (*head == NULL)
		return (-1);

	tmp = *head;

	if (index == 0)
	{
		*head = tmp->next;
		if (*head != NULL)
			(*head)->prev = NULL;
		free(tmp);
		return (1);
	}

	{
		unsigned int i;

		for (i = 0; tmp != NULL && i < index; i++)
			tmp = tmp->next;

		if (tmp == NULL)
			return (-1);

		if (tmp->prev != NULL)
			tmp->prev->next = tmp->next;

		if (tmp->next != NULL)
			tmp->next->prev = tmp->prev;

		free(tmp);
		return (1);
	}
}
