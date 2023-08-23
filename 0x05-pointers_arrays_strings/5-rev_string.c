#include "main.h"

/**
 * rev_string - reverses a string
 *
 * @s: string to be reverse
 *
 * Description: Write a function that reverses a string
 */

void rev_string(char *s)
{
	char rev[];
	int L = 0;
	int i, j;

	while (s[L] != '\0')
	{
		L++;
	}
	j = L - 1;
	for (i = 0; i < L; i++)
	{
		rev[i] = s[j];
		j--;
	}
	_putchar(rev + 0);
}
