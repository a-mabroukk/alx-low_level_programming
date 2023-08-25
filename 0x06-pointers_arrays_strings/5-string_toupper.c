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
	int i;

	for (i = 0; m[i] != '\0'; i++)
	{
		if (m[i] >= 'a' && m[i] <= 'z')
		{
			m[i] = m[i] - 'a' + 'A';
		}
	}
	return (m);
}
