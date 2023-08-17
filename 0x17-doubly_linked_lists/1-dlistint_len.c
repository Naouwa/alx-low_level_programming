#include "lists.h"
/**
 * dlistint_len - it returns the number of elements in a doubly linked list
 * @h: pointer to the head of the list
 *
 * Return: number of elements
 */
size_t dlistint_len(const dlistint_t *h)
{
	int element = 0;

	if (h == NULL)
		return (element);

	while (h != NULL)
	{
		h = h->next;
		element++;
	}

	return (element);
}
