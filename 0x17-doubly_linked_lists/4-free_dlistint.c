#include "lists.h"
/**
 * free_dlistint - frees a dlistint_t list
 * @head: a ponter to list
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *current;

	current = head;
	while (head != NULL)
	{
		head = head->next;
		free(current);
	}
}