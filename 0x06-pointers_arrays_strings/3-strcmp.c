#include "main.h"

/**
 * _strcmp - compares two strings
 *
 * @s1: first string to be compare
 *
 * @s2: second string to be compare
 *
 * Description: Write a function that compares two strings
 *
 * Return: result
 */

int _strcmp(char *s1, char *s2)
{
	if (*s1 != '\0')
	{
		while (*s2 != '\0')
		{
			if (*s1 == *s2)
			{
				return (0);
			}
			s2++;
		}
		s1++;
	}
	else
	{
		return (*s1 - *s2);
	}
}
