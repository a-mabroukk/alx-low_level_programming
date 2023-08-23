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
	int i;

	if (str[i] != '\0')
	{
		if (i % 2 == 0)
		{
			_putchar(str[i]);
		}
	}
	_putchar('\n');
}
