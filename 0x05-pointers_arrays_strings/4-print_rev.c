#include "main.h"

/**
 * print_rev -  prints a string, in reverse
 *
 * @s: a string to be reverse
 *
 * Description: Write a function that prints a string, in reverse
 */

void print_rev(char *s)
{
	int L, i;

	for (L = 0; *s != '\0' ; L++)
	{
		s++;
	}
	for (i = L; i > 0; i--)
	{
		_putchar(*s);
		L--;
	}
	_putchar('\n');
}
