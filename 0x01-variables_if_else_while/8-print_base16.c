#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: program that prints all the numbers of base 16 in lowercase
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int n = 0;
	int c = 'a';

	for (n = 0; n < 10 && n != 10; n++)
	{
		putchar(n + '0');
	}
	while (c <= 'f')
	{
		putchar(c);
		c++;
	}
	putchar('\n');
	return (0);
}
