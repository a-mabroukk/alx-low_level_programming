#include "main.h"

/**
 * main - check the code
 *
 * Description: function that prints the alphabet, in lowercase
 *
 * Return: Always 0
 */

void print_alphabet(void);

int main(void)
{
	int c = 'a';

	for (c = 'a'; c <= 'z'; c++)
	{
		_putchar(c);
	}
	putchar('\n');
	return (0);
}
