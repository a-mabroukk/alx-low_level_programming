#include "main.h"

/**
 * _strncpy - copies a string
 *
 * @dest: a string in which to store the value
 *
 * @src: a string to be copy
 *
 * @n: represent the maximum number of character to be append
 *
 * Description: Write a function that copies a string
 *
 * Return: value
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && dest[i] != '\0'; i++)
	{
		;
	}
	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[i] = src[i];
		i++;
	}
	if (i < n)
	{
		dest[i] = '\0';
	}
	return (dest);
}
