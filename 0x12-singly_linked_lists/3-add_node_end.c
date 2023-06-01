#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "lists.h"

/**
 * add_node_end - adds a new node at the end of the list_t
 * @head: double pointer to the list_t list
 * @str: string to put in the new node
 *
 * Return: address of the new element, or Null if it fails
 */
list_t *add_node_end(list_t **head, const char *str)
{
	size_t n;
	list_t *new, *old;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);

	new->str = strdup(str);

	for (n = 0; str[n]; n++)
		;
	new->len = n;
	new->next = NULL;
	old = *head;

	if (old == NULL)
	{
		*head = new;
	}
	else
	{
		while (old->next != NULL)
			old = old->next;
		old->next = new;
	}
	return (*head);
}
