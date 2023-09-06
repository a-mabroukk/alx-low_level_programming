#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - returns a pointer to a 2 dimensional array of integers
 *
 * @width: the width of array
 *
 * @height: the height of array
 *
 * Description: Write a function that returns a pointer to a 2
 * dimensional array of integers
 *
 * Return: NULL on failure
 */

int **alloc_grid(int width, int height)
{
	char *arr;
	int h, w;

	if (width <= 0)
	{
		return (NULL);
	}
	if (height <= 0)
	{
		return (NULL);
	}
	arr = malloc(sizeof(*int) * heigth);
	if (arr == NuLL)
	{
		return (NULL);
	}
	for (h = 0; h < heigth; i++)
	{
		arr[h] = malloc(sizeof(*int) * width);
		if (arr[h] == NULL)
		{
			return (NULL);
		}
	}
	for (h = 0; h < heigth; h++)
	{
		for (w = 0; w < width; w++)
		{
			arr[h][w] = 0;
		}
	}
	return (arr);
}
