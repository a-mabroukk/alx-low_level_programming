#include "main.h"

/**
 * _strcpy - copies the string
 *
 * @dest: a string in which to store the value
 *
 * @src: a string to be copy
 *
 * Description: Write a function that copies the string
 *
 * Return: value
 */

char *_strcpy(char *dest, char *src)
{
	int i, L;

	for (L = 0; *src != '\0'; src++)
	{
		L++;
	}
	for (i = 0; i < L; i++)
	{
		dest[i] = src[i];
	}
	*dest = '\0';
	return (dest);
}
