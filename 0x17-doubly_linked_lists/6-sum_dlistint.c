#include "lists.h"
/**
 * sum_dlistint - returns sum of all the data (n) of a dlistint_t linked list
 * @head: a pointer to list
 * Return: if the list is empty, return 0
 */
int sum_dlistint(dlistint_t *head)
{
	dlistint_t *node = head;
	int sum = 0;

	while (node != NULL)
	{
		sum += node->n;
		node = node->next;
	}
	return (sum);
}
