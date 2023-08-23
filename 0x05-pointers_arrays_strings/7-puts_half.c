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

	for (L = 0; *str != '\0'; str++)
	{
		++L;
	}
	half = L / 2;
	if (L % 2 == 0)
	{
		for (i = L / 2; str[i] != '\0'; i++)
		{
			_putchar(str[i]);
		}
	}

	while (L % 2 = 1)
	{
		for (n = (L - 1) / 2; str[n]; n++)
		{
			_putchar(str[n]);
		}
	}
	_putchar('\n');
}
