#include "main.h"

/**
 * print_diagsums - prints the sum of the two diagonals
 * of a square matrix of integers
 *
 * @a: an array
 *
 * size: a size of array
 *
 * Description: Write a function that prints the sum of the two diagonals
 * of a square matrix of integers
 */

void print_diagsums(int *a, int size)
{
	int i, j, sum1 = 0, sum2 = 0;

	for (i = 0; i < (size - 1); i++)
	{
		for (j = 0; j 
