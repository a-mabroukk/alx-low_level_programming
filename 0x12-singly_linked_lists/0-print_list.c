#include "lists.h"
/**
*print_list - prints all the elements of a list_t list
*@h: a pointer to list
*Return: the number of nodes
*/
size_t print_list(const list_t *h)
{
const list_t *ptr = NULL;
size_t counter = 0;
if (h == NULL)
{
printf("[0] (nil)\n");
}
ptr = h;
while (ptr != NULL)
{
printf("[%u] %s\n", ptr->len, ptr->str);
counter++;
ptr = ptr->next;
}
return (counter);
}
