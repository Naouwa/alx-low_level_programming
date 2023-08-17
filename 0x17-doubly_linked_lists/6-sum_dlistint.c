#include "lists.h"
/**
 * sum_dlistint - it returns the sum of all the data of linked list
 * @head: pointer to head of list
 * Return: 0 if list is empty
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
