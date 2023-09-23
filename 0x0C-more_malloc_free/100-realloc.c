#include "main.h"
#include <stdlib.h>

/**
 * _realloc - reallocates a memory block using malloc and free
 *
 * @ptr: pointer to the memory previously allocated with a call to malloc
 *
 * @old_size: is the size, in bytes, of the allocated space for ptr
 *
 * @new_size: is the new size, in bytes of the new memory block
 *
 * Description: function that reallocates a memory block using malloc and free
 *
 * Return: NULL
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *mem;
	unsigned int c;

	if (ptr == NULL)
	{
		mem = malloc(new_size);
		return (mem);
	}
	if (new_size == old_size)
	{
		return (ptr);
	}
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	if (new_size > old_size)
	{
		mem = malloc(new_size);
		if (mem == NULL)
		{
			return (NULL);
		}
		else
		{
			for (c = 0; c <= old_size && c < new_size; c++)
			{
				*((char *)mem + c) = *((char *)ptr + c);
			}
			free(ptr);
		}
	}
	return (mem);
}
