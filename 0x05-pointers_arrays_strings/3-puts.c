#include "main.h"

/**
 * _puts - prints a string
 *
 * @str: string to be print
 *
 * Description: Write a function that prints a string
 */

void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str + '0');
		str++;
	}
	_putchar('\n');
}
