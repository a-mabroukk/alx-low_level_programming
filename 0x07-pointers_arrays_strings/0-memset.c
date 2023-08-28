#include "main.h"

/**
 * _memset - fills memory with a constant byte
 *
 * @s: a pointer
 *
 * @n: the first bytes of the memory area pointed to by s
 *
 * @b: the constant byte
 *
 * Description: Write a function that fills memory with a constant byte
 *
 * Return: pointer to the memory area s
 */

char *_memset(char *s, char b, unsigned int n)
{
	 int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
