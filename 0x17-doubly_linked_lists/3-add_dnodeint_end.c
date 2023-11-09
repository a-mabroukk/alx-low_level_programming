#include "lists.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
/**
 * add_dnodeint_end - adds a new node at the end of a dlistint_t list
 * @head: a pointer to list
 * @n: data of new node
 *
 * Return: the address of the new element, or NULL if it failed
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *temp, *current;

	temp = malloc(sizeof(dlistint_t));
	if (temp == NULL)
	{
		return (NULL);
	}
	temp->n = n;
	temp->next = NULL;
	current = *head;

	while (current != NULL && current->next != NULL)
	{
		current = current->next;
	}
	if (current != NULL)
	{
		current->next = temp;
	}
	temp->prev = current;
	return (*head);
}
