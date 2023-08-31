#include "main.h"

/**
 * _strlen_recursion - returns the length of a string
 *
 * @s: a string whose length to return
 *
 * Description: Write a function that returns the length of a string
 *
 * Return: value
 */

int _strlen_recursion(char *s)
{
	int i;

	if (s[i] == '\0')
	{
		return (i);
	}
	else if (s[i] != '\0')
	{
		return (1 + _strlen_recursion(i + 1));
	}
}
