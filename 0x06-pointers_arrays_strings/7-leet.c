#include "main.h"

/**
 * leet - encodes a string
 *
 * @s: an source string
 *
 * Description: Write a function that encodes a string into 1337
 *
 * Return: value
 */

char *leet(char *s)
{
	int i, j;
	char c[] = {'A', 'a', 'E', 'e', 'O', 'o', 'T', 't', 'L', 'l', '\0'};
	char num[] = {'4', '4', '3', '3', '0', '0', '7', '7', '1', '1', '\0'};

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; j < 10; j++)
		{
			if (s[i] == c[j])
			{
				s[i] = num[j];
			}
		}
	}
	return (s);
}
