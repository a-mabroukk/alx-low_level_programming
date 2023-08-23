#include "main.h"

/**
 * puts2 - prints every other character of a string
 *
 * @str: string to be print
 *
 * Description: Write a function that prints every other character of a string
 */

void puts2(char *str)
{
	int L, i, e = 0;

	for (L = 0; *str != '\0'; str++)
	{
		++L;
	}
	for (i = 0; i < L; i++)
	{
		if (i % 2 == 0)
		{
			_putchar(i);
		}
	}
	_putchar('\n');
}
