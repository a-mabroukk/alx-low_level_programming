#include "main.h"

/**
 * _sqrt - returns the natural square root of a number
 *
 * @n: a number whose square root should be return
 *
 * @s: iterator number
 *
 * Description: function that returns the natural square root of a number
 *
 * Return: the value
 */

int _sqrt(int n, int s)
{
	if ((s * s) > n)
	{
		return (-1);
	}
	else if ((s * s) == n)
	{
		return (s);
	}
	else
	{
		return (_sqrt(n, s + 1));
	}
}



/**
 * _sqrt_recursion - returns the natural square root of a number
 *
 * @n: a number whose square root should be return
 *
 * Description: function that returns the natural square root of a number
 *
 * Return: the value
 */

int _sqrt_recursion(int n)
{
	return (_sqrt(n, 1));
}
