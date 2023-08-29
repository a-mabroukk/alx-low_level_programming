#include "main.h"

/**
 * _strpbrk - searches a string for any of a set of bytes
 *
 * @s: string to be scanned
 *
 * @accept: a string containing the character to match
 *
 * Description: Write a function that searches string for any of a set of byte
 *
 * Return: a pointer to the byte in s that matches one of the bytes in accept
 * , or NULL if no such byte is found
 */

char *_strpbrk(char *s, char *accept)
{
	int i, j;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				return (s);
			}
		}
	}
	if (s[i] == '\0')
	{
		return (s);
	}
	return ('\0');
}
