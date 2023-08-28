#include "main.h"

/**
 * _memcpy - copies memory area
 *
 * @dest: a memory area in which to store the value
 *
 * @src: a memory to be copied
 *
 * @n: a bytes copied from src to memory area dest
 *
 * Return: a pointer to dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
