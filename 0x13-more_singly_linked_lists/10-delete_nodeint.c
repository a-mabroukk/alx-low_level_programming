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
listint_t *ptr = NULL;
listint_t *ptr2 = *head;
unsigned int position;

if (ptr == NULL)
{
return (-1);
}
else
{
if (index == 0)
{
ptr = *head;
*head = (*head)->next;
free(ptr);
}
for (position = 0; position < index - 1; position++)
{
if (ptr == NULL)
{
return (-1);
}
ptr = ptr->next;
}
ptr2 = ptr->next;
ptr2->next = ptr->next;
free(ptr2);
}
return (1);
}

