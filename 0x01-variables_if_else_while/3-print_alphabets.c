#include <stdio.h>

/**
 * main - Entry - point
 *
 * Description: print the alphabet in lowercase, and then in uppercase
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char c = 'a';
	char C = 'A';

	do {
	} while (c <= 'z');
	{
		putchar(c);
		c++;
	}
	do {
	} while (C <= 'Z');
	{
		putchar(C);
		C++;
		putchar('\n');
	}
	return (0);
}
