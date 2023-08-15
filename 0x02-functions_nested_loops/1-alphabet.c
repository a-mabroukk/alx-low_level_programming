#include "main.h"

/**
 * print_alphabet - prints alphabet
 *
 * Description: function that prints the alphabet, in lowercase
 */

void print_alphabet(void)
{
	int c = 'a';

	for (c = 'a'; c <= 'z'; c++)
	{
		_putchar(c);
	}
	_putchar('\n');
}
