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
	void *arr;
	unsigned int c, as;

	if (nmemb == 0)
	{
		return (NULL);
	}
	if (size == 0)
	{
		return (NULL);
	}
	as = nmemb * size;
	arr = malloc(as);
	if (arr == 0)
	{
		return (NULL);
	}
	for (c = 0; arr[c] != '\0'; c++)
	{
		arr[c] = 0;
	}
	return (arr);
}
