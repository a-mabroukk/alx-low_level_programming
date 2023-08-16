#include "main.h"

/**
 * times_table - function that prints the times table
 *
 * Description: Write a function that prints the 9 times table, starting with 0
 */

void times_table(void)
{
	int num1, num2;

	for (num1 = 0; num1 <= 9; num1++)
	{
		for (num2 = 0; num2 <= 10; num2++)
		{
			_putchar((num1 + '0');
			_putchar('*');
			_putchar((num2 / 10) + '0');
			_putchar((num2 % 10) + '0');
			_putchar('\n');
		}
	}
}
