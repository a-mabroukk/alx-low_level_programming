#include "lists.h"
/**
 * get_dnodeint_at_index -  returns the nth node of a dlistint_t linked list
 * @head: a pointer to list
 * @index: nth node of a dlistint_t linked list
 * Return: if the node does not exist, return NULL
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *node = head;
	unsigned int access;

	if (head == NULL)
	{
		return (NULL);
	}
	for (access = 0; access < index; access++)
	{
	if (node == NULL)
	{
		return (NULL);
	}
	node = node->next;
	}
	return (node);
}
