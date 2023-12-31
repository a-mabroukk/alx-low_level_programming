#include "main.h"

/**
 * cap_string - capitalizes all words of a string
 *
 * @str: a string
 *
 * Description: Write a function that capitalizes all words of a string
 *
 * Return: result
 */

char *cap_string(char *str)
{
	int i, j;
	char separator[] = {' ', ',', ';', '.', '!', '?', '"',
		'(', ')', '{', '}', '\n', '\t', '\0'};

	if (str[0] >= 'a' && str[0] <= 'z')
		str[0] -= ('a' - 'A');
	for (i = 1; str[i] != '\0'; i++)
	{
		for (j = 0; separator[j] != '\0'; j++)
		{
			if (str[i] == separator[j])
			{
				if (str[i + 1] >= 'a' && str[i + 1] <= 'z')
				{
					str[i + 1] = str[i + 1] - 'a' + 'A';
				}
			}
		}
	}
	return (str);
}
