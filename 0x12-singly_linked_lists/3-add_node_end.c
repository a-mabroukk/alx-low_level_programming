#include "lists.h"

/**
*add_node_end - adds a new node at the end of a list_t list
*@head: a pointer to the head of the list
*@str: a new node to be added  at the beginning of a list_t list
*Return: the address of the new element, or NULL if it failed
*/
list_t *add_node_end(list_t **head, const char *str)
{
list_t *node, *end;
size_t len;

node = malloc(sizeof(list_t));
if (node == NULL)
{
return (NULL);
}
for (len = 0; str[len] != '\0'; len++)
{
;
}
node->str = strdup(str);
node->len = len;
node->next = NULL;

if (*head == NULL)
{
*head = node;
}
else
{
end = *head;
while (end->next != NULL)
{
end = end->next;
}
end->next = node;
}
return (node);
}
