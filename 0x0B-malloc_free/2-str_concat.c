#include "main.h"
#include <stdlib.h>

/**
 * str_concat -  concatenates two strings
 *
 * @s1: a string in which to store the value
 *
 * @s2: a string to be append
 *
 * Description: Write a function that concatenates two strings
 *
 * Return: NULL
 */

char *str_concat(char *s1, char *s2)
{
	char *str;
	int size1, size2, c, ch;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	for (size1 = 0; s1[size1] != '\0'; size1++)
	{
		;
	}
	for (size2 = 0; s2[size2] != '\0'; size2++)
	{
		;
	}
	str = malloc((sizeof(*s1) * size1) + (sizeof(*s2) * size2) + 1);
	if (str == NULL)
	{
		return (NULL);
	}
	else
	{
		for (c = 0, ch = 0; c < (size1 + size2 + 1); c++)
		{
			if (c < size1)
			{
				str[c] = s1[c];
			}
			else
			{
				str[c] = s2[ch];
				ch++;
			}
		}
	}
	return (str);
}
