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
	int end, i;

	for (i = 0; i < n; i++)
	{
		for (end = n - 1; i < end; end--)
		{
			int initial, last;

			initial	= a[i];
			last = a[end];
			a[i] = last;
			a[end] = initial;
		}
	}
}
