#include "main.h"

/**
 * _strcat - concatenates two strings
 *
 * @dest: a string in which to store the value
 *
 * @src: a string to be append
 *
 * Description: Write a function that concatenates two strings
 *
 * Return: result
 */

char *_strcat(char *dest, char *src)
{
	int i, j;

	for (i = 0; dest[i] != '\0'; i++)
	{
		;
	}
	for (j = 0; src[j] != '\0'; j++)
	{
		dest[i] = src[j];
	}
	return (dest);
}
