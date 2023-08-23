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
	int i = 0;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (i % 2 == 0)
		{
			_putchar(str[i]);
		}
	}
	_putchar('\n');
}
