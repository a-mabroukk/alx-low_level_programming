#include "main.h"
#include <stdlib.h>

/**
 * _strdup - returns a pointer to a new string which is a duplicate of a string
 *
 * @str: a string to be duplicate
 *
 * Description: Write a function that returns a pointer to a newly allocated
 * space in memory, which contains a copy of the string given as a parameter
 *
 * Return: NULL if str = NULL
 */

char *_strdup(char *str)
{
	char *s;
	int size, i;

	if (str == NULL)
	{
		return (NULL);
	}
	else
	{
		for (size = 0; str[size] != '\0'; size++)
		{
			;
		}
	}
	s = malloc(sizeof(*s) + 1 * size);
	if (s == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < size; i++)
	{
		s[i] = str[i];
	}
	s[i] = '\0';
	return (s);
}
