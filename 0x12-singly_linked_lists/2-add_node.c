#include "lists.h"

/**
*add_node - adds a new node at the beginning of a list_t list
*@head: a pointer to the head of the list
*@str: a new node to be added  at the beginning of a list_t list
*Return: the address of the new element, or NULL if it failed
*/
list_t *add_node(list_t **head, const char *str)
{
list_t *n_node;
size_t len;

n_node = malloc(sizeof(list_t));
if (n_node == NULL)
{
return (NULL);
}
for (len = 0; str[len] != '\0'; len++)
{
;
}
n_node->str = strdup(str);
n_node->len = len;
n_node->next = *head;
*head = n_node;

return (n_node);
}
