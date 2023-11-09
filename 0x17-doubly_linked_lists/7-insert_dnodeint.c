#include "lists.h"
/**
 * insert_dnodeint_at_index - inserts a new node at a given position
 * @h: a pointer to list
 * @n: data for new node
 * @idx: a given position
 * Return: the address of the new node, or NULL if it failed
 */
 dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
 {
	dlistint_t *ptr = *h;
	dlistint_t *ptr2 = NULL;
	unsigned int position;

	ptr2 = malloc(sizeof(dlistint_t));
	if (ptr2 == NULL)
	{
		return (NULL);
	}
	ptr2->n = n;
	ptr2->next = NULL;
	if (idx == 0)
	{
		ptr2->next = ptr;
		*h = ptr2;
		return (ptr2);
	}
	for (position = 0; position < idx - 1; position++)
	{
		if (ptr == NULL)
		{
			return (NULL);
		}
	ptr = ptr->next;
	}
	ptr2->next = ptr->next;
	ptr->next = ptr2;
	return (ptr2);
}
