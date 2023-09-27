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
listint_t *prev = *head;
listint_t *curr = *head;
unsigned int position;
if (curr == NULL)
{
return (-1);
}
if (index == 0)
{
*head = curr->next;
free(curr);
return (1);
}
for (position = 0; position < index - 1; position++)
{
if (position == index)
{
prev->next = curr->next;
free(curr);
return (1);
}
prev = curr;
curr = curr->next;
}
return (-1);
}
