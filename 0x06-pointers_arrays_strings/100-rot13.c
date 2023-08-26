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
	char abc[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char ABC[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";
	int j;

	for (j = 0; j < 52; j++)
	{
		if (str == abc[j])
		{
			str = ABC[j];
		}
	}
	return (str);
}
