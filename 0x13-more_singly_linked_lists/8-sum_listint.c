#include "lists.h"

/**
*sum_listint - returns the sum of all the data (n) of a listint_t linked list
*
*@head: a pointer to the head of the list
*
*Return: if the list is empty, return 0
*/
int sum_listint(listint_t *head)
{
int sum = 0;
listint_t *ptr = NULL;
ptr = head;

while (ptr != NULL)
{
sum += ptr->n;
ptr = ptr->next;
}
return (sum);
}
