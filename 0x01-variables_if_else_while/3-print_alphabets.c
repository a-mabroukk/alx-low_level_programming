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
		/*prints 'a - z'*/
	} while (c <= 'z');
	{
		putchar(c);
		c++;
	}
	do {
		/*prints 'A - Z'*/
	} while (C <= 'Z');
	{
		putchar(C);
		C++;
		putchar('\n');
	}
	return (0);
}
