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
int binary_search(int *array, size_t size, int value)
{
	size_t low = 0, high = size - 1, i;

	while (low <= high)
	{
		int mid = low + (high - low) / 2;

		printf("Searching in array: ");
		for (i = low; i <= high; i++)
		{
			printf("%i%s", array[i], i == high ? "\n" : ", ");
		}
		/* Check if value is present at mid */
		if (array[mid] == value)
		{
			return (mid);
		}
		/* If value greater, ignore left half and move to right */
		else if (value > array[mid])
		{
			low = mid + 1;
		}
		/* If value is smaller, ignore right half and move to left */
		else if (value < array[mid])
		{
			high = mid - 1;
		}
	}
	/* If we reach here, then element was not present */
	return (-1);
}
