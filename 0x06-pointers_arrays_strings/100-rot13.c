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
	char *abc = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char *ABC = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";
	int i, j;

	for (i = 0; str[i] != '\0'; i++)
	{
		for (j = 0; abc[j] != '\0'; j++)
		{
			if (str[i] == abc[j])
			{
				str[i] = ABC[j];
			}
		}
	}
	return (str);
}
