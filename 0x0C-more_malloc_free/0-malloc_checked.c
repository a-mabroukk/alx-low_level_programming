#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - allocates memory using malloc
 *
 * @b: size of array
 *
 * Description: Write a function that allocates memory using malloc
 *
 * Return: pointer to the allocated memory
 */

void *malloc_checked(unsigned int b)
{
	void *array;

	array = malloc(b);
	if (array == 0)
	{
		exit(98);
	}
	return (array);
}
