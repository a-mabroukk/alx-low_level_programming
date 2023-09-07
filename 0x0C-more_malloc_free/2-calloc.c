#include "main.h"
#include <stdlib.h>

/**
 * _calloc - allocates memory for an array, using malloc
 *
 * @nmemb: elements of array
 *
 * @size: size of array
 *
 * Description: Write a function that allocates memory for array using malloc
 *
 * Return: pointer to the allocated memory
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *arr;
	unsigned int c, SIZE;

	if (nmemb == 0)
	{
		return (NULL);
	}
	if (size == 0)
	{
		return (NULL);
	}
	SIZE = nmemb * size;
	arr = malloc(SIZE);
	if (arr == 0)
	{
		return (NULL);
	}
	for (c = 0; c < SIZE; c++)
	{
		arr[c] = 0;
	}
	return (arr);
}
