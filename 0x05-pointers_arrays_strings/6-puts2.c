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
	int L, i;

	for (L = 0; *str != '\0'; str++)
	{
		++L;
	}
	if (i % 2 == 0)
	{
		for (i =0; i < L; i += 2)
		{
			_putchar(i);
		}
	}
	_putchar('\n');
}
