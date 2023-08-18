#include "main.h"

/**
 * print_line - draws a straight line in the terminal
 *
 * @n:  is the number of times the character _ should be printed
 *
 * Description: Write a function that draws a straight line in the terminal
 */

void print_line(int n)
{
	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		while (n > 0)
		{
		_putchar('_');
		n--;
		}
		_putchar('\n');
	}
}
