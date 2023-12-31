#include "main.h"

/**
 * _strlen - a function that returns the length of a string
 *
 * @s: a string whose lenght is to be printed
 *
 * Description: Write a function that returns the length of a string
 *
 * Return: Length
 */

int _strlen(char *s)
{
	int L;

	for (L = 0; *s != '\0'; s++)
		++L;

	return (L);
}
