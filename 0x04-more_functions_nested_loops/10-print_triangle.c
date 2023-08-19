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
	int hight, base;

	if (size <= 0)
	{
		_putchar('\n');
	}
	for (hight = 1; hight <= size; hight++)
	{
		for (base = 1; base <= size; base++)
		{
			_putchar(' ');
			_putchar('#');
		}
		_putchar('\n');
		}
	}
}
