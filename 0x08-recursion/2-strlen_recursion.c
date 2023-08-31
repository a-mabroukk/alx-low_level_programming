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
	int L = 0;

	if (s[L] == '\0')
	{
		return (L);
	}
	else if (s[L] != '\0')
	{
		return (1 + _strlen_recursion(s[L] + 1));
	}
}
