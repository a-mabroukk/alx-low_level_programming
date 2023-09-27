#include "lists.h"

/**
*reverse_listint - reverses a listint_t linked list
*
*@head: a pointer to the head of the list
*Return: value
*/
listint_t *reverse_listint(listint_t **head)
{
listint_t *prev = NULL;
listint_t *node = NULL;

while (*head != NULL)
{
node = (*head)->next;
(*head)->next = prev;
prev = *head;
*head = node;
}
*head = prev;
return (*head);
}
