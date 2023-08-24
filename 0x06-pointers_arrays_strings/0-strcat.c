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
	int i = 0;
	int j = 0;

	while (dest[i] != '\0')
	{
		dest++;
		i++;
	}
	while (src[j] != '\0')
	{
		*dest = *src
		dest++;
		src++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}
