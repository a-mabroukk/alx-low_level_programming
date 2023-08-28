#include "main.h"

/**
 * _strchr - locates a character in a string
 *
 * @s: a string
 *
 * @c: the first occurrence of the character is string s
 *
 * Description: Write a function that locates a character in a string
 *
 * Return: a pointer to the first occurrence of the character c
 */

char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (c == s[i])
		{
			return (s[i]);
		}
	}
	return ('\0');
}
