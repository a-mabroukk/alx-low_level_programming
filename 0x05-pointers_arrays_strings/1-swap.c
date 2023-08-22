#include "main.h"

/**
 * swap_int - swaps the values of two integers
 *
 * @a: a first number to be swap it's value
 *
 * @b: a second number to be swap it's value
 *
 * Description: Write a function that swaps the values of two integers
 */

void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
