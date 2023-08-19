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
	else
	{
		for (row = space - 1; row <= size; row++)
		{
			for (column = space - 1; column <= size; column++)
			{
				for (space = 1; space <= size; space--)
				{
					_putchar(' ');
				}
				_putchar('#');
				_putchar('\n');
			}
		}
	}
}
