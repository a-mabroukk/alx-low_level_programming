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
	int i;

	for (i = 0; haystack[i] != '\0'; i++)
	{
		int c = i, j = 0;

		if (haystack[c] == needle[j])
		{
			for (j = 0; needle[j] != '\0'; j++)
			{
				if (haystack[c] == needle[j])
					c++;
				else
					break;
			}
		}
		if (needle[j] == '\0')
		{
			return (&haystack[i]);
		}
	}
	return ('\0');
}
