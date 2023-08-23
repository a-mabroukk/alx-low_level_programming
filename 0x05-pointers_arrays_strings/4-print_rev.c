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

	for (L = 0; *s != '\0'; s++)
	{
		++L;
	}
	for (i = L - 1; i < L; i--)
		_putchar(s[i]);
	}
	_putchar('\n');
}
