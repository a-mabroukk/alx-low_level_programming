#include "main.h"

/**
 * _strlen - a function that returns the length of a string
 *
 * @s: a string whose lenght is to be printed
 *
 * Description: Write a function that returns the length of a string
 *
 * Return: value
 */

int _strlen(char *s)
{
	int L = *s_length(*s);

	for (L = 0; *s[L] != '\0'; L++)
		return (L);
}
