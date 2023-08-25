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

	end = n - 1;
	for (i = 0; i < n; i++)
	{
		initial = a[i];
		end = a[end];
		a[i] = end;
		a[end] = a[initial];
		end--;
	}
}
