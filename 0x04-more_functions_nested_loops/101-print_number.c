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
	int n = integer number;

	if ((n / 10) != 0)
	{
		_putchar(n / 10);
		if (n > 0)
		{
			_putchar((n % 10) + 0);
		}
		else
		{
			putchar((-n % 10) + 0);
		}
	}
	else if (((n / 10) == 0) && ((n % 10) != 0) && (n > 0))
	{
		_putchar((n % 10) + 0);
	}
	else if (((n / 10) == 0) && ((n % 10) != 0) && (n < 10))
	{
		_putchar('-');
		_putchar((-n % 10) + 0);
	}
}
