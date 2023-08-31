#include "main.h"

/**
 * factorial - returns the factorial of a given number
 *
 * @n: a number whose factorial should be return
 *
 * Description: Write a function that returns the factorial of a given number
 *
 * Return: the value
 */

int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0)
	{
		return (1);
		return (n * factorial(n - 1));
	}
	return (0);
}
