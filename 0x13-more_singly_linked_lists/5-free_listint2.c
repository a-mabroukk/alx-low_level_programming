#include "lists.h"

/**
*free_listint2 - frees a listint_t list
*
*@head: a pointer to the head of the list
*/
void free_listint2(listint_t **head)
{
listint_t *node, *temp;

node = *head;
while (node != NULL)
{
node = node->next;
free(temp);
temp = node;
}
*head = NULL;
}
