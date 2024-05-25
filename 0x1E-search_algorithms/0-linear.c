#include "search_algos.h"

/**
 * linear_search - a function that searches for a value in an array of integers
 * using the Linear search algorithm
 * @array:  is a pointer to the first element of the array to search in
 * @size: is the number of elements in array
 * @value: is the value to search for
 * Return: If value is not present in array or if array is NULL,
 * your function must return -1
 */
int linear_search(int *array, size_t size, int value)
{
	size_t item = 0;

	if (array)
	{
		for (item = 0; item <= size; item++)
		{
			printf("Value checked array[%lu] = [%d]\n", item, array[item]);
			if (value == array[item])
			{
				return (item);
			}
		}
	}
	return (-1);
}
