#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - concatenates two strings
 *
 * @s1: a string in which to store the value
 * @s2: a string to be append
 *
 * @n: size of new string
 *
 * Description: Write a function that concatenates two strings
 *
 * Return: pointer shall point to a newly allocated space in memory
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *str;
	unsigned int size1, size2, c1, c2;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	for (size1 = 0; s1[size1] != '\0'; size1++)
	{
		;
	}
	for (size2 = 0; s2[size2] != '\0'; size2++)
	{
		;
	}
	if (n >= size2)
	{
		n = size2;
		str = malloc(sizeof(char) * (size1 + size2 + 1));
	}
	if (str == NULL)
	{
		return (NULL);
	}
	for (c1 = 0; c1 < size1; c1++)
	{
		str[c1] = s1[c1];
	}
	for (c2 = 0; c2 < n; c2++)
	{
		str[c1] = s2[c2];
		c2++;
	}
	str[c1] = '\0';
	return (str);
}
