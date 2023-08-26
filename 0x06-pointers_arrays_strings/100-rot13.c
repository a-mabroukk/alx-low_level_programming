#include "main.h"

/**
 * rot13 - a function that encodes a string using rot13
 *
 * @str: a string to be encode
 *
 * Description: Write a function that encodes a string using rot13
 *
 * Return: value
 */

char *rot13(char *str)
{
	int abc[53] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l',
		'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x',
		'y', 'z', 'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J',
		'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V',
		'W', 'X', 'Y', 'Z'};
	int ABC[53] = {'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y',
		'z', 'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k',
		'l', 'm', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W',
		'X', 'Y', 'Z', 'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I',
		'J', 'K', 'L', 'M'};
	int i, j;

	for (i = 0; str[i] != '\0'; i++)
	{
		while (abc[j] != '\0' && str[i] != abc[j])
		{
			j++;
			if (str[i] == abc[j])
			{
				str[i] = ABC[j];
			}
		}
	}
	return (str);
}
