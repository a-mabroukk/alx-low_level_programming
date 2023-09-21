#include "lists.h"
/**
*print_list - prints all the elements of a list_t list
*@h: a pointer to list
*Return: the number of nodes
*/
size_t print_list(const list_t *h)
{
size_t counter = 0;
const list_t *ptr = NULL;
ptr = h;

while (ptr != NULL)
{
if (ptr->str != NULL)
{
printf("[%d] %s\n", ptr->len, ptr->str);
}
else if (ptr->str == NULL)
{
printf("[0] (nil)\n");
}
counter++;
ptr = ptr->next;
}
return (counter);
}
