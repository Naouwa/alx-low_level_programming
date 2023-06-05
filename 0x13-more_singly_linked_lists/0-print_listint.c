#include "lists.h"
#include <stdio.h>

/**
 * print_listint - prints all elements of a linked list
 * @h: a pointer to the first node
 *
 * Return: number of nodes
 */

size_t print_listint(const listint_t *h)
{
	size_t elements = 0;

	while (h)
	{
		printf("%d\n", h->n);
		elements++;
		h = h->next;
	}
	return (elements);
}
