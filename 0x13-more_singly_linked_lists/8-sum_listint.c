#include "lists.h"
/**
 * sum_listint - returns the sum of all the data (n)
 * @head: pointer to the first node
 *
 * Return: sum, or 0 if the list is empty
 */
int sum_listint(listint_t *head)
{
	listint_t *temp = head;
	int sum = 0;

	while (temp)
	{
		sum += temp->n;
		temp = temp->next;
	}
	return (sum);
}
