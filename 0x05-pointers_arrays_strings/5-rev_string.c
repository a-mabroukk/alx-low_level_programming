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
	int L, i, temp;

	for (L = 0; *s != '\0'; s++)
	{
		++L;
	}
	if (i < L)
	{
		temp = s[i];
		s[i] = s[L - 1];
		s[L - 1] = temp;
		i++;
	}
}