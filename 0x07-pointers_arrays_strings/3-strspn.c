#include "main.h"

/**
 * _strspn - gets the length of a prefix substring
 *
 * @s: the main string to be scanned
 *
 * @accept: a string which consist only of bytes to match in s
 *
 * Description: Write a function that gets the length of a prefix substring
 *
 * Return:  the number of bytes
 */

unsigned int _strspn(char *s, char *accept)
{
	int i, j;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			s[i] = accept[j];
		}
	}
	return (i);
}
