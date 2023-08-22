#include "main.h"

/**
 * print_rev -  prints a string, in reverse
 *
 * @s: a string to be reverse
 *
 * Description: Write a function that prints a string, in reverse
 */

void print_rev(char *s)
{
	char rev;
	int L, i, j;

	while (*s != '\0')
	{
		L++;
	}
	j = L - 1;
	for (i = 0; i < L; i++)
	{
		rev[i] = str[j];
	       j--;
		_putchar(rev + '0');
	}
}
