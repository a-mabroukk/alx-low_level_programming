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
	int i, j = 0;

	for (i = 0; m[i] != '\0'; i++)
	{
		while (i = 'a' && i <= 'z')
		{
			int change, replace;

			change = m[i];
			replace = m[j];
			m[i] = replace;
			m[j] = change;
			i++;
			j++;
		}
	}
	return (m);
}
