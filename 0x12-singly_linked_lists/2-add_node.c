#include <stdlib.h>
#include <string.h>
#include "lists.h"
/**
 * add_node - adds a new node ar the beginning of a list_t list
 * @head: double pointer to the list_t list
 * @str: new string to add in the node
 *
 * Return: address of the new element, or NULL if it fails
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *temp;
	int len = 0;

	temp = malloc(sizeof(list_t));
	if (temp == NULL)
		return (NULL);

	while (str[len])
		len++;

	temp->str = strdup(str);
	temp->len = len;
	temp->next = *head;
	*head = temp;

	return (*head);
}
