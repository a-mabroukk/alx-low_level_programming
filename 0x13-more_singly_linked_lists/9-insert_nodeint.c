#include "lists.h"

/**
*insert_nodeint_at_index - inserts a new node at a given position
*
*@head: a pointer to the head of the list
*
*@idx: the index of the list where the new node should be added
*@n: The integer for the new node to contain
*Return: the address of the new node, or NULL if it failed
*/
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
listint_t *ptr = *head;
listint_t *ptr2;
unsigned int position;

ptr2 = malloc(sizeof(listint_t));
if (ptr2 == NULL)
{
return(NULL);
}
ptr2->n = n;
ptr2->next = NULL;
if (idx == 0)
{
ptr2->next = ptr;
*head = ptr2;
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
