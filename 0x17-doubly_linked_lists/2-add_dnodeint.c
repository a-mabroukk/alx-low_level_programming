#include "lists.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
/**
 * add_dnodeint - adds a new node at the beginning of a dlistint_t list
 * @head: a pointer to list
 * @n: an integer
 * Return: the address of the new element, or NULL if it failed
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *temp;

	temp = malloc(sizeof(dlistint_t));
	if (temp == NULL)
	{
		return (NULL);
	}
	temp->next = NULL;
	temp->n = n;
	temp->prev = NULL;
	temp->next = *head;
	if (*head != NULL)
	{
		(*head)->prev = temp;
	}
	*head = temp;
	return (*head);
}
