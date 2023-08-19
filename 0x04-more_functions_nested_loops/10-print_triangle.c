#include "main.h"

/**
 * print_triangle - prints a triangle
 *
 * @size: the size of the triangle
 *
 * Description: Write a function that prints a triangle, followed by a new line
 */

void print_triangle(int size)
{
	int row, column, space;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else if (size > 0)
	{
		for (row = 1; row <= size; row++)
		{
			for (column = 1; column <= row; column++)
			{
				for (space = (size - row); space > 0; space--)
				{
					_putchar(' ');
				}
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
