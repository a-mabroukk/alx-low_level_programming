#include "main.h"

/**
 * string_toupper - changes all lowercase letters of a string to uppercase
 *
 * @m: a string
 *
 * Description: a function changes all lowercase letters of a string
 *
 * Return: result
 */

char *string_toupper(char *m)
{
	int i, j;

	for (i = 0; m[i] != '\0'; i++)
	{
		;
	}
	for (m[i] = 'a'; m[i] <= 'z'; m[i]++)
	{
		for (m[j] = 'A'; m[j] <= 'Z'; m[j]++)
		{
			int change, replace;

			change = m[i];
			replace = m[j];
			m[i] = replace;
			m[j] = change;
		}
	}
	return (m);
}
