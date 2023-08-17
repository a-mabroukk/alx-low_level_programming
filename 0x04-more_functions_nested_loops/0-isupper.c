#include "main.h"

/**
 * _isupper - checks for uppercase character
 *
 * @c: the character to be checked
 *
 * Description: Write a function that checks for uppercase character
 *
 * Return: 1 if c is uppercase, 0 otherwise
 */

int _isupper(int c)
{
	int c = 'A';

	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
