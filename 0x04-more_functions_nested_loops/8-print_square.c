#include "main.h"

/**
 * print_square - prints a square
 *
 * @size: is the size of the square
 *
 * Description: Write a function that prints a square, followed by a new line
 */

void print_square(int size)
{
	int s, column;

	if (size <= 0)
	{
		_putchar('\n');
	}
	for (s = 1; s <= size; s++)
	{
		for (column = 1; column <= size; column++)
		_putchar('#');
		_putchar('\n');
	}
}
