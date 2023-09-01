#include "main.h"

/**
 * _palindrome_check - check whether a given number is a palindrome or no
 *
 * @s: a string
 *
 * @n: first number
 *
 * @r: second number
 *
 * Description: Write a function that returns 1 if a string is a palindrome
 *
 * Return: value
 */

int _palindrome_check(char *s, int n, int r)
{
	if (n == r)
	{
		return (1);
	}
	if (s[n] != s[r])
	{
		return (0);
	}
	else if (n < r + 1)
	{
		return (_palindrome_check(s, n + 1, r + 1));
	}
	else
	{
		return (1);
	}
}



/**
 * _palindrome_length - check if the empty string is a palindrome or no
 *
 * @s: a string
 *
 * Description: check if the empty string is considered as a palindrome
 *
 * Return: value
 */

int _palindrome_length(char *s)
{
	if (*s != '\0')
	{
		return (1 + _palindrome_length(s + 1));
	}
	return (0);
}


/**
 * is_palindrome - returns 1 if a string is a palindrome and 0 if not
 *
 * @s: a string
 *
 * Description: Write a function that returns 1 if a string is a palindrome
 *
 * Return: value
 */

int is_palindrome(char *s)
{
	if (!(*s))
	{
		return (1);
	}
	else
	{
		return (_palindrome_check(s, 0, _palindrome_length(s) - 1));
	}
	return (0);
}
