#include "lists.h"

/**
*print_listint - prints all the elements of a listint_t list
*@h: a pointer to list
*Return: the number of nodes
*/
size_t print_listint(const listint_t *h)
{
size_t counter = 0;
const listint_t *ptr = NULL;
ptr = h;

while (ptr != NULL)
{
printf("%d\n", ptr->n);
counter++;
ptr = ptr->next;
}
return (counter);
}
