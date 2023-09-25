#include "lists.h"

/**
*pop_listint - deletes the head node of a listint_t linked list
*
*@head: a pointer to the head of the list
*
*Return: the head node’s data (n)
*/
int pop_listint(listint_t **head)
{
listint_t *temp;
int i;
if (*head == NULL)
{
return(0);
}
else
{
temp = *head;
i = temp->n;
*head = (*head)->next;
free(temp);
temp = NULL;
}
return (i);
}
