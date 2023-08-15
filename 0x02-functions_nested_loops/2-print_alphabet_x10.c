#include "main.h"

/**
 * print_alphabet_x10 - prints alphabet
 *
 * Description: function that prints 10 times the alphabet in lowercase
 */

void print_alphabet_x10(void)
{
	int count = 0;
	int c;

	for (count = 0; count <= 9; count++)
	{
		for (c = 'a'; c <= 'z'; c++)
		{
			putchar(c);
		}
		putchar('\n');
	}
}
