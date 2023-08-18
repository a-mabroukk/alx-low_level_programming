#include "main.h"

/**
 * print_diagonal - draws a diagonal line on the terminal
 *
 * @n: is the number of times the character \ should be printed
 *
 * Description: Write a function that draws a diagonal line on the terminal
 */

void print_diagonal(int n)
{
	int l, int i;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (l = 0; l < n; l++)
		{
			for (i = 0; i < l; i++)
			{
				if (i != 0)
				{
					_putchar(' ');
				}
				_putchar('\\');
				_putchar('\n');
			}
		}
	}
}
