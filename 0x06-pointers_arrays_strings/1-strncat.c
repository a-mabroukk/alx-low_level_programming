#include "main.h"

/**
 * _strncat - concatenates two strings
 *
 * @dest: a string in which to store the value
 *
 * @src: a string to be append
 *
 * @n: represent the maximum number of character to be append
 *
 * Description: Write a function that concatenates two strings
 *
 * Return: value
 */

char *_strncat(char *dest, char *src, int n)
{
	int i, L = 0;

	while (dest[L] != '\0')
	{
		L++;
	}
	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[L] = src[i];
		L++;
	}
	if (i < n)
	{
		dest[L] = '\0';
	}
	return (dest);
}
