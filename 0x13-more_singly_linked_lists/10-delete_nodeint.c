#include "lists.h"

/**
*delete_nodeint_at_index - deletes the node at index index of a linked list
*
*@head: a pointer to the head of the list
*
*@index: the index of the node that should be deleted
*
*Return: 1 if it succeeded, -1 if it failed
*/
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
listint_t *prev;
listint_t *curr;
unsigned int position;
if (!head || !*head)
{
return (-1);
}

if (!index)
{
curr = *head;
*head = (*head)->next;
free(curr);
return (1);
}
curr = *head;
while (curr != NULL)
{
if (position == index)
{
prev->next = curr->next;
free(curr);
return (1);
}
position++;
prev = curr;
curr = curr->next;
}
return (-1);
}
