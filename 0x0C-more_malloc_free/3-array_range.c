#include "main.h"
#include <stdlib.h>

/**
 * array_range - creates an array of integers
 *
 * @min: minimum value
 *
 * @max: maximum value
 *
 * Description: Write a function that creates an array of integers
 *
 * Return: the pointer to the newly created array
 */

int *array_range(int min, int max)
{
	int *array;
	int e, size;

	if (min > max)
	{
		return (NULL);
	}
	size = max - min;
	array = malloc(sizeof(int) * (size + 1));
	if (array == 0)
	{
		return (NULL);
	}
	for (e = 0; min <= max ; e++)
	{
		array[e] = min;
		min++;
	}
	return (array);
}
