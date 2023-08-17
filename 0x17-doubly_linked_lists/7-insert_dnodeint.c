#include "lists.h"
/**
 * insert_dnodeint_at_index - it inserts a new node at a given position.
 * @h: pointer to the head of the list
 * @idx: index to insert new node
 * @n: integer for the new node
 * Return: the address of the new node, or NULL if it failed
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *node, *head;
	unsigned int a;

	node = NULL;
	if (idx == 0)
		node = (add_dnodeint(h, n));
	else
	{
		a = 1;
		head = *h;
		if (head != NULL)
			while (head->prev != NULL)
				head = head->prev;
		while (head != NULL)
		{
			if (a == idx)
			{
				if (head->next == NULL)
					node = add_dnodeint_end(h, n);
				else
				{
					node = malloc(sizeof(dlistint_t));
					if (node != NULL)
					{
						node->n = n;
						node->next = head->next;
						node->prev = head;
						head->next->prev = node;
						head->next = node;
					}
				}
				break;
			}
			head = head->next;
			a++;
		}
	}
	return (node);
}
