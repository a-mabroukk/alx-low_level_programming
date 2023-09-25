#include "lists.h"

/**
*get_nodeint_at_index - returns the nth node of a listint_t linked list
*
*@head: a pointer to the head of the list
*
*@index: is the index of the node, starting at 0
*
*Return: if the node does not exist, return NULL
*/
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
listint_t *node;
unsigned int c;
for (c = 0; c < index; c++)
{
if (head == NULL)
{
return (NULL);
}
node = head;
if (node == NULL)
{
return (NULL);
}
node = node->next;
}
return (node);
}
