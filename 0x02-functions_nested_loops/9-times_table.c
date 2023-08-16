#include "main.h"

/**
 * times_table - function that prints the times table
 *
 * Description: Write a function that prints the 9 times table, starting with 0
 */

void times_table(void)
{
	int num1 = '9', num2;

	while (num1 == 9)
	{
		for (num2 = 0; num2 <= 9; num2++)
		{
			_putchar(num1 + '0');
			_putchar('*');
			_putchar(num2 + '0');
			_putchar('\n');
		}
	}
}
