#include "main.h"

/**
 * _prime - returns 1 if input integer is a prime number, otherwise return 0
 *
 * @n: the number should be check
 *
 * @p: an iterator number
 *
 * Description: function that returns 1 if the input integer is a prime number
 *
 * Return: the value
 */

int _prime(int n, int p)
{
	if (n == p)
	{
		return (1);
	}
	else if (n % p == 0)
	{
		return (0);
	}
	else
	{
		return (_prime(n, p - 1));
	}
}


/**
 * is_prime_number - returns 1 if input integer is a prime number, or return 0
 *
 * @n: the number should be check
 *
 * Description: function that returns 1 if the input integer is a prime number
 *
 * Return: the value
 */

int is_prime_number(int n)
{
	return (_prime(n, 2));
}
