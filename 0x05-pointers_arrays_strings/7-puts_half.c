#include "main.h"

/**
 * puts_half - prints half of a string
 *
 * @str: A string to be print
 *
 * Description: Write a function that prints half of a string
 */

void puts_half(char *str)
{
	int L, i, n;

	for (L = 0; str[L] != '\0'; L++)
	{
		;
	}
	if (L % 2 == 0)
	{
		for (i = L / 2; str[i] != '\0'; i++)
		{
			_putchar(str[i]);
		}
	}
	else
	{
		for (n = ((L - 1) / 2); str[n] != '\0' ; n++)
		{
			_putchar(str[n]);
		}
	}
	_putchar('\n');
}
