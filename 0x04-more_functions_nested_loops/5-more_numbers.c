#include "main.h"

/**
 * more_numbers - prints 10 times the numbers
 *
 * Description: Write a function that prints 10 times the numbers
 */

void more_numbers(void)
{
	int count = 0;
	int num = 0;

	for (count = 0; count <= 9; count++)
	{
		while (num <= 14)
		{
			if (num > 9)
			{
				_putchar((num % 10) + '0');
			}
			_putchar((num / 10) + '0');
		}
	}
	_putchar('\n');
	num++;
}
