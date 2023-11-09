#include "lists.h"

/**
 * dlistint_len - returns the number of elements in a linked dlistint_t list
 * @h: a pointer to list
 * Return: the number of elements
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t counter = 0;

	if (h == NULL)
	{
		return (counter);
	}
	while (h->prev != NULL)
	{
		h = h->prev;
	}
	while (h != NULL)
	{
		h = h->next;
		counter++;
	}
	return (counter);
}
