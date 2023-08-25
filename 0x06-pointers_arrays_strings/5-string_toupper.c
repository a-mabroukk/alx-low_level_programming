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
	int i, j, change, replace;

	for (i = 0; m[i] != '\0'; i++)
	{
		for (j = 0; m[j] != '\0'; j++)
		{
			while ((i = 'a' && i <= 'z') && (j = 'A' && j <= 'Z'))
			{
				change = m[i];
				replace = m[j];
				m[i] = replace;
				m[j] = change;
				i++;
				j++;
			}
		}
	}
	return (m);
}
