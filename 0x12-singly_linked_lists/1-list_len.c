#include "lists.h"
/**
*list_len - returns the number of elements in a linked list_t list
*@h: a pointer to slngle linked list
*Return: the number of elements in a linked list
*/
size_t list_len(const list_t *h)
{
size_t counter = 0;
if (h != NULL)
{
counter++;
h = h->next;
}
return (counter);
}
