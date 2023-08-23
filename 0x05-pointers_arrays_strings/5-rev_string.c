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
	int L, i = 0, temp;

	for (L = 0; *s != '\0'; s++)
	{
		if (i < L / 2)
		{
			temp = s[i];
			s[i] = s[L - 1 - i];
			s[L - 1 - i] = temp;
			i++;
			L++;
		}
	}
}
