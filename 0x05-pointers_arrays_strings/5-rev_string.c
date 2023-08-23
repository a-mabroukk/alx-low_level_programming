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
	int temp, L;
	int initial = 0;
	int end;

	for (L = 0; *s != '\0'; s++)
	{
		++L;
	}
	s = s - L;
	end = L - 1;
	while (initial < end)
	{
		temp = s[end];
		s[end] = s[initial];
		s[initial] = temp;
		initial++;
		end--;
	}
	_putchar(*s);
}
