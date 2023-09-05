#include "main.h"
#include <stdlib.h>

/**
 * create_array -  creates an array of chars, and initializes it
 *
 * @size: size of memory to point
 *
 * @c: specific character
 *
 * Return:  a pointer to the array, or NULL if it fails
 */

char *create_array(unsigned int size, char c)
{
	char *arr;
	unsigned int i;

	if (size == 0)
	{
		return (NULL);
	}
	arr = malloc(sizeof(c) * size);
	if (arr == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < size; i++)
	{
		arr[i] = c;
	}
	return (arr);
}
