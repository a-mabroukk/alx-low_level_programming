#include "lists.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

/**
 * print_dlistint - prints all the elements of a dlistint_t list
 *
 * @h: a pointer to list
 * Return: the number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
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
		printf("%d\n", h->n);
		h = h->next;
		counter++;
	}
	return (counter);
}
