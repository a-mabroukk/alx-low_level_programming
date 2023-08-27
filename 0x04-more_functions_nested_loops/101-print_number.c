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
	unsigned int tens, digit, positive = n;
	doule t_beg = 1;

	if (n == 0)
	{
		_putchar('0');
	else
	{
		if (n < 0)
		{
			positive = n * -1;
			_purchar('-');
		}
		while (t_beg <= positive)
		{
			t_beg *= 10;
		tens = t_beg / 10;

		while (tens >= 10)
		{
			digit = positive / tens;
			_putchar(digit + '0');
			positive = (positive - (tens * digit));
			tens /= 10;
		}
	}
}
