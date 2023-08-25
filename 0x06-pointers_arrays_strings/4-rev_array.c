#include "main.h"

/**
 * reverse_array - reverses the content of an array
 *
 * @a: an array to be reverse
 *
 * @n: the number of elements of the array
 *
 * Desription: a function that reverses the content of an array of integers
 */

void reverse_array(int *a, int n)
{
	int initial, end, i;

	for (i = 0, end = n - 1; i < n, i < end; i++, end--)
	{
		initial	= a[i];
		a[i] = a[end];
		a[end] = initial;
	}
}
