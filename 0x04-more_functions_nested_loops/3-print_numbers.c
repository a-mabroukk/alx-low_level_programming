#include "main.h"

/**
 * print_numbers - prints the numbers
 *
 * Description: Write a function that prints the numbers, from 0 to 9
 *
 * Return: Always 0 (Success)
 */

void print_numbers(void)
{
	int num = 0;

	while (num < 10)
	{
		_putchar(num);
	}
	_putchar('\n');
	return (0);
}
