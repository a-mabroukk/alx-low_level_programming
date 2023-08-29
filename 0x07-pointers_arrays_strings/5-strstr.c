#include "main.h"

/**
 * _strstr - locates a substring
 *
 * @haystack: a string
 *
 * @needle: substring
 *
 * Description: Write a function that locates a substring
 *
 * Return:  pointer to the beginning of the located substring, or NULL
 */

char *_strstr(char *haystack, char *needle)
{
	int i, j;

	for (i = 0; haystack[i] != '\0'; i++)
	{
		for (j = 0; needle[j] != '\0'; j++)
		{
			if (haystack[i] == needle[j])
			{
				return (&needle[j]);
			}
		}
		if (needle[j] != haystack[i])
		{
			return (haystack[i]);
		}
	}
	return ('\0');
}
