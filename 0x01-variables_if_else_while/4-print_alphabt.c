#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Print all the letters except q and e
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char c = 'a';

	while (c <= 'z')
	{
		if (c != 'e' && c != 'q')
		putchar(c);
		c++;
	}
	putchar('\n');
	return (0);
}
