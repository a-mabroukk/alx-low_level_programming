#include "main.h"

/**
 * print_array - print elements of an array
 *
 * @a: array to be print
 *
 * @n: a size of array
 *
 * Description: Write a function that prints n elements of an array of integers
 */

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);
		printf(',');
	}
	printf('\n');
}
