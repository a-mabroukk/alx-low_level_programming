#include "main.h"

/**
 * print_number - a function that prints an integer
 *
 * @n: an integer number
 *
 * Description: Write a function that prints an integer
 */

void print_number(int n)
{
	unsigned int n = numm;

	if (n < 0)
	{
		_putchar('-');
		numm = numm * (-1);
	}
	if ((numm / 10) > 0)
		print_number(numm / 10);
	_putchar((numm % 10) + '0');
}
