#include "main.h"

/**
 * times_table - function that prints the times table
 *
 * Description: Write a function that prints the 9 times table, starting with 0
 */

void times_table(void)
{
	int num, mult, prod;

	for (num = 0; num <= 9; num++)
	{
		_putchar('0');
		for (mult = 1; mult <= 10; mult++)
		{
			_putchar(',');
			_putchar(' ');
			prod = num * mult;

			while (prod <= 9)
			{
				_putchar(' ');
				_putchar((prod / 10) + '0');
				_putchar((prod % 10) + '0');
			}
		}
		_putchar('\n');
	}
}
